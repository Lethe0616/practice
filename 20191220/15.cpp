#include<stdio.h>
#include<math.h>
int main()
{
double a,b,x1,x2,x3,x;
if (scanf("%lf%lf", &a, &b) != 2) 
{
printf("Input error\n");
return 1;
}
do{
x=(a+b)/2;
x1 = 2*a*a*a - 4*a*a + 3*a - 6;
x2 = 2*b*b*b - 4*b*b + 3*b - 6;
x3 = 2*x*x*x - 4*x*x + 3*x - 6;
if (x1*x3<0) b=x;
else if (x3*x2<0) a=x;
else ;
}while (fabs(x3)>=0.001);
printf("%.2lf",x);
}
