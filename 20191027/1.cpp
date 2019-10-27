#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	while (n--)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d\n", (a + b) % 100);
	}
	return 0;
}