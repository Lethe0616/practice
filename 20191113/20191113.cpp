#include <stdio.h>
/*
#pragma pack(8)//����Ĭ�϶�����Ϊ8
struct S1
{
 char c1;
 int i;
 char c2;
};
#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
 
#pragma pack(1)//����Ĭ�϶�����Ϊ1
struct S2
{
 char c1;
 int i;
 char c2;
};
#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
int main()
{
    //����Ľ����ʲô��
  printf("%d\n", sizeof(struct S1));//12
  printf("%d\n", sizeof(struct S2));//6
  return 0;
}
*/

union Un
{
    int i;
    char c;
};

union Un un;
 
// ��������Ľ����һ������
printf("%d\n", &(un.i));
printf("%d\n", &(un.c));
 
//��������Ľ����ʲô��
un.i = 0x11223344;
un.c = 0x55;
printf("%x\n", un.i);


