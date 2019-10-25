#pragma once
#include<stdlib.h>
#include<stdio.h>

typedef struct Node{
	int val;
	struct Node *next;	
} Node;

Node * ListPushFront(Node *head,int val){
    Node *node=(Node*)malloc(sizeof(Node));
	node->val=val;
	node->next=head;
	//head=node;
    return node;
}

Node * ListPushBack(Node *head,int val){
	Node *node=(Node*)malloc(sizeof(Node));
	node->val=val;
	node->next=NULL;

	if(head!=NULL){
	//找到原最后一个节点
	Node cur=head;
	while(cur->next!=NULL){
	cur=cur->next;
	}
	//让原最后一个节点的下一个为node
	cur->next=node;
	}
	else{
	return node;
	}
}

void ListPrint(Node *head){
   for(Node *cur=head;cur!=NULL;cur=cur->next){
   printf("%d---> ",cur->val);
   }
   printf("NULL\n");
}

Node *ListPopFront(Node *head){
assert(head!=NULL);
Node *next=head->next;
free(head);
return next;
}

Node *ListPopBack(Node *head){
assert(head!=NULL);
if(head->next=NULL){
	free(head);
	head=NULL;
}
else{
Node *cur=head;
while(cur->next->next!=NULL){
	cur=cur->next;
   }
free(cur->next);
cur->next=NULL;
     }
return head;
}

void Test(){
	Node *head=NULL;
	head=ListPushFront(head,1);
}