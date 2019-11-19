#include"contact.h"
#include<stdio.h>
void menu()
{
	printf("***************************\n");
	printf("***  1.add       2.del       ***\n");
	printf("***  3.search   4.modify  ***\n");
	printf("***  5.show     6.sort     ***\n");
	printf("***  0.exit                      ***\n");
	printf("***************************\n");
}
void test()
{
	//创建通讯录
	Contact con;
	//初始化通讯录
	InitContact(&con);
	int input = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case EXIT:
			printf("退出游戏");
			break;
		default:
				printf("选择错误");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}