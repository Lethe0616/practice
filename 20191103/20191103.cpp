#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#if 0
void bubble_sort(void* base, size_t sz, size_t width,
	int (*cmp)(const void* e1, const void* e2))
{
	size_t i = 0;
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		//相邻两个元素的比较
		size_t j = 0;
		for (j = 0; j < sz - i - 1; j++)
		{
			//比较
			//传给cmp函数好的要比较的两个元素的地址
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//交换
				_Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);

			}
		}
	}
}

void _Swap(char* buf1, char* buf2, size_t width)
{
	size_t i = 0;
	for (i = 0; i < width; i++) {
		char tmp = *buf2;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
	    buf2++;
	}
}

#endif

int main()
{
	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a));//16 整个数组大小 4*4
	printf("%d\n", sizeof(a + 0));// 4 首元素地址
	printf("%d\n", sizeof(*a));//4 首元素
	printf("%d\n", sizeof(a + 1));//4 第二个元素地址
	printf("%d\n", sizeof(a[1]));//4 第二个元素
	printf("%d\n", sizeof(&a));//4 数组的地址
	printf("%d\n", sizeof(*&a));//16 整个数组
	printf("%d\n", sizeof(&a + 1));//4 跳过一个数组指向4的后面
	printf("%d\n", sizeof(&a[0]));//4 首元素地址
	printf("%d\n", sizeof(&a[0]+1));//4  第二个元素的地址


	//二维数组
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(a[0][0]));
	printf("%d\n", sizeof(a[0]));
	printf("%d\n", sizeof(a[0] + 1));
	printf("%d\n", sizeof(*(a[0] + 1)));
	printf("%d\n", sizeof(a + 1));
	printf("%d\n", sizeof(*(a + 1)));
	printf("%d\n", sizeof(&a[0] + 1));
	printf("%d\n", sizeof(*(&a[0] + 1)));
	printf("%d\n", sizeof(*a));
	printf("%d\n", sizeof(a[3]));
	printf("%d\n", sizeof(&a[0] + 1));

	//字符数组
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr));//6
	printf("%d\n", sizeof(arr + 0));//4 首元素地址 char4个字节 
	printf("%d\n", sizeof(*arr));//1
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4
	printf("%d\n", sizeof(&arr + 1));//4
	printf("%d\n", sizeof(&arr[0] + 1));//4

	printf("%d\n", strlen(arr));//随机值
	printf("%d\n", strlen(arr + 0));//随机值
	printf("%d\n", strlen(*arr));//err
	printf("%d\n", strlen(arr[1]));//err
	printf("%d\n", strlen(&arr));//随机值
	printf("%d\n", strlen(&arr + 1));//随机值-6
	printf("%d\n", strlen(&arr[0] + 1));//随机值-1

	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr + 0));
	printf("%d\n", sizeof(*arr));
	printf("%d\n", sizeof(arr[1]));
	printf("%d\n", sizeof(&arr));
	printf("%d\n", sizeof(&arr + 1));
	printf("%d\n", sizeof(&arr[0] + 1));

	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr + 0));
	printf("%d\n", strlen(*arr));
	printf("%d\n", strlen(arr[1]));
	printf("%d\n", strlen(&arr));
	printf("%d\n", strlen(&arr + 1));
	printf("%d\n", strlen(&arr[0] + 1));

	char* p = "abcdef";
	printf("%d\n", sizeof(p));
	printf("%d\n", sizeof(p + 1));
	printf("%d\n", sizeof(*p));
	printf("%d\n", sizeof(p[0]));
	printf("%d\n", sizeof(&p));
	printf("%d\n", sizeof(&p + 1));
	printf("%d\n", sizeof(&p[0] + 1));

	printf("%d\n", strlen(p));
	printf("%d\n", strlen(p + 1));
	printf("%d\n", strlen(*p));
	printf("%d\n", strlen(p[0]));
	printf("%d\n", strlen(&p));
	printf("%d\n", strlen(&p + 1));
	printf("%d\n", strlen(&p[0] + 1));

	return 0;
}
