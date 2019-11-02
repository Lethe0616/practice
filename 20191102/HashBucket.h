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
//��data����ת��Ϊ����
class DFDef
{
public:
	//�º���
	T operator()(const T& data)
	{
		return data;
	}
};

//ת��Ϊstring����
class StringToINT
{
public:
	size_t operator()(const string& s)
	{
		//return s[0];


		//ASC�����
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
        //����Ƿ���Ҫ����
		CheckCapacity();

		//���㵱ǰԪ�����ڵ�Ͱ��
		size_t bucketNo = HashFunc(data);

		//����Ԫ���Ƿ���Ͱ��
		HBNode<T>* pCur = _table[bucketNo];
		while (pCur)
		{
			if (pCur->_data == data)
				return false;

			pCur = pCur->_pNext;
		}

		//����Ԫ��
		pCur = new HBNode<T>(data);//ͷ�� ʱ�临�ӵ�O(1)
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
			//�ҵ���ɾ����Ԫ��
			if (pCur->_data == data)
			{
				//ɾ����ǰ�����е�һ���ڵ�
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
			pPre = pCur;//���
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
			//�õ������һ���ڵ�
			HBNode<T>* pCur = _table[bucketNo];
			while (pCur)
			{
				//ͷɾ
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
			//�õ������һ���ڵ�
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
					//ȱ�ݣ��ڵ��ظ�����
					//newHB.Insert(pCur->_data);
					//pCur = pCur->_pNext;

					//���㵱ǰ�ڵ����¹�ϣͰ�е�Ͱ��
					size_t newbucketNo = newHB.HashFunc(pCur->_data);
					  
					//��pcur�Ӿɹ�ϣͰ���Ƴ�
					_table[bucketNo] = pCur->_pNext;

					//��pcurͷ�嵽�¹�ϣͰ��
					pCur->_pNext = newHB._table[newbucketNo];
					newHB._table[newbucketNo] = pCur;

					//�Ӿɹ�ϣͰ��ȡ��һ���ڵ�
					pCur = _table[bucketNo];
				}
			}

			Swap(newHB);
		}
	}

private:
	//�ڵ��ַ ����Ϊtable
	vector<HBNode<T>* > _table��
	size_t _size;
};

void TestHashBucket()
{
	HashBucket<int> ht(10);//10��Ԫ��
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