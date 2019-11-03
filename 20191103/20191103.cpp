#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#if 0
void bubble_sort(void* base, size_t sz, size_t width,
	int (*cmp)(const void* e1, const void* e2))
{
	size_t i = 0;
	//����
	for (i = 0; i < sz - 1; i++)
	{
		//��������Ԫ�صıȽ�
		size_t j = 0;
		for (j = 0; j < sz - i - 1; j++)
		{
			//�Ƚ�
			//����cmp�����õ�Ҫ�Ƚϵ�����Ԫ�صĵ�ַ
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//����
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
	printf("%d\n", sizeof(a));//16 ���������С 4*4
	printf("%d\n", sizeof(a + 0));// 4 ��Ԫ�ص�ַ
	printf("%d\n", sizeof(*a));//4 ��Ԫ��
	printf("%d\n", sizeof(a + 1));//4 �ڶ���Ԫ�ص�ַ
	printf("%d\n", sizeof(a[1]));//4 �ڶ���Ԫ��
	printf("%d\n", sizeof(&a));//4 ����ĵ�ַ
	printf("%d\n", sizeof(*&a));//16 ��������
	printf("%d\n", sizeof(&a + 1));//4 ����һ������ָ��4�ĺ���
	printf("%d\n", sizeof(&a[0]));//4 ��Ԫ�ص�ַ
	printf("%d\n", sizeof(&a[0]+1));//4  �ڶ���Ԫ�صĵ�ַ


	//��ά����
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

	//�ַ�����
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr));//6
	printf("%d\n", sizeof(arr + 0));//4 ��Ԫ�ص�ַ char4���ֽ� 
	printf("%d\n", sizeof(*arr));//1
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4
	printf("%d\n", sizeof(&arr + 1));//4
	printf("%d\n", sizeof(&arr[0] + 1));//4

	printf("%d\n", strlen(arr));//���ֵ
	printf("%d\n", strlen(arr + 0));//���ֵ
	printf("%d\n", strlen(*arr));//err
	printf("%d\n", strlen(arr[1]));//err
	printf("%d\n", strlen(&arr));//���ֵ
	printf("%d\n", strlen(&arr + 1));//���ֵ-6
	printf("%d\n", strlen(&arr[0] + 1));//���ֵ-1

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
