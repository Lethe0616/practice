#include<stdio.h>
#include<stdlib.h>
typedef struct Node {
	int val;
	struct Node* next;
}Node;

//β��
//�Կ�����β�壬��һ���ڵ�ĵ�ַ��ı䣬������Ҫ�����µĵ�һ���ڵ�ĵ�ַ
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

//ͷɾ
Node* popFront(Node* head) {
	assert(head != NULL);//�������ǿ�����
	Node* second = head->next;//��¼�ڶ����ڵ�
	free(head);//�ͷŵ�һ���ڵ�
	return second;
}

//βɾ
Node* popBack(Node* head) {
	assert(head != NULL);
	if (head->next == NULL) {
		free(head);//�ͷŵ�һ���ڵ�
		return NULL;
	}
	else
	{
		Node* lastLast = getlastLast(head);//��ȡ�����ڶ����ڵ�
		free(lastLast->next);//�ͷ����һ���ڵ�
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

//��ת����
Node* reverseList(Node* head) {
	Node* rHead = NULL;//����������
	Node* cur = head;
	while (cur != NULL) {
		Node* next = cur->next;
		//��curͷ�嵽rhead�����������
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
	//ɾ��һ���ڵ㣬��Ҫ�ýڵ��ǰ���ڵ�
	prev->next = node->next;
	free(node);
	//��һ���ڵ�û��ǰ���ڵ�
	Node* prev = NULL;
	Node* cur = head;
	while(cur!=NULL){
	if (cur != NULL) {
		prev->next = cur->next;
	}
	//û���ͷ�cur��ǰָ��Ľڵ�
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