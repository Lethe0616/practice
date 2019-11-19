#include"contact.h"
#include<stdio.h>
#include<assert.h>

void InitContact(Contact* pcon)
{
	assert(pcon != NULL);
	//int sz = sizeof(pcon->data);
	pcon->sz = 0;
	//初始化（需要初始化的数，初始化为多少，初始化多少个数）
	memset(pcon->data, 0, sz);
}

void AddContact(Contact* pcon)
{
	assert(pcon != NULL);
	if (pcon->sz == MAX)
	{
		printf("通讯录已满，无法添加\n");
	}
	else
	{
		printf("请输入名字：");
		//数组名本身就是地址
		scanf("%s", pcon->data[pcon->sz].name);
		printf("请输入年龄：");
		scanf("%d", &(pcon->data[pcon->sz].age));
		printf("请输入性别：");
		scanf("%s", pcon->data[pcon->sz].sex);
		printf("请输入地址：");
		scanf("%s", pcon->data[pcon->sz].addr);
		printf("请输入电话：");
		scanf("%s", pcon->data[pcon->sz].tele);
		pcon->sz++;
	}
}

void ShowContact(const Contact* pcon)
{
	int i = 0;
	assert(pcon != NULL);
	printf("%10s\t%4s\t%4s\t%12s\t%15s\n","名字","年龄","性别","电话","地址");
		for (i = 0; i < pcon->sz; i++)
		{
			printf("%10s\t%4d\t%4s\t%12s\t%15s\n",
				pcon->data[i].name,
				pcon->data[i].age,
				pcon->data[i].sex,
				pcon->data[i].tele,
				pcon->data[i].addr);
		}
}

static int FindEntry(const Contact* pcon, char name[])
{
	int i = 0;
	assert(pcon != NULL);
	for (i = 0; i < pcon->sz; i++)
	{
		if (strcmp(pcon->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}

void DelContact(Contact* pcon)
{
	//查找
	int i = 0;
	int j = 0;
	int pos = 0;
	char name[MAX_NAME] = { 0 };
	assert(pcon != NULL);
	if (pcon->sz == 0)
	{
		printf("通讯录已空，无法删除\n");
		return;
	}
	printf("请输入你要删除人的名字:");
	scanf("%s", name);
	pos=FindEntry(pcon,name);
	if (pos == -1)
	{
		printf("你要删除的人不存在\n");
		return;
	}

	//删除
	for (j = 1; j < pcon->sz - 1; j++)
	{
		pcon->data[j] = pcon->data[j + 1];
	}
	pcon->sz--;
	printf("删除成功\n"); 
}

void SearchContact(const Contact* pcon)
{
	char name[MAX_NAME] = { 0 };
	int pos = 0;
	assert(pcon != NULL);
	printf("请输入要查找人的名字：");
	scanf("%s", name);
	pos = FindEntry(pcon, name);
	if (pos == -1)
	{
		printf("要查找人的信息不存在\n");
	}
	else
	{
		printf("%10s\t%4s\t%4s\t%12s\t%15s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%10s\t%4d\t%4s\t%12s\t%15s\n",
				pcon->data[pos].name,
				pcon->data[pos].age,
				pcon->data[pos].sex,
				pcon->data[pos].tele,
				pcon->data[pos].addr);
		}
	}
}

void ModifyContact(Contact* pcon)
{
	char name[MAX_NAME] = { 0 };
	int pos = 0;
	assert(pcon != NULL);
	printf("请输入要修改人的名字：");
	scanf("%s", name);
	pos = FindEntry(pcon, name);
	if (pos == -1)
	{
		printf("要修改人的信息不存在\n");
	}
	else
	{
		printf("请输入名字：");
		scanf("%s", pcon->data[pos].name);
		printf("请输入年龄：");
		scanf("%d", &(pcon->data[pos].age));
		printf("请输入性别：");
		scanf("%s", pcon->data[pos].sex);
		printf("请输入地址：");
		scanf("%s", pcon->data[pos].addr);
		printf("请输入电话：");
		scanf("%s", pcon->data[pos].tele);
	}
}
void SortContact(Contact* pcon)
{
	int i = 0;
	assert(pcon);
	//趟数
	for (i = 0; i < pcon->sz - 1; i++)
	{
		int flag = 1;
		int j = 0;
		for (j = 0; j < pcon->sz - 1 - i; j++)
		{
			if (strcmp(pcon->data[j].name, pcon->data[j + 1].name) > 0)
			{
				PeoInfo tmp = pcon->data[j];
				pcon->data[j] = pcon->data[j + 1];
				pcon->data[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
			break;
	}
}