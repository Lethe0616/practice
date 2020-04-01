#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<sys/shm.h>

#define IPC_KEY 0X12345678
#define PROJ_ID 0X12345678

int main()
{
	//创建/打开共享内存--若共享内存创建了，则直接打开，打开时候并不清空内部数据 
	int shmid = shmget(IPC_KEY,32,IPC_CREAT | 0664);
	if(shmid<0){
		perror("shmget error");
		return -1;
	}
	//将共享内存映射连接到 进程的虚拟地址空间
	void *shm_start = shmat(shmid,NULL,0);
	if(shm_start == (void*)-1){//注意返回值为-1表示失败，而不是NULL 
		perror("shmat error");
		return -1;
	}
	while(1){
		printf("shm:[%s]\n",shm_start);
		sleep(1);
	} 

    // 根据返回的映射首地址可以解除映射
	shmdt(shm_start);
	//删除共享neic
	shmctl(shmid,IPC_RMID,NULL);
	return 0; 
}
