#include<stdio.h>
 
int main()
{
    int a,m;
    int s = 0;
    scanf("%d",&a);
    m = a;
    while(m!=0)
    {
        s = s*10+m%10;
        m=m/10;
    }
    if(s == a)
    printf("yes\n");
    else
    printf("no\n");
 }
