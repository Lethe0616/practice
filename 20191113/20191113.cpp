#include <stdio.h>
/*
#pragma pack(8)//设置默认对齐数为8
struct S1
{
 char c1;
 int i;
 char c2;
};
#pragma pack()//取消设置的默认对齐数，还原为默认
 
#pragma pack(1)//设置默认对齐数为1
struct S2
{
 char c1;
 int i;
 char c2;
};
#pragma pack()//取消设置的默认对齐数，还原为默认
int main()
{
    //输出的结果是什么？
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
 
// 下面输出的结果是一样的吗？
printf("%d\n", &(un.i));
printf("%d\n", &(un.c));
 
//下面输出的结果是什么？
un.i = 0x11223344;
un.c = 0x55;
printf("%x\n", un.i);


