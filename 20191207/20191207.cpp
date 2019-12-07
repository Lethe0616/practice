/*
#include <stdio.h>
int main()
{
char a= -1;
signed char b=-1;
unsigned char c=-1;
printf("a=%u,b=%u,c=%u",a,b,c);
return 0;
}

#include <stdio.h>
int main()
{
char a = -128;
printf("%u\n",a);
return 0;
}

#include <stdio.h>
int main()
{
char a = 128;
printf("%u\n",a);
return 0;
}

int main()
{
char a[1000];
int i;
for(i=0; i<1000; i++)
{
a[i] = -1-i;
}
printf("%d",strlen(a));
return 0;
}

#include <stdio.h>
unsigned char i = 0;
int main()
{
for(i = 0;i<=255;i++)
{
printf("hello world\n");
}
return 0;
}
*/
int main()
{
int n = 9;
float *pFloat = (float *)&n;
printf("n的值为：%d\n",n);
printf("*pFloat的值为：%f\n",*pFloat);
*pFloat = 9.0;
printf("num的值为：%d\n",n);
printf("*pFloat的值为：%f\n",*pFloat);
return 0;
}
