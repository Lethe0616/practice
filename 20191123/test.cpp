#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	//д�ļ�
//	fputc('a',pf);
//	fputc('b', pf);
//	fputc('c', pf);
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 0;
//	}
//	//���ļ�
//	printf("%c\n",fgetc(pf));
//	printf("%c\n", fgetc(pf));
//	printf("%c\n", fgetc(pf));
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 0;
//	}
//	//д�ļ�
//	fputs("zhangsan\n", pf);
//	fputs("lisi\n", pf);
//	fputs("wangwu\n", pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//int main()
//{
//	char buf[20] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 0;
//	}
//	//���ļ�
//	fgets(buf, 20, pf);
//	printf("%s\n", buf);
//	fgets(buf, 20, pf);
//	printf("%s\n", buf);
//	fgets(buf, 20, pf);
//	printf("%s\n", buf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 0;
//	}
//
//	//д�ļ�
//	fprintf(pf,"%s %d %f","zhangsan",20,3.14f);
//
	//fclose(pf);
	//pf = NULL;
	//return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//	float f;
//};
//
//int main()
//{
//	struct S s = { "zhangsan",20,3.14f };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 0;
//	}
//
//	//д�ļ�
//	//��ʽ������ʽд�ļ�
//	fprintf(pf, "%s %d %f", s.name,s.age,s.f);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//	float f;
//};
//
//int main()
//{
	//struct S s = { "zhangsan",20,3.14f };
	//FILE* pf = fopen("test.txt", "w");
	//if (pf == NULL)
	//{
	//	perror("fopen");
	//	return 0;
	//}
//
//	//���ļ�
//	//��ʽ������ʽ���ļ�
//	fscanf(pf,"%s %d %f", s.name,&( s.age), &(s.f));
//	printf("%s %d %f\n", s.name, s.age, s.f);
	//fclose(pf);
	//pf = NULL;
	//return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//	float f;
//};
//
//int main()
//{
//	struct S s = { "����",20,3.14 };
//	struct S tmp = { 0 };
//	char buf[30] = { 0 };
	//sprintf(buf, "%s %d %f\n", s.name, s.age, s.f);
//	printf("%s\n", buf);
//	//��buf�л�ȡһ����ʽ�������ݷŵ�tmp
//	sscanf(buf, "%s %d %f\n", tmp.name, tmp.age, tmp.f);
//	printf(" %s %d %f\n", tmp.name, tmp.age, tmp.f");
//	return 0; 
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 0;
//	}
//	//���ļ�
//	printf("%c\n",fgetc(pf));//a
//	//�����ļ�ָ��
//	fseek(pf, 3, SEEK_CUR);
//	fseek(pf, -2, SEEK_END);
//	fseek(pf, 4,SEEK_SET);
//	printf("%c\n", fgetc(pf));//e
//	printf("%c\n", fgetc(pf));//f
//
//	printf("%c\n", fgetc(pf));//b
//	printf("%c\n", fgetc(pf));//c
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 0;
//	}
//	//���ļ�
//	printf("%c\n", fgetc(pf));//a
//	fseek(pf, 4, SEEK_SET);
//	printf("%c\n", fgetc(pf));//e
//	printf("%c\n", fgetc(pf));//f
//	rewind(pf);
//	printf("%c\n", fgetc(pf));//a
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//struct S
//{
//	char name[20];
//	int age;
//	float f;
//};
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "wb");//��Ҫ���Ǽ�b
//	struct S s = { "zhangsan",20,3.14 };
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 0;
//	}
//	//д�ļ�
//	fwrite(&s,sizeof(struct S),1,pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "rb");//��Ҫ���Ǽ�b
//	struct S s = { 0 };
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 0;
//	}
//	//���ļ�
//	fread(&s, sizeof(struct S), 1, pf);
//	sprintf(buf, "%s %d %f\n", s.name, s.age, s.f);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
 