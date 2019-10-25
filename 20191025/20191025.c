#include"SeqList.h"
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

#define CAPACITY (16)

//������
//��ʼ��/����
//����
//ͷ��/�±���� O(n)   β�� O(1)
//ɾ��
//ͷ��/�±�ɾ�� O(n)   βɾ O(1)

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

void SeqListPopFront(SeqList *seq){
	assert(seq->size>0);

	for(int i=0;i<=seq->size-2;i++){
		seq->array[i]=seq->array[i+1];
	}
	seq->size--;
}

void SeqListPopBack(SeqList *seq){
	assert(seq->size>0);
	seq->size--;
}

void SeqListErase(SeqList *seq,int index){
	assert(seq->size>0);

	for(int i=0;i<=seq->size-2;i++){
		seq->array[i]=seq->array[i+1];
	}
	seq->size--;
}

void SeqListPushPrint(SeqList *seq){
	for(int i=0;i<seq->size;i++){
		printf("%d ",seq->array[i]);
	}
	printf("\n");
}

void SeqListFind(SeqList *seq,int val){
	for(int i=0;i<seq->size;i++){
			if(seq->array[i]==val){
		return i;
			}
	}
	return -1;
}

void SeqListRemove(SeqList *seq,int val){
#if 0
	int index;

	while((index=SeqListFind(seq,val))!=-1){
		SeqListErase(seq,index);
	}
#endif

#if 0
	int *extra=(int*)malloc(sizeof(int)*seq->size);
	int j=0;
	for(int i=0;i<seq->size;i++){
			if(seq->array[i]!=val){
				extra[j++]=seq->array[i];
			}
	}
#endif

	int j=0;
	for(int i=0;i<seq->size;i++){
			if(seq->array[i]!=val){
				seq->array[j++]=seq->array[i];
			}
	}
	seq->size=j;
}