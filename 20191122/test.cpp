#include<stdio.h>
 
//struct S
//{
//	int n;
//	char c;
//	char arr[];//���������Ա
//};

struct S
{
	int n;//4
	char arr[];//���������Ա
};

int main()
{
	printf("%d\n", sizeof(struct S));//4
	return 0;
}