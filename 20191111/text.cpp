#include<string.h> 
#include<stdio.h>
#include<stdlib.h>

/* 
int main()
{
	char str1[20];
	char str2[20];
	strcpy(str1, "To be ");
	strcpy(str2, "or not to be");
	strncat(str1, str2, 6);
	puts(str1);
	system("pause");
	return 0;
}

int main()
{
	char arr[20] = { 0 };
	strncpy(arr, "hello bite", 3);
	printf("%s\n", arr);
	return 0;
}

int main ()
{
  char str[][5] = { "R2D2" , "C3PO" , "R2A6" };
  int n;
  puts ("Looking for R2 astromech droids...");
  for (n=0 ; n<3 ; n++)
  if (strncmp (str[n],"R2xx",2) == 0)
  {
    printf ("found %s\n",str[n]);
  }
  return 0;
}
*/
int main()
{
	char arr[] = "abcdefabcdef";
	char* ret = strchr(arr, 'd');
	if (ret != NULL)
		printf("%s\n", ret); //defabcdef
	else
		printf("ÕÒ²»µ½\n");
	return 0;
}
