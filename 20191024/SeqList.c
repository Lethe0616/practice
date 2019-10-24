#include"SeqList.h"
#include<stdio.h>
#include<stdlib.h>

#define CAPACITY (16)

//����
//���ⲿ�������Ը���Ϊ�ڲ���������
//1.static���ξֲ�������Ӱ�������������ڣ��Ӻ�����ִ�б�����������ڼ䣩
//2.static����ȫ�ֱ�����Ӱ�������������ԣ����ⲿ����ڲ���
//3.static���κ�����Ӱ�������������ԣ����ⲿ����ڲ���
static void ensureCapacity(SeqList *seq){
	if(seq->size<seq->capacity){
		return;
	}

	//1.���·���
	int newCapacity=2*seq->capacity;
	int *newArray=(int *)malloc(sizeof(int)*newCapacity);
	//2.ȫ�Ұ��
	for(int i=0;i<seq->size;i++){
		newArray[i]=seq->array[i];
	}
	//3.�˵��Ϸ���
	free(seq->array);
	//4.������Ȧ
	seq->array=newArray;
	
}
void SeqListInit(SeqList *seq){
	seq->array=(int *)malloc(sizeof(int)*CAPACITY);
	seq->capacity=CAPACITY;
	seq->size=0;
}

void SeqListDestory(SeqList *seq){
	free(seq->array);
	seq->capacity=0;
	seq->size=0;
}

void SeqListPushFront(SeqList *seq,int val){
	for(int i=seq->size-1; i>=0;i--){
		seq->array[i+1]=seq->array[i];
	}
	seq->array[0]=val;
	seq->size++;
}

void SeqListPushBack(SeqList *seq,int val){
	seq->array[seq->size]=val;
	seq->size++;
}

void SeqListInsert(SeqList *seq,int index,int val){
	if(index<0||index>seq->size){
		printf("���Ϸ�");
		return;
	}
	
	ensureCapacity(size);
	 
	for(int i=seq->size;i>index;i--){
		seq->array[i]=seq->array[i-1];
	}

	seq->array[index]=val;
	seq->size++;
} 

void SeqListPushPrint(SeqList *seq){
	for(int i=0;i<seq->size;i++){
		printf("%d ",seq->array[i]);
	}
	printf("\n");
}