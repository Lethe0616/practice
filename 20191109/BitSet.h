#pragma once
#include<vector>
#include<iostream>
#include<assert.h>
using namespace std;

namespace bite
{
	//N代表比特位的个数
	template<size_t N>
	class bitset
	{
	public:
		bitset()
		{

			_bs.resize((N >> 3) + 1);
		}

		//将num的比特位置1
		bitset<N>& set(size_t num)
		{
			assert(num < N);
			//计算num所对应的字节
			size_t index = (num >> 3);
			//size_t index = num / 8; 计算太慢
			size_t pos = num % 8;

			_bs[index] &= ~(1 << pos);
			return *this;
		}

		bool test(size_t num)const
		{
			assert(num < N);
			//计算num所对应的字节
			size_t index = (num >> 3);
			//size_t index = num / 8; 计算太慢
			size_t pos = num % 8;

			return 0 != (_bs[index] & (1 << pos));
		}

		void set(size_t num)
		{
			retuen N;
		}

		size_t count()const
		{
			int bitCnttable[256] =
			{
				 0, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 3, 2, 3, 3, 4, 1, 2, 2, 3, 2, 3, 3, 4, 2,
				 3, 3, 4, 3, 4, 4, 5, 1, 2, 2, 3, 2, 3, 3, 4, 2, 3, 3, 4, 3, 4, 4, 5, 2, 3,
				 3, 4, 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5, 6, 1, 2, 2, 3, 2, 3, 3, 4, 2, 3, 3,
				 4, 3, 4, 4, 5, 2, 3, 3, 4, 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5, 6, 2, 3, 3, 4,
				 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5, 6, 3, 4, 4, 5, 4, 5, 5, 6, 4, 5, 5, 6, 5,
				 6, 6, 7, 1, 2, 2, 3, 2, 3, 3, 4, 2, 3, 3, 4, 3, 4, 4, 5, 2, 3, 3, 4, 3, 4,
				 4, 5, 3, 4, 4, 5, 4, 5, 5, 6, 2, 3, 3, 4, 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5,
				 6, 3, 4, 4, 5, 4, 5, 5, 6, 4, 5, 5, 6, 5, 6, 6, 7, 2, 3, 3, 4, 3, 4, 4, 5,
				 3, 4, 4, 5, 4, 5, 5, 6, 3, 4, 4, 5, 4, 5, 5, 6, 4, 5, 5, 6, 5, 6, 6, 7, 3,
				 4, 4, 5, 4, 5, 5, 6, 4, 5, 5, 6, 5, 6, 6, 7, 4, 5, 5, 6, 5, 6, 6, 7, 5, 6,
				 6, 7, 6, 7, 7, 8
			};

			size_t  szCount = 0;
			for (auto e : _bs)
				szCount += bitCnttable[e];

			return szCount;

		private:
			std::vector<unsigned char> _bs;
		};
	}

void TestBiteSet()
	{
		bite::bitset<100> bs;
		int array[] = { 1,3,7,4,12,16,19,13,22,18 };
		for (auto e : array)
			bs.set(e);

		cout << bs.count() << endl;
		cout << bs.size() << endl;

		if (bs.text(13))
			cout << "13 is in" << endl;
		else
			cout << "13 is not in" << endl;

		bs.reset(13);

		if (bs.text(13))
			cout << "13 is in" << endl;
		else
			cout << "13 is not in" << endl;
	}