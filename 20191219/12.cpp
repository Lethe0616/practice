#include <stdio.h> 
  
int main()  
  
{  
    int i,x,y,z = 1;                  
    scanf("%d %d",&x,&y);                   
    for (i = 1;i <= y;i++)                   
    {  
        z = z*x % 1000;  
    }  
    if (z > 100)  
    {  
        printf("%d\n",z);  
    }  
    else if(z < 10)  
    {  
        printf("00%d\n",z);  
    }  
    else  
    {  
        printf("0%d\n",z);  
    }  
}
