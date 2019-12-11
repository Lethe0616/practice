#include <stdio.h>
#include <math.h>
//int main()
//{
//	int m;
//	int i, j;
//	scanf("%d",&m ); // %f  %c  %s   %u   %4d  
//	for (i = 1; i <= m;i++)
//	{
//		for (j = 1; j <= i;j++)
//			printf("%d*%d=%d ", i, j, i*j);
//		printf("\n");
//	}
//	return 0;
//}


//void swap(int a, int b)
//{
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//}

//void swap(int* a, int* b)
//{
//	*a = *a ^ *b;
//	*b = *a ^ *b;
//	*a = *a ^ *b;
//}
//
//int main()
//{
//	int a = 10, b = 20;
//	swap(&a, &b);
//
//	
//}

//int leapYear(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		return 1;
//	return 0;
//}
//
//int main()
//{
//	int year;
//	scanf("%d", &year);
//	if (leapYear(year))
//	{
//		printf("%d 是闰年\n",year);
//	}
//	else
//	{
//		printf("%d 不是闰年\n", year);
//	}
//	return 0;
//}

//#ifdef 
//void init(int array[], int sz, int value)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//		array[i] = value;
//}
//
//void empty(int array[], int sz)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//		array[i] = 0;
//}
//
//void swap(int* a, int* b)
//{
//	*a = *a ^ *b;
//	*b = *a ^ *b;
//	*a = *a ^ *b;
//}
//void reverse(int array[], int sz)
//{
//	int i;
//	
//	for (i = 0; i < sz / 2; i++)
//	{
//		swap(&array[i], &array[sz - i - 1]);
//	}
//
//	/*int start = 0;
//	int end = sz - 1;
//	while (start < end)
//	{
//		swap(&array[start], &array[end]);
//		start++;
//		end--;
//	}*/
//}
//
//void printArray(int array[], int sz)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//		printf("%d ", array[i]);
//	printf("\n");
//}
//
//#define N 10
//
//void inputArray(int array[], int sz)
//{
//	int i;
//	printf("请输入%d个数\n", sz);
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &array[i]);
//	}
//}
//int main()
//{
//	int array[N];
//	inputArray(array, N);
//	printArray(array, N);
//	reverse(array, N);
//	printArray(array, N);
//	init(array, N, 100);
//	printArray(array, N);
//	empty(array, N);
//	printArray(array, N);
//	return 0;
//}
//#endif // 
#include<stdlib.h>
//int su(int n)
//{
//	int i;
//	for (i = 2; i < n; i++)
//	{
//		if (n%i == 0)
//		{
//			return 0;
//			//break;
//		}
//	}
//	if (i == n)
//	{
//		return 1;
//	}
//}
//
//int su2(int n)
//{
//	int i;
//	//偶数直接返回
//	if (n % 2 == 0)
//		return 1;
//
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n%i == 0)
//		{
//			return 0;
//			//break;
//		}
//	}
//	
//	return 1;
//}
//int main()
//{
//	int n;
//	int ret;
//	printf("输入一个数：");
//	scanf("%d", &n);
//	ret = su2(n);
//	if (ret == 1)
//	{
//		printf("该数字为素数");
//	}
//	else
//	{
//		printf("不是素数");
//	}
//	return 0;
//}


int fab(int n)
{
	if (n == 1 || n == 2)
		return 1;

	int fn1, fn2;
	fn1 = fn2 = 1;
	int ret = 0;
	for (int i = 3; i <= n; i++)
	{
		ret = fn1 + fn2;
		// fn1 : f(n-1)
		// fn2 = fn1   f(n - 2)  <----   f(n - 1)
		fn2 = fn1;
		// f(n - 1)  <---  f(n)
		fn1 = ret;
	}
	return ret;
}

int Fab_r(int n)
{
	if (n == 1 || n == 2)
		return 1;
	return Fab_r(n - 1) + Fab_r(n - 2);
}

//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d\n", fab(n));
//	printf("Fab_r(int)\n");
//	printf("%d\n", Fab_r(n));
//	return 0;
//}

//int Pow(int n, int k)
//{
//	if (k == 1)
//		return n;
//	// n^k = n * n^(k - 1)
//	return n * Pow(n, k - 1);
//}

//int main()
//{
//	int n, k;
//	scanf("%d %d", &n, &k);
//	printf("%d\n", Pow(n, k));
//	return 0;
//}

//int DigitSum(int n)
//{
//	if (n < 10)
//		return n;
//	return n % 10 + DigitSum(n / 10);
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d\n", DigitSum(n));
//	return 0;
//}

void fun(int n)
{
	if (n < 10)
	{
		printf("%d ", n);
		return;
	}
	fun(n / 10);
	printf("%d ", n % 10);
}

void fun1(int n)
{
	if (n > 9)
		fun(n / 10);
	printf("%d ", n % 10);
}

int main()
{
	int n;
	scanf("%d", &n);
	fun(n);
	return 0;
}