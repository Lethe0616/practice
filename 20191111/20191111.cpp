#include<string.h> 
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//int main()
//{
//	char arr[] = "abcdefabcdef";
//	char* ret = strchr(arr, 'd');
//	if (ret != NULL)
//		printf("%s\n", ret);
//	else
//		printf("�Ҳ���\n");
//	system("pause");
//	return 0;
//}
//defabcdef

//char* my_strstr(const char* str1, const char* str2)
//{
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* cur = str1;
//
//	assert(str1);
//	assert(str2);
//	if (*str2 == '\0')
//		return str1;
//
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = str2;
//		//����
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//			return (char*)cur;
//		cur++;
//	}
//	//�Ҳ���
//	return NULL;
//}
//
//int main()
//{
//	char arr[] = "abcdefabcdef";
//	char* ret=my_strstr(arr, "def");
//	printf("%s\n", ret);
//	return 0;
//}
////defabcdef

int main()
{
	//char arr1[] = "192.168.0.1";
	char arr2[] = "zj@baidu.com";//3�����[zj baidu com]   2���ָ���[@ .]
	char buf[30] = { 0 };
	strcpy(buf, arr2);
	printf("%s\n", strtok(buf, "@."));//zj �ӵ�һ����ǿ�ʼ���ָ�������
	printf("%s\n", strtok(NULL, "@."));//baidu �ӵڶ�����ǿ�ʼ���ָ�������
	printf("%s\n", strtok(NULL, "@.")); //com
	return 0;
}

int main()
{
	char arr2[] = "zj@baidu.com";//3�����[zj baidu com]   2���ָ���[@ .]
	char buf[30] = { 0 };
	char* ret = NULL;
	strcpy(buf, arr2);
	for (ret = strtok(buf, "@."); ret != NULL; strtok(NULL, "@."))
	{
		printf("%s\n", ret);
	}
	return 0;
}

int main()
{
	char arr2[] = "zj@baidu.com";//3�����[zj baidu com]   2���ָ���[@ .]
	char buf[30] = { 0 };
	char* ret = NULL;
	const char* sep = "@.";
	strcpy(buf, arr2);
	for (ret = strtok(buf, sep); ret != NULL; strtok(NULL, sep))
	{
		printf("%s\n", ret);
	}
	return 0;
}

int main()
{
	char* ret = strerror(0);
	printf("%s\n", ret);
	return 0;
}

#include<ctype.h>
int main()
{
	int ret = isdigit('0');
	printf{ "ret=%d\n",ret };
	return 0;
}

void* memcpy(void* dest, const void* src, size_t count)
{
	void* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	//����
	while (count)
	{
		//����һ���ֽ�
		*(char*)dest = *(char*)src;
		((char*)dest)++;
		((char*)src)++;
		//++(char*)dest;
		//++(char*)src;
		count--;
	}
	return ret;
}

int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,0 };
	int arr2[10] = { 0 };
	memcmp(arr2, arr1, 20);//20Ϊ�ֽ���
	return 0;
}