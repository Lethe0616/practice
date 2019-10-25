#pragma once

struct SeqList{
	int *array;
	int capacity;
	int size;
};

typedef struct SeqList SeqList;

void SeqListInit(SeqList *seq);

void SeqListDestory(SeqList *seq);

void SeqListPushFront(SeqList *seq,int val);

void SeqListPushBack(SeqList *seq,int val);

void SeqListPushPrint(SeqList *seq,int val);

void SeqListErase(SeqList *seq,int index);

void SeqListPopBack(SeqList *seq);

void SeqListPopFront(SeqList *seq);

void SeqListFind(SeqList *seq,int val);