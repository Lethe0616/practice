void TestFunc(int a,int b,int c=1){}
TestFunc(1,2);    a=1,b=2
ȫȱʧ���������в�������Ĭ��ֵ
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
        printf("С��\n");
    }
    else
    {
        printf("���\n");
    }
    return 0;
}

