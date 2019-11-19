#include"contact.h"
#include<stdio.h>
#include<assert.h>

void InitContact(Contact* pcon)
{
	assert(pcon != NULL);
	//int sz = sizeof(pcon->data);
	pcon->sz = 0;
	//��ʼ������Ҫ��ʼ����������ʼ��Ϊ���٣���ʼ�����ٸ�����
	memset(pcon->data, 0, sz);
}

void AddContact(Contact* pcon)
{
	assert(pcon != NULL);
	if (pcon->sz == MAX)
	{
		printf("ͨѶ¼�������޷����\n");
	}
	else
	{
		printf("���������֣�");
		//������������ǵ�ַ
		scanf("%s", pcon->data[pcon->sz].name);
		printf("���������䣺");
		scanf("%d", &(pcon->data[pcon->sz].age));
		printf("�������Ա�");
		scanf("%s", pcon->data[pcon->sz].sex);
		printf("�������ַ��");
		scanf("%s", pcon->data[pcon->sz].addr);
		printf("������绰��");
		scanf("%s", pcon->data[pcon->sz].tele);
		pcon->sz++;
	}
}

void ShowContact(const Contact* pcon)
{
	int i = 0;
	assert(pcon != NULL);
	printf("%10s\t%4s\t%4s\t%12s\t%15s\n","����","����","�Ա�","�绰","��ַ");
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
	//����
	int i = 0;
	int j = 0;
	int pos = 0;
	char name[MAX_NAME] = { 0 };
	assert(pcon != NULL);
	if (pcon->sz == 0)
	{
		printf("ͨѶ¼�ѿգ��޷�ɾ��\n");
		return;
	}
	printf("��������Ҫɾ���˵�����:");
	scanf("%s", name);
	pos=FindEntry(pcon,name);
	if (pos == -1)
	{
		printf("��Ҫɾ�����˲�����\n");
		return;
	}

	//ɾ��
	for (j = 1; j < pcon->sz - 1; j++)
	{
		pcon->data[j] = pcon->data[j + 1];
	}
	pcon->sz--;
	printf("ɾ���ɹ�\n"); 
}

void SearchContact(const Contact* pcon)
{
	char name[MAX_NAME] = { 0 };
	int pos = 0;
	assert(pcon != NULL);
	printf("������Ҫ�����˵����֣�");
	scanf("%s", name);
	pos = FindEntry(pcon, name);
	if (pos == -1)
	{
		printf("Ҫ�����˵���Ϣ������\n");
	}
	else
	{
		printf("%10s\t%4s\t%4s\t%12s\t%15s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("������Ҫ�޸��˵����֣�");
	scanf("%s", name);
	pos = FindEntry(pcon, name);
	if (pos == -1)
	{
		printf("Ҫ�޸��˵���Ϣ������\n");
	}
	else
	{
		printf("���������֣�");
		scanf("%s", pcon->data[pos].name);
		printf("���������䣺");
		scanf("%d", &(pcon->data[pos].age));
		printf("�������Ա�");
		scanf("%s", pcon->data[pos].sex);
		printf("�������ַ��");
		scanf("%s", pcon->data[pos].addr);
		printf("������绰��");
		scanf("%s", pcon->data[pos].tele);
	}
}
void SortContact(Contact* pcon)
{
	int i = 0;
	assert(pcon);
	//����
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