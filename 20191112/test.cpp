#include<stdio.h>
#include<assert.h>
#include<iostream>
using namespace std;

//void* my_memcpy(void* dest, const void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	//����
//	while (count)
//	{
//		//����һ���ֽ�
//		*(char*)dest = *(char*)src;
//		((char*)dest)++;
//		((char*)src)++;
//		//++(char*)dest;
//		//++(char*)src;
//		count--;
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,0 };
//	//int arr2[10] = { 0 };
//	//memcmp(arr2, arr1, 20);//20Ϊ�ֽ���
//	mommove(arr1 + 2, arr1, 16); //3 4 5 6 5 6 7 8 9 0
//	//��1 2 3 4������3 4 5 6
//	//my_memcmp(arr1 + 2, arr1, 16);
//	return 0;
//}

//void* my_mommove(void* dest, const void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest < src)
//	{
//		while (count)
//		{
//			//����һ���ֽ�
//			*(char*)dest = *(char*)src;
//			dest=((char*)dest)+1;
//			src=((char*)src)+1;
//			count--;
//		}
//	}
//	else
//	{
//		//��->ǰ
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,0 };
//	my_mommove(arr1, arr1 + 2, 16); //3 4 5 6 5 6 7 8 9 0
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,3,3,3,3 };
//	int ret = memcmp(arr1, arr2, 12);//3���ֽ�
//	printf("ret=%d\n", ret);//ret=0
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	memset(arr, 0, 40);
//	return 0;
//}
//
//struct Node
//{
//	int data;//������
//	struct Node* next;//ָ����
//};

#include<stddef.h>
struct S
{
	char c1;//1
	int i;//4
	char c2;//1
};
//�����������  \Ϊ���з�(��һ�в������) ת���ַ� �����ʲô��ת��ʲô ֱ���ûس�-- ת��س�
#define my_offsetof(structName,memName) \
(int)&(((structName*)0)->memName)
//offsetof
int main()
{
	printf("%d\n", my_offsetof(struct S, c1));//0
	printf("%d\n", my_offsetof(struct S, i));//4
	printf("%d\n", my_offsetof(struct S, c2));//8
	return 0;
}

//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};

//struct S4
//{
//	char c1;//0
//	struct S3 s3;//
//	double d;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s));//12
//	printf("%d\n", sizeof(s2));//8
//	printf("%d\n", sizeof(struct S3));//16
//	printf("%d\n", sizeof(struct S4));//
//	return 0;
//}