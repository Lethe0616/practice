#pragma once
#include<string.h>

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
#define MAX 1000

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT 
};
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

typedef struct  Contact
{
	struct  PeoInfo data[MAX];//1000个人的信息
	int sz;//记录当前有多少个人的信息
}Contact;

void InitContact(Contact* pcon);
void AddContact(Contact* pcon);
void ShowContact(Contact* pcon);
void DelContact(Contact* pcon);
void SearchContact(const Contact* pcon);
void ModifyContact(Contact* pcon);
void SortContact(Contact* pcon);