#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	//写文件
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
//	//读文件
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
//	//写文件
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
//	//读文件
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
//	//写文件
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
//	//写文件
//	//格式化的形式写文件
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
//	//读文件
//	//格式化的形式读文件
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
//	struct S s = { "张三",20,3.14 };
//	struct S tmp = { 0 };
//	char buf[30] = { 0 };
	//sprintf(buf, "%s %d %f\n", s.name, s.age, s.f);
//	printf("%s\n", buf);
//	//从buf中获取一个格式化的数据放到tmp
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
//	//读文件
//	printf("%c\n",fgetc(pf));//a
//	//调整文件指针
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
//	//读文件
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
//	FILE* pf = fopen("test.txt", "wb");//不要忘记加b
//	struct S s = { "zhangsan",20,3.14 };
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 0;
//	}
//	//写文件
//	fwrite(&s,sizeof(struct S),1,pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "rb");//不要忘记加b
//	struct S s = { 0 };
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 0;
//	}
//	//读文件
//	fread(&s, sizeof(struct S), 1, pf);
//	sprintf(buf, "%s %d %f\n", s.name, s.age, s.f);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
 