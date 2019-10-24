#include"SeqList.h"
#include<stdio.h>
#include<stdlib.h>

#define CAPACITY (16)

//扩容
//从外部链接属性更改为内部链接属性
//1.static修饰局部变量，影响它的声明周期（从函数的执行变成整个进程期间）
//2.static修饰全局变量，影响他的链接属性（从外部变成内部）
//3.static修饰函数，影响它的链接属性（从外部变成内部）
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

void SeqListPushPrint(SeqList *seq){
	for(int i=0;i<seq->size;i++){
		printf("%d ",seq->array[i]);
	}
	printf("\n");
}