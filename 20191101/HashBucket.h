#pragma once

template<class T>
struct HBNode
{
	HBNode(const T&data)
		:_pNext(nullptr)
		,_data(data)
	{}

	HBNode<T>* _pNext;
	T _data;
};

template<class T>
struct HashBucket
{
public:
	HashBucket(size_t capacity)
		:_table(capacity,nullptr)
		,_size(0)
	{}

	bool Insert(const T& data)
	{
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
		pCur = new HBNode<T>(data);
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

private:
	size_t HashFunc(const V& data)
	{
		return data % _table.capacity();
	}

private:
	//节点地址 别名为table
	vector<HTNode<T>*> _table;
	size_t _size;
};