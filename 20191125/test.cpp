#include<stdio.h>
#include<stdlib.h>

//extern int Add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}

//#define Print(x,format) printf("the value of "#x" is "format"\n",x)
//
//int main()
//{
//	int a = 10;
//	float f = 3.14f;
//
//	Print(a, "%d");
//	Print(f, "%f");
//
//	return 0;
//}

//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数
//	int max = Max(a, b);
//	//宏
//	int max = MAX(a, b);
//	printf("%d\n", max);
//	return 0;
//}

#define MALLOC(num,type) (type*)malloc(num*sizeof(type))

int main()
{
	int *p=MALLOC(10, int);
	//int *p = (int*)malloc(10 * sizeof(int));  两种写法都对
	if (p == NULL)
	{
		return 1;
	}

	free(p);
	p = NULL;
	return 0;
}