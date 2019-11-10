#include<stdio.h>
#include<string.h>
#include<assert.h>
#include <iostream>
using namespace std;
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abq";
//	int ret =strcmp(p1, p2);
//	printf("ret=%d\n", ret);
//	return 0;
//}
//
//int my_strcmp(const char*s1,const char*s2)
//{
//	assert(s1);
//	assert(s2);
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//			return 0;
//		s1++;
//		s2++;
//	}
//	//return *s1 - *s2;
//	if (*s1 > * s2)
//		return 1;
//	else
//		return -1;
//}
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abq";
//    int ret =my_strcmp(p1, p2);
//	printf("ret=%d\n", ret);
//
//	return 0;
//}

//char* st** r n** cpy(char* destination, const char* source, size_t num)

//int main()
//{
//	char arr[20] = { 0 };
//	strncpy(arr, "hello bite", 3);
//	printf("%s\n", arr);
//	return 0;
//}


int main()
{
	char str[4] = { 'w', 'x', 'y', 'z' };
	char* p = "a\0bcdefg";
	strncpy(str, p, sizeof(str) - 1);

	cout << int(str[0]) << endl; // 'a'
	cout << int(str[1]) << endl; // '\0'
	cout << int(str[2]) << endl; // '\0'   //确实要注意这个值， 不是'b'

	cout << int(str[3]) << endl; // 'z'

	return 0;
}

int main()
{
	char str[4] = { 0 };
	char* p = "abcdefg";
	strncpy(str, p, sizeof(str) - 1);
	cout << str << endl;

	return 0;
}