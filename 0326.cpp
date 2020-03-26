#include<stdio.h>
int main()
{
 int i,j,b;
 double a;
    for(i=1;;i++)
 {           
         a=i;
        for(j=1;j<=5;j++)
  {
            a=(a-1)*4/5;
        }
        b=(int)a;
        if(b==a)
  {
            printf("%d %.0lf\n",i,a);
            break;
        }
    }
}
