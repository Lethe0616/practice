#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main( )
{
double x,y;
int tmp;
scanf("%lf",&x);
tmp=floor(x);
if(fabs(tmp-x))
{
tmp++;
}
if(tmp<=2)y=7;
else if(tmp<=15)y=7+(tmp-2)*1.5;
else if(tmp>15)y=7+(tmp-15)*2.1;
printf("%.6lf\n",y);
}
