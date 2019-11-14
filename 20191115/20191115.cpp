#include <stdio.h>  
  
int main()  
{  
    float r,h;  
    float c,s,sq,vq,vz;  
    float pai = 3.1415926;    
    scanf("%f",&r);   
    scanf("%f",&h);  
    c = 2 * pai * r;  
    s = pai * r * r;  
    sq = 4 * pai * r * r;  
    vq =(4 * pai * r * r * r)/3;  
    vz = s * h;  
    printf("%4.2f\n",c);  
    printf("%4.2f\n",s);  
    printf("%4.2f\n",sq);  
    printf("%4.2f\n",vq);  
    printf("%4.2f\n",vz);  
  } 
