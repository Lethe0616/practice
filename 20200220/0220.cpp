#include<stdio.h>
int main()
{
	int n[10],i,j,t;
	for(i=0;i<10;i++)
	scanf("%d",&n[i]);
    for(i=0;i<5;i++)
	{
		j=9-i;
		t=n[i];
		n[i]=n[j];
		n[j]=t;
	}
    for(i=0;i<10;i++)
    printf("%d\n",n[i]);
}
