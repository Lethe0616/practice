#include<stdio.h> 
#include<assert.h>
#include<string.h>
/*
void* my_mommove(void* dest, const void* src, size_t count)
{
	void* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	if (dest < src)
	{
		while (count)
		{
			//����һ���ֽ�
			*(char*)dest = *(char*)src;
			dest=((char*)dest)+1;
			src=((char*)src)+1;
			count--;
		}
	}
	else
	{
		//��->ǰ
		while (count--)
		{
			*((char*)dest + count) = *((char*)src + count);
		}
	}
}

int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,0 };
	my_mommove(arr1 + 2, arr1, 16); //3 4 5 6 5 6 7 8 9 0
	my_mommove(arr1, arr1+2, 16);
	return 0;
}
*/

int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,0 };
	int arr2[10] = { 0 };
	memcmp(arr2, arr1, 20);//20Ϊ�ֽ���(2*10)
	return 0;
}
