#include<stdio.h>
#include<assert.h>

int main()
{
	//const int num = 10;
	//int m = 0;
	//int* const p = &num;
	//*p = 20;
	//printf("%d\n", num);
	//return 0;

	//const int num = 10;
	//int m = 0;
	//const int* p = &num;
	//*p = 20;
	//printf("%d\n", num);
	//return 0;

	const int num = 10;
	int m = 0;
	const int* const p = &num;
	*p = 20;
	printf("%d\n", num);
	return 0;
}

char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	//Êı¾İ¿½±´
	while (*dest++=*src++)
	{
		;
	}
	return ret;
}