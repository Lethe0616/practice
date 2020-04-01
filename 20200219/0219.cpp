//error.c
#include<stdio.h>
#include<string.h>
#include<signo.h>
/*
int main()
{
	char *p=NULL;
	
	memcpy(p,"nihaoa~~",8);//此时产生了一个段错误 

	return 0;
 }
 */

void sigcb(int signo)
{
	printf("程序产生了一个段错误:%d\n",signo); 
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
