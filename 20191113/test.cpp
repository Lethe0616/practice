#include<stdio.h>
#include<assert.h>
#include<iostream>
using namespace std;

//#pragma pack(1)
//struct S
//{
//	double d;//自身大小8 默认对齐数4  对齐数4
//	char c;//1 4 1
//	//9-11空余
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));//12
//	return 0;
//}

//struct S
//{
//	char arr[100];
//	int a;
//};
//
//void print1(struct S tmp)
//{
//	printf{ "%s %d\n",tmp.arr,tmp.a };
//}
//
//void print2(const struct S* ps)
//{
//	printf("%s %d\n", ps->arr, ps->a);
//}
//
//int main()
//{
//	struct S s = { "zj",20 };
//	print1(s);//zj 20
//	print2(&s);//zj 20
//	return 0;
//}

//struct S
//{
//	int _a : 2;//4-32 
//	int _b : 5;//
//	int _c : 10;//15
//	int _d : 30;//4-32
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	return 0;
//}

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}

//enum Sex
//{
//	MALE,
//    FEMALE,
//    SECRET
//};
//
//int main()
//{
//	printf("%d\n",MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}

//void menu()
//{
//	printf("********************\n");
//	printf("***1.add     2.sub***\n");
//	printf("***3.mul     4.div***\n");
//	printf("***0.exit***\n");
//	printf("********************\n");
//}
//
//enum Option
//{
//	EXIT,
//    ADD,
//    SUB,
//    MUL,
//    DIV,
//};
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case EXIT:
//			break;
//		case  ADD:
//			break;
//		case SUB:
//			break;
//		case DIV:
//			break;
//		case MUL:
//			break;
//		default:
//			break;
//		}
//	} while ();
//		return 0;
//}

union Un
{
       char c;
       int i;
       double d;
};

int main()
{
	union Un u;
	printf("%p\n", &u);//003CFA68
	printf("%p\n", &(u.c));//003CFA68
	printf("%p\n", &(u.i));//003CFA68
	printf("%p\n", &(u.d));//003CFA68
	printf("%p\n", sizeof(u));//8
	return 0;
}