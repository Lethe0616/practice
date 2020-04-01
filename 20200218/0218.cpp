#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<sys/shm.h>

#define IPC_KEY 0X12345678
#define PROJ_ID 0X12345678

int main()
{
	//����/�򿪹����ڴ�--�������ڴ洴���ˣ���ֱ�Ӵ򿪣���ʱ�򲢲�����ڲ����� 
	int shmid = shmget(IPC_KEY,32,IPC_CREAT | 0664);
	if(shmid<0){
		perror("shmget error");
		return -1;
	}
	//�������ڴ�ӳ�����ӵ� ���̵������ַ�ռ�
	void *shm_start = shmat(shmid,NULL,0);
	if(shm_start == (void*)-1){//ע�ⷵ��ֵΪ-1��ʾʧ�ܣ�������NULL 
		perror("shmat error");
		return -1;
	}
	while(1){
		printf("shm:[%s]\n",shm_start);
		sleep(1);
	} 

    // ���ݷ��ص�ӳ���׵�ַ���Խ��ӳ��
	shmdt(shm_start);
	//ɾ������neic
	shmctl(shmid,IPC_RMID,NULL);
	return 0; 
}
