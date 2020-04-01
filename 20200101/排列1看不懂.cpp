#include <stdio.h>    
typedef int* POINT;    
int ok(int, int*);  
int a[9];    
int main()  
{  
    int m, count = 0;  
    int (*p)(int,int*);  
    p = ok;  
    for (m = 123; m <= 333; m++)  
    {  
        if (p(m, a) && p(2 * m, a + 3) && p(3 * m, a + 6))  
        {  
            printf("%d %d %d\n",m, 2*m, 3*m);  
        }  
    }  
}   
int ok(int t, int *z)                          
{  
    POINT p1, p2;  
    for (p1 = z; p1 < z + 3; p1++)  
    {  
        *p1 = t % 10;  
        t /= 10;  
        for (p2 = a; p2 < p1; p2++)    
        {  
            if ((0 == *p1) || (*p2 == *p1))  
            {  
                return 0;  
            }  
        }  
    }  
     return 1;  
}  
