//error.c
#include<stdio.h>
#include<string.h>
#include<signo.h>
/*
int main()
{
	char *p=NULL;
	
	memcpy(p,"nihaoa~~",8);//��ʱ������һ���δ��� 

	return 0;
 }
 */

void sigcb(int signo)
{
	printf("���������һ���δ���:%d\n",signo); 
 } 
 int main()
{
	char *p=NULL;
	
	signal(SIGSEGV,sigcb);
	memcpy(p,"nihaoa~~",8);
	while(1){
		sleep(1);
	}
	
	return 0;
 }  
