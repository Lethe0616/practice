#pragma once
#include<iostream>
using namespace std;

#include<vector>
#include<string>

template<class T>
struct HBNode
{
	HBNode(const T& data)
		:_pNext(nullptr)
		, _data(data)
	{}

	HBNode<T>* _pNext;
	T _data;
};

template<class T>
//将data类型转化为整形
class DFDef
{
public:
	//仿函数
	T operator()(const T& data)
	{
		return data;
	}
};

//转换为string类型
class StringToINT
{
public:
	size_t operator()(const string& s)
	{
		//return s[0];


		//ASC码相加
#if 0
		size_t hashAddr = 0;
		for (auto e : s)
			hashAddr += e;

		return hashAddr;
#endif 

		return BKDRHash(s.c_str());
	}

		size_t BKDRHash(const char * str)
		{
			register size_t hash = 0;
			while (size_t ch = (size_t)*str++)
			{
				hash = hash*131 + ch;
			}
			return hash
		}
};

template<class T, class HF = DFDef<int>>
class HashBucket
{
public:
	HashBucket(size_t capacity)
		: _table(capacity, nullptr)
		, _size(0)
	{}

	bool Insert(const T& data)
	{
        //检查是否需要扩容
		CheckCapacity();

		//计算当前元素所在的桶号
		size_t bucketNo = HashFunc(data);

		//检测该元素是否在桶中
		HBNode<T>* pCur = _table[bucketNo];
		while (pCur)
		{
			if (pCur->_data == data)
				return false;

			pCur = pCur->_pNext;
		}

		//插入元素
		pCur = new HBNode<T>(data);//头插 时间复杂的O(1)
		pCur->_pNext = _table[bucketNo];
		_table[bucketNo] = pCur;
		++_size;
		return true;
	}

	HBNode<T>* Find(const T& data)
	{
		size_t bucketNo = HashFunc(data);
		HBNode<T>* pCur = _table[bucketNo];

		while (pCur)
		{
			if (pCur->_data == data)
				return pCur;

			pCur = pCur->_pNext;
		}
		return nullptr;
	}

	bool Erase(const T& data)
	{
		size_t bucketNo = HashFunc(data);
		HBNode<T>* pCur = _table[bucketNo];

		HBNode<T>* pPre = nullptr;
		while (pCur)
		{
			//找到待删除的元素
			if (pCur->_data == data)
			{
				//删除当前链表中第一个节点
				if (nullptr == pPre)
				{
					_table[bucketNo] = pCur->_pNext;
				}
				else
				{
					pPre->_pNext = pCur->_pNext;
				}

				delete pCur;
				--size;
				return true;
			}
			pPre = pCur;//标记
			pCur = pCur->_pNext;
		}
		return false;
	}

	size_t Size() const
	{
		return _size;
	}

	void Swap(HashBucket<T>& hb)
	{
		_table.swap(hb._table);
		Swap(_size, hb._size);
	}

	void Clear()
	{
		for (size_t bucketNo = 0; bucketNo < _table.capacity(); ++bucketNo)
		{
			//拿到链表第一个节点
			HBNode<T>* pCur = _table[bucketNo];
			while (pCur)
			{
				//头删
				_table[bucketNo] = pCur->_pNext;
				delete pCur;
				pCur = _table[bucketNo];
			}
		}
	}

	void Print()
	{
		for (size_t bucketNo = 0; bucketNo < _table.capacity(); ++bucketNo)
		{
			cout << "H[" << bucketNo << "]:";
			//拿到链表第一个节点
			HBNode<T>* pCur = _table[bucketNo];
			while (pCur)
			{
				cout << pCur->_data << "---->";
				pCur = pCur->_pNext;
			}

			cout << "NULL" << endl;
		}

		cout << endl;
	}

private:
	size_t HashFunc(const T& data)
	{
		return HF()(data) % _table.capacity();
	}
	 
	void CheckCapacity()
	{
		if (_size == _table.capacity())
		{
			HashBucket<T> newHB(_size * 2);

			for (size_t bucketNo = 0; bucketNo < _table.capacity(); ++bucketNo)
			{
				HBNode<T>* pCur = _table[bucketNo];
				while (pCur)
				{
					//缺陷：节点重复创建
					//newHB.Insert(pCur->_data);
					//pCur = pCur->_pNext;

					//计算当前节点在新哈希桶中的桶号
					size_t newbucketNo = newHB.HashFunc(pCur->_data);
					  
					//将pcur从旧哈希桶中移除
					_table[bucketNo] = pCur->_pNext;

					//将pcur头插到新哈希桶中
					pCur->_pNext = newHB._table[newbucketNo];
					newHB._table[newbucketNo] = pCur;

					//从旧哈希桶中取下一个节点
					pCur = _table[bucketNo];
				}
			}

			Swap(newHB);
		}
	}

private:
	//节点地址 别名为table
	vector<HBNode<T>* > _table；
	size_t _size;
};

void TestHashBucket()
{
	HashBucket<int> ht(10);//10个元素
	ht.Insert(3);
	ht.Insert(8);
	ht.Insert(4);
	ht.Insert(0);
	ht.Insert(7);
	ht.Insert(33);
	cout << ht.Size() << endl;

	ht.Print();

	ht.Erase(33);
	ht.Print();

	ht.Erase(3);
	if (nullptr == ht.Find(3))
	{
		cout << "3 is not in" << endl;
	}
	else
	{
		cout<<"3 is in" << endl;
	}
	ht.Print();

	ht.Clear();
	ht.Size();
}