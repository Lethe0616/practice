#include<stdio.h>
int main()
{
int a,b,i,j,cnt=0,sum=0;
b=-1;
for(i=500;i<=800;i++)
{
for(j=2;j<i;j++)
{
if(i%j==0)
break;
} 
if(j>i-1)
{
cnt++;a=b*i;sum+=a;b=-b;
}
}
printf("%d %d",cnt,sum);
return 0;
}
