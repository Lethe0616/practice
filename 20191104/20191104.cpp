#include<stdio.h>
#include <string.h>

int main()
{
	//��ά����
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//3*4*4=48
	printf("%d\n", sizeof(a[0][0]));//4
	printf("%d\n", sizeof(a[0]));//16  a[0]��һ�е������� sizeof(a[0])��һ�е��ܴ�С����λ���ֽ�
	printf("%d\n", sizeof(a[0] + 1));//4 ��һ�еڶ���Ԫ�ص�ַ 
	printf("%d\n", sizeof(*(a[0] + 1)));//4 ��һ�еڶ���Ԫ��
	printf("%d\n", sizeof(a + 1));//4 �ڶ��еĵ�ַ
	printf("%d\n", sizeof(*(a + 1)));//16 �ڶ��еĴ�С
	printf("%d\n", sizeof(&a[0] + 1));//4 �ڶ��еĵ�ַ
	printf("%d\n", sizeof(*(&a[0] + 1)));//16 �ڶ��еĴ�С
	printf("%d\n", sizeof(*a));//16 ��һ�еĴ�С *a=*(a+0)=a[0]->16
	printf("%d\n", sizeof(a[3]));//

	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr));//7*1=7
	printf("%d\n", sizeof(arr + 0));//4
	printf("%d\n", sizeof(*arr));//1
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4
	printf("%d\n", sizeof(&arr + 1));//4
	printf("%d\n", sizeof(&arr[0] + 1));//4

	printf("%d\n", strlen(arr));//6
	printf("%d\n", strlen(arr + 0));//6
	printf("%d\n", strlen(*arr));//err
	printf("%d\n", strlen(arr[1]));//err
	printf("%d\n", strlen(&arr));//6
	printf("%d\n", strlen(&arr + 1));//���ֵ
	printf("%d\n", strlen(&arr[0] + 1));//6

	char* p = "abcdef";
	printf("%d\n", sizeof(p));//4
	printf("%d\n", sizeof(p + 1));//4
	printf("%d\n", sizeof(*p));//1
	printf("%d\n", sizeof(p[0]));//1
	printf("%d\n", sizeof(&p));//4
	printf("%d\n", sizeof(&p + 1));//4
	printf("%d\n", sizeof(&p[0] + 1));//4

	printf("%d\n", strlen(p));//6
	printf("%d\n", strlen(p + 1));//6
	printf("%d\n", strlen(*p));//err
	printf("%d\n", strlen(p[0]));//err
	printf("%d\n", strlen(&p));//���ֵ
	printf("%d\n", strlen(&p + 1));//���ֵ
	printf("%d\n", strlen(&p[0] + 1));//5
}
