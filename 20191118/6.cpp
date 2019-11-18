#include<stdio.h>
int main()
{
    double i,b=0;
    scanf("%lf",&i);
    if(i>100) 
    {
    b+=(i-100)*0.01;
    i=100;  
    }
    if(i>60&&i<=100) 
    {
    b+=(i-60)*0.015;
    i=60;   
    }
    if(i>40&&i<=60) 
    {
    b+=(i-40)*0.03;
    i=40;   
    }
    if(i>20&&i<=40) 
    {
    b+=(i-20)*0.05; 
    i=20;   
    }
    if(i>10&&i<=20) 
    {
    b+=(i-10)*0.075; 
    i=10;   
    }
    if(i>0&&i<=10) b+=i*0.1;
    printf("%.6f\n",b);
}
