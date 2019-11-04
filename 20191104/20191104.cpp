#include<stdio.h>
#include <string.h>

int main()
{
	//二维数组
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//3*4*4=48
	printf("%d\n", sizeof(a[0][0]));//4
	printf("%d\n", sizeof(a[0]));//16  a[0]第一行的数组名 sizeof(a[0])第一行的总大小，单位是字节
	printf("%d\n", sizeof(a[0] + 1));//4 第一行第二个元素地址 
	printf("%d\n", sizeof(*(a[0] + 1)));//4 第一行第二个元素
	printf("%d\n", sizeof(a + 1));//4 第二行的地址
	printf("%d\n", sizeof(*(a + 1)));//16 第二行的大小
	printf("%d\n", sizeof(&a[0] + 1));//4 第二行的地址
	printf("%d\n", sizeof(*(&a[0] + 1)));//16 第二行的大小
	printf("%d\n", sizeof(*a));//16 第一行的大小 *a=*(a+0)=a[0]->16
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
	printf("%d\n", strlen(&arr + 1));//随机值
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
	printf("%d\n", strlen(&p));//随机值
	printf("%d\n", strlen(&p + 1));//随机值
	printf("%d\n", strlen(&p[0] + 1));//5
}
