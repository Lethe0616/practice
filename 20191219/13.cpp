#include<stdio.h>
int main()
{
    double d;
    int x,n;
    scanf("%lf",&d);
    x=d;
    n=0;
    while(x)
	{
        x/=10;
        n++;
    }
    printf("%ld",n);
}
