#include<stdio.h>
#include<stdlib.h>
typedef struct Node {
	int val;
	struct Node* next;
}Node;

//尾插
//对空链表尾插，第一个节点的地址会改变，所以需要返回新的第一个节点的地址
Node* pushBack(Node* head, int val) {
	Node* node = (Node*)malloc(sizeof(Node));
	node->val = val;
	node->next = NULL;
	if (head == NULL) {
		return node;
	}
	else {
		Node* last = getLast(head);
		last->next = node;
		return head;
	}
}

Node* getLast(Node* head) {
	Node* cur = head;
	while (cur->next != NULL) {
		cur = cur->next;
	}
	return cur;
}

//头删
Node* popFront(Node* head) {
	assert(head != NULL);//链表不能是空链表
	Node* second = head->next;//记录第二个节点
	free(head);//释放第一个节点
	return second;
}

//尾删
Node* popBack(Node* head) {
	assert(head != NULL);
	if (head->next == NULL) {
		free(head);//释放第一个节点
		return NULL;
	}
	else
	{
		Node* lastLast = getlastLast(head);//获取倒数第二个节点
		free(lastLast->next);//释放最后一个节点
		lastLast->next = NULL;
		return head;
	}
}

Node* getlastLast(Node* head) {
	Node* cur = head;
	while (cur->next->next != NULL) {
		cur = cur->next;
	}
	return cur;
}

//反转链表
Node* reverseList(Node* head) {
	Node* rHead = NULL;//代表结果链表
	Node* cur = head;
	while (cur != NULL) {
		Node* next = cur->next;
		//把cur头插到rhead代表的链表中
		cur->next = rHead;
		rHead = cur;
		cur = next;
	}
	return rHead; 
}

struct ListNode {
	int val;
	struct ListNode* next;
};

#if 0
struct ListNode* removeElements(struct ListNode* head, int val) {
	//删除一个节点，需要该节点的前驱节点
	prev->next = node->next;
	free(node);
	//第一个节点没有前驱节点
	Node* prev = NULL;
	Node* cur = head;
	while(cur!=NULL){
	if (cur != NULL) {
		prev->next = cur->next;
	}
	//没有释放cur当前指向的节点
	else {
		prev = cur;
	}
	cur = cur->next;
}
	if (head->val == val) {
		return head->next;
	}
	else {
		return head;
	}
}
#endif

struct ListNode* removeElements(struct ListNode* head, int val) {
	Node* prev = NULL;
	Node* cur = head;
	Node* last = NULL;
	while (cur != NULL) {
		Node* next = cur->next;
		if (cur->val != val) {
			if (rHead == NULL) {
				cur->next = rHead;
				rHead = cur;
			}
			else {
				cur->next = NULL;
				last->next = cur;
			}
			last = cur;
		}
		cur = next;
	}
	return rHead;
}