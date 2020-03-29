#include<stdio.h>
int main()
{
	int a,b,c,i,f;
	int daytable[][12]=
	{{31,28,31,30,31,30,31,31,30,31,30,31},
	{31,29,31,30,31,30,31,31,30,31,30,31}};
	scanf("%d-%d-%d",&a,&b,&c);
	f=(a%4==0)&&(a%100!=0)||(a%400==0);
	for(i=0;i<b-1;i++)
	c=c+daytable[f][i];
    printf("%d",c);
}
