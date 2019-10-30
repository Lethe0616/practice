#include <stdio.h>   
int main()   
{
    int n,a[10],b[10]={0},i,x,j,t1,t2;  
    while(scanf("%d",&n)&&n!=0){         
        for(i=0;i<n;i++){               
            scanf("%d",&a[i]);               
            x=a[i];               
            while(x/10!=0){                   
                b[i]=b[i]+x%10;                   
                x=x/10;               
            }               
            b[i]=b[i]+x;           
        }           
        for(i=0;i<n;i++){            
            for(j=0;j<n-i-1;j++){                  
                if(b[j]>b[j+1]){                      
                    t1=a[j];                      
                    a[j]=a[j+1];                      
                    a[j+1]=t1;                      
                    t2=b[j];                      
                    b[j]=b[j+1];                      
                    b[j+1]=t2;                  
                }              
            } 		
        }            
        for(i=0;i<n;i++){ 			   
            if(i==n-1)                    
                printf("%d\n",a[i]); 			   
            else 				   
                printf("%d ",a[i]); 		   
        }     
    }       
    return 0;   
}
