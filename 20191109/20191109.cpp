#include<bitset>
#include<iostream>
using namespace std;

#if 0
class bitset
{
public:
	bitset(size_t bitCount)
		:_bit((bitCount>>5)+1),_bitCount(bitCount)
	{}

// 将which比特位置1
void set(size_t which)
{
	if (which > _bitCount)
		return;
	size_t index = (which >> 5);
	size_t pos = which % 32;
	_bit[index] |= (1 << pos);
}
// 将which比特位置0
void reset(size_t which)
{
	if (which > _bitCount)
		return;
	size_t index = (which >> 5);
	size_t pos = which % 32;
	_bit[index] &= ~(1 << pos);
}
// 检测位图中which是否为1
bool test(size_t which)
{
	if (which > _bitCount)
		return false;
	size_t index = (which >> 5);
	size_t pos = which % 32;
	return _bit[index] & (1 << pos);
}
// 获取位图中比特位的总个数
size_t size()const { return _bitCount; }
// 位图中比特为1的个数
size_t Count()const
{
	int bit Cnttable[256] = {
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
6, 7, 6, 7, 7, 8 };

	size_t size = _bit.size();
	size_t count = 0;
	for (size_t i = 0; i < size; ++i)
	{
		int value = _bit[i];
		int j = 0;
		while (j < sizeof(_bit[0]))
		{
				pair<iterator, bool> insert(const Value Type & valye)
			{
				return _ht.Insert(valye);
			}

			iterator erase(iterator position)
			{
				return _ht.Erase(position);
			}
			////////////////////////////////////////////////////////////
			// bucket
			size_t bucket_count() { return _ht.BucketCount(); }
			size_t bucket_size(const K & key) { return _ht.Bucket Size(key); }
		private:
			HT _ht;
		};
		class bitset
		{
		public:
			bitset(size_t bitCount)
				: _bit((bit Count >> 5) + 1), _bitCount(bit Count)
			{}
			unsigned char c = value;
			count += bitCntTable[c];
			++j;
			value >>= 8;
		}
	}
	return count;
}

private:
	vector<int> _bit;
	size_t _bit Count;
};
#endif

#if 0
#include"BitSet.h"

void TestBiteSet()
{
	bitset<100> bs;
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

int  main()
{
	TestBiteSet();
	return 0;
}
#endif

#if 0
#include<string.h>
int main()
{
	char* p1 = "abcdef";
	char* p2 = "abc";
	if (strlen(p2) - strlen(p1) > 0)
	{
		printf("p2>p1");
	}
	else
	{
		printf("p2<=p1");
	}
	return 0;
}
#endif

#include<string.h>
#include<assert.h>

#if 0
size_t my_strlen(const char* str)
{
	size_t count = 0;
	//空指针 断言
	assert(str != NULL);
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}
#endif

#if 0
size_t my_strlen(const char* str)
{
	const char* start = str;
	while (*str)
	{
		str++;
	}
	return str - start;
}
#endif

#if 0
size_t my_strlen(const char* str)
{
	assert(str != NULL);
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}
#endif

#if 0
int main()
{
	char* p = "abcdef";
	int len = my_strlen(p);
	printf("len=%d\n", len);
	return 0;
}
#endif
//有"\0"
//目标空间足够大
//目标空间可修改

//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr[20] = { 0 };
//	char arr[] = { "L","H","Z","\0" };
//	//strcpy(arr, "hello word");
//	//printf("%s\n", arr);
//	printf("%s\n", strcpy(arr,arr2)); //链式访问
//	return 0; 
//}

char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	//1.找目标空间中的'\0'
	/*while（* dest++ != '\0')
	 {
     }
	  dest--;
	 */
	while (*dest != '\0')
	{
		dest++;
	}
	//2.追加内容
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr[20] = "hello";
	strcat(arr, "word");
	printf("%s\n", arr);
	return 0;
}

