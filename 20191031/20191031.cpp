#include <stdio.h> 
int main() 
{ 
    int a[10]; 
    int i, t1 = 0, t2 = 0, min = 0, max = 0; 
    for(i=0; i<10; i++) 
    { 
        scanf("%d",&a[i]); 
    } 
    t1 = a[0]; 
    for(i=0; i<10; i++) 
    { 
        if(a[i]<t1)  
        { 
            min = i; 
            t1 = a[i]; 
        } 
    } 
    t2 = a[min]; 
    a[min] = a[0]; 
    a[0] = t2 ;
    t1 = a[0]; 
    for(i=0; i<10; i++) 
    { 
        if(a[i]>t1)  
        { 
            max = i; 
            t1 = a[i]; 
        } 
    } 
    t2 = a[max]; 
    a[max] = a[9]; 
    a[9] = t2; 
    for(i=0; i<10; i++) 
    { 
        printf("%d\n",a[i]); 
    }   
    return 0; 
} 
