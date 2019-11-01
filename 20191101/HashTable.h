#pragma once
#include<vector>

//�����ϣ���е�Ԫ�ز����ظ�
enum State
{EMPTY, EXIST, DELETE};

template<class T>
struct Elem
{
	T _value;
	State _state;
};

template<class T>
class HashTable
{
public:
	HashTable(size_t capacity=10)
		:_ht(capacity)
		,_size(0)
	{
		for (auto & e : _ht)
			e._state = EMPTY;
	}

	bool Insert(const T& value)
	{
		//ͨ����ϣ��������Ԫ���ڹ�ϣ���еĴ���λ��
		size_t hashAddr = HashFunc(value);

		//����λ���Ƿ����ֱ�Ӳ���Ԫ��
		if (EMPTY != _ht[hashAddr]._state)
		{
			if (EXIST == _ht[hashAddr]._state && value == _ht[hashAddr]._value)
			{
				return false;
			}
			//ʹ������̽����
			++hashAddr;
			if (hashAddr == _ht.capacity())
				hashAddr = 0;
		}

		//����Ԫ��
		_ht[hashAddr]._value = value;
		_ht[hashAddr]._state = EXIST;
		++_size;
		return true;
	}

	bool Find(const T& value)
	{
		size_t hashAddr = hashAddr(value);

		while (EMPTY != _ht[hashAddr]._state)
		{
			if (EXIST == _ht[hashAddr]._state && value == _ht[hashAddr]._value)
			{
				return hashAddr;
			}
			
			hashAddr++;
			if (hashAddr == _ht.capacity())
				hashAddr = 0;
		}
		return -1;
	}

	bool Erase(const T& value)
	{
		int ret = Find(value);
		if (-1 != pos)
		{
			_ht[pos], _state = DELETE;
			_size--;
			return true;
		}
		return false;
	}
private:
	size_t HashFunc(const T& value)
	{
		//ģ������
		return value % _ht.capacity();
	}
private:
	std::vector<Elem<T>> _ht;
	size_t _size;
};

void TestHashTable()
{
	//htΪ�ռ�
	HashTable<int> ht;
	ht.Insert(4);
	ht.Insert(7);
	ht.Insert(27);
}