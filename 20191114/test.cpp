#include<iostream>
using namespace std;

//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}

//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	//����1����ʾС��
//	//����0����ʾ���
//	return u.c;
//}
//
//int main()
//{
//	//��char*�����÷���һ���ֽ�
//	//if (*(char*)&a == 1)
//	if(check_sys()==1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//
//	//0x 00 00 00 01
//	//��                 ��
//	//С�ˣ�01 00 00 00
//	//��ˣ�00 00 00 01
//	return 0;
//}

//������sizeof��С������Ա�Ĵ�С

//union Un
//{
//	char c[5];//5
//	int i;//4
//};
//
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//	return 0;
//}

#include<stdio.h>
#include<errno.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	//int *p=(int*)malloc(10 * sizeof(int));
	int* p = (int*)malloc(INT_MAX);
	int i = 0;
	if (p = NULL)
	{
		printf("%s\n", strerror(errno));//No enough space
	}
	for (i = 0; i < 10; i++)
	{
		//�±�ΪiԪ�صĵ�ַ
		*(p + i )= i + 1;
	}
	for (i = 0; i < 10; i++)
	{
		//printf("%d ", *(p+i));//1 2 3 4 5 6 7 8 9 10
		printf("%d ", *(p + i));
	}

	free(p);
	return 0;
}
