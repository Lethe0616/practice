#pragma once
#include"HashBucket.h"

namespace bite
{
	template<class K,class V,class HF=DFDef<K>>
	class unordered_map;
	{
		typedef pair<K, V> ValueType;
		typedef unordered_map<K, V, HF> Self;
		struct KeyofValue
		{
			const K& operator()(const ValueType& data)
			{
				return data.first;
			}
		};
		typedef HashBucket<ValueType, KeyofValue,HF>;

	public:
		typename typedef HB::Iterator iterator;
	public:
		undered_map(size_t n)
			:_hb(n)
		{}

		iterator begin()
		{
			return _hb.begin();
		}

		iterator end()
		{
			return _hb.End();
		}

		V& operator[] {const K&key}
		{
			return(*_hb.Insert(ValueType(key, V())).first))->second;
		}

		iterator find(const K& key)
		{
			return _hb.Find(key);
		}

		pair<iterator, bool> inser(const ValueType& data)
		{
			return _hb.Insert(data);
		}

		size_t erase(const K& key)
		{
			return _ht.Erase(key);
		}

		void clear()
		{
			_hb.Clear();
		}

		void swap(Self& s)
		{
			_ht.Swap(s._hb);
		}

		size_t size() const
		{
			return _h.Size;
		}

		bool empty() const
		{
			return _hb.Empty();
		}

		size_t bucker_count()const
		{
			return _ht.BuckerCount;
		}

		size_t bucket_size(size_t n)const
		{
			return _ht.BucketSize(n);
		}
	private:
		HB _hb;
	}
}

void TestUnorderMao()
{
	bite::undered_map<int, int m(10);

	int array[] = { 4,5,7,8,1,0,3,9,2,6 };
	for(auto e:array)

	m.insert(make_pair(e,e);
	cout << m.size() << endl;
	cout << m.bucket_count() << endl;
	cout << m.bucket_size(3) << endl;

	auto ir = m.begin();
	while (it != m.end())
	{
		cout << it->first << "--->" << it->second << endl;
		++it;
	}
	cout << endl;

	for(auto e:m)
		cout << e.first << "--->" << e.second << endl;

	if (m.end() != m.find(3))
		cout << "3 is in unordered_map" << endl;
	else
		cout << "3 is not in unordered_map" << endl;

	m.erase(3);

	if (m.end() != m.find(3))
		cout << "3 is in unordered_map" << endl;
	else
		cout << "3 is not in unordered_map" << endl;
}