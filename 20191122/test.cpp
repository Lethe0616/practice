#include<stdio.h>
 
//struct S
//{
//	int n;
//	char c;
//	char arr[];//柔性数组成员
//};

struct S
{
	int n;//4
	char arr[];//柔性数组成员
};

int main()
{
	printf("%d\n", sizeof(struct S));//4
	return 0;
}