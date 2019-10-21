#include <stdio.h> 
#include <stdlib.h> 

#if 0
int main() 
{      
int a,b,j,x,y;     
double s=0,n=0,i;     
scanf("%d%d",&a,&b);     
for(i=1;i<100000;i=i+1)  
{    
n=n*1.0+(1/i);   
s=s*1.0+(1/n);   
x=i;   
if(s>a) break;  
}   
printf("%d ",x);  
for(j=x;j<100000;j++)  
{    
n=n*1.0+(1/j);   
s=s*1.0+(1/n);   
y=j;   
if(s>b)    
break;  
}   
printf("%d",y);  
return 0; 
} 
#endif

#if 0
int main()
{
     int i,j;
     for(i=1;i<=1000;i++)
		{
		    int F[1000],m=0,n,a,X=0;
			for(j=1;j<i;j++)
			{
				if(i%j==0)
				{
					m=m+1;
					F[m]=j;
				}
			}
			for(n=1;n<=m;n++)
				X=X+F[n];
			if(X==i)
			{
				printf("%d=",i);
				for(a=1;a<m;a++)
				printf("%d+",F[a]);
				printf("%d\n",F[m]);
			}
		}
	 return 0;
}
#endif

#if 0
int main() 
{      
int a,b,c,s;      
scanf("%d %d %d",&a,&b,&c);     
for (s=10;s<=100;s++)
{          
if ((s-a)%3==0&&(s-b)%5==0&&(s-c)%7==0)
{printf("%d",s);break;};     
};      
if (s==101) printf("-1");     
return 0; 
}
#endif

#if 0
void getbit(int n,int k)
{
    int i;
    for(i=2;i<=k;i++)
        n=n/2;
    printf("%d",n%2);
}
int main()
{
   int n,k;
   scanf("%d%d",&n,&k);
   getbit(n,k);
   return 0;
}
#endif

#if 0
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
#endif

#if 0
int main()
{
    int a[20],s=1,n,m,i=1,j=1,b,e,f;
    scanf("%d",&n);
    m=n;
    for(n=0;n<m;n++)
     scanf("%d",&a[n]);
    if (m==1) {
        if (a[0]<0) printf("-1");
        else printf("%d",a[0]);
        return 0;
    };
    if (m==2) {
        if ((a[0]<0)&&(a[1]<0)) printf("%d",(a[0]*a[1]));
        else if ((a[0]>0)&&a[1]>0) printf("%d",(a[0]*a[1]));
             else if (a[0]>a[1]) printf("%d",a[0]);
                  else printf("%d",a[1]);
                  return 0;
    };
    b=0;
    for (n=0;n<m;n++)
        if (a[n]<0) b=b+1;
    if (b%2==0) {
        for (n=0;n<m;n++)
            s=s*a[n];
        printf("%d",s);
        return 0;
    }
    else {
      for (n=0;n<m;n++)
      if (a[n]<0) {
        e=n;
        break;
      };
      for (n=m-1;n>=0;n--)
        if (a[n]<0) {
        f=n;
        break;
      };
      for (n=e+1;n<m;n++)
        i=i*a[n];
      for (n=f-1;n>=0;n--)
        j=j*a[n];
      if (i>j) s=i;
      else s=j;
      printf("%d",s);
    };
    return 0;
    } 
#endif

#if 0
int main() 
{      
int a,i,n,f1,f2,f3,f4,f5,f6,m1,m2,m3,m4,m5,m6;  
double F[6];      
for(a=0;a<10000;a++)  
{   F[1]=a;    for(i=2;i<7;i++)   
{   n=i-1;     F[i]=(5*F[n])/4+1;    }    
m1=F[1]*10;   m2=F[2]*10;   m3=F[3]*10;   m4=F[4]*10;   m5=F[5]*10;    m6=F[6]*10;     
if(m1%10==0&&m2%10==0&&m3%10==0&&m4%10==0&&m5%10==0&&m6%10==0)   
{        
f1=F[1];       f2=F[2];       f3=F[3];       f4=F[4];       f5=F[5];       f6=F[6];        
if(f1%4==0&&f2%4==0&&f3%4==0&&f4%4==0&&f5%4==0)       
{ 
    printf("%d %d",f6,a);  
	break;            
}   
}   
   else;
} 
} 
#endif

#if 0
int main() 
{      
int a,n,i,j,x,y,z,A[10000],B[10],m=1;     
scanf("%d",&n);      
for(i=10000;i<100000;i++)  
{   
a=i%n;   if(a==0)   
{     A[m]=i;    m++;   }  
}   
for(j=1;j<=m;j++)  
{    
x=A[j]/n;
if(x<1000)    a:continue;   
else   
{     
B[1]=A[j]%10;    B[2]=(A[j]/10)%10;     B[3]=(A[j]/100)%10;    
B[4]=(A[j]/1000)%10;    B[5]=(A[j]/10000)%10;    B[6]=x%10;    
B[7]=(x/10)%10;    B[8]=(x/100)%10;    B[9]=(x/1000)%10;    B[10]=(x/10000)%10;    
for(y=1;y<11;y++)    
{      
for(z=y+1;z<11;z++)     
{       if(B[y]-B[z]==0)       
goto a;    }    
}
}
if(x<10000)
printf("%d/0%d=%d\n",A[j],x,n);else
printf("%d/%d=%d\n",A[j],x,n);}
return 0;
}
#endif

#if 0
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
#endif

#if 0
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
#endif