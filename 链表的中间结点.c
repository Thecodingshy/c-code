#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//快慢指针		OJ 876		操作空间内存指针

struct ListNode* middileNode(struct node* head)
{
	struct node* slow = head;
	struct node* fast = head;
	while (fast && fast->next)	//继续的条件：fast不为NULL且fast->next不为NULL;保证循环继续
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
}
int main()
{
	typedef struct ListNode {					//快速在编译器下构建oj的测试用例
		int val;
		struct ListNode* next;
	}node;
	node* n1 = (node*)malloc(sizeof(node));
	n1->val = 1;
	node* n2 = (node*)malloc(sizeof(node));
	n2->val = 3;
	node* n3 = (node*)malloc(sizeof(node));
	n3->val = 5;
	node* n4 = (node*)malloc(sizeof(node));
	n4->val = 7;
	node* n5 = (node*)malloc(sizeof(node));
	n5->val = 9;

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;
	n5->next = NULL;

	node* mid = NULL;
	node* mid=middileNode(n1);
	return 0;
}