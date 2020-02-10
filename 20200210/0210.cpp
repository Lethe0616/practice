void TestFunc(int a,int b,int c=1){}
TestFunc(1,2);    a=1,b=2
全缺失参数：所有参数带有默认值
void TestFunc(int a=3,int b=2,int c=1){}
{}
#include<stdio.h>
int check_sys()
{
    int i = 1;     
    return (*(char*)&i);
}
int main()
{
    int ret = check_sys();
    if (ret == 1)
    {
        printf("小端\n");
    }
    else
    {
        printf("大端\n");
    }
    return 0;
}

