#include"SeqList.h"

void testSeqList(){

    SeqList seqList;
	SeqList(&seqList)

	SeqListPushBack(&seqList,1);
	SeqListPushBack(&seqList,2);
    SeqListPushBack(&seqList,3);
	SeqListPushBack(&seqList,4);

	SeqListPrint(&seqList);

	SeqListPushFront(&seqList,10);
	SeqListPushFront(&seqList,20);
	SeqListPushFront(&seqList,30);

	SeqListPrint(&seqList);  

	SeqListInsert(&seqList,3,100);
	SeqListInsert(&seqList,2,200);

	SeqListPrint(&seqList);  

	SeqListDestory(&seqList);
}

int main(){
	testSeqList();
}