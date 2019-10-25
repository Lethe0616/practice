#include"SeqList.h"
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

#define CAPACITY (16)

//操作：
//初始化/销毁
//增：
//头插/下标插入 O(n)   尾插 O(1)
//删：
//头插/下标删除 O(n)   尾删 O(1)

static void ensureCapacity(SeqList *seq){
	if(seq->size<seq->capacity){
		return;
	}

	//1.找新房子
	int newCapacity=2*seq->capacity;
	int *newArray=(int *)malloc(sizeof(int)*newCapacity);
	//2.全家搬家
	for(int i=0;i<seq->size;i++){
		newArray[i]=seq->array[i];
	}
	//3.退掉老房子
	free(seq->array);
	//4.发朋友圈
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
		printf("不合法");
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