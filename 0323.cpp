#include<stdio.h>

int main(void)
{
	int n,x,y,sum1,sum2;
	sum1=0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&x);
		sum1+=x;
	}
	
	sum2=0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&y);
		sum2+=y;
	}
	printf("%d\n",sum1);
	printf("%d\n",sum2);
}
/*#include<stdio.h>
int main()
{
	int n,sum1,sum2;
	
	int x;
	sum1=0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&x);
		sum1+=x;
	}
	
	int y;
	sum2=0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&y);
		sum2+=y;
	}
	printf("%d\n",sum1);
	printf("%d\n",sum2);
}*/
