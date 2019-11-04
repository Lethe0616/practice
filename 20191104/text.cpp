#include<stdio.h>
#include<stdlib.h>
#include<search.h>
#include<string.h>

void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;//强制类型转换
}


void test1()
{
	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
	//bubble_sort(arr, 10);
	bubble_sort(arr, 10, sizeof(arr[0]), cmp_int);
	print_arr(arr, 10);
#if 0
	void qsort
	(void* base,
		size_t num,
		size_t width,
		int(*compare)
		(const void* e1, const void* e2)
	);
#endif
	qsort(arr, 10, sizeof(arr[0]), cmp_int);//每个元素大小int
}

struct S
{
	char name[20];
	int age;
};

int cmp_s_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct S*)e1)->name, ((struct S*)e2)->name);
}

void test2()
{
	struct S arr[] = { {"ZS",20},{"LS",30},{"WW",10} };
	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), cmp_s_by_name);
}

void Swap(char* buf1, char* buf2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char temp = *buf1;
		*buf1 = *buf2;
		*buf2 = temp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void* base, int sz, int width,
	int(*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		if (cmp((char*)base + j * width, (char*)base + (j + 1) * width)>0)
		{
			//交换
			Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);

		}
	}
}
int main()
{
	test1();
	test2();
	system("pause");
	return 0;
}