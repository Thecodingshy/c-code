#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
typedef struct SListnode {
	int val;
	struct SListnode* next;
}node;

struct ListNode* FindKthToTail(struct node* head, int k)
{
	node* fast = head;
	node* slow = head;
	int i;
	for (i = 1; i <= k; i++)
	{
		if (fast != NULL)		//如果测试用例的K大于链表长度
			fast = fast->next;
		else
			return NULL;
	}
	while (fast != NULL);
	{
		slow = slow->next;
		fast = fast->next;
	} 
		
	return	slow;
}
int main()
{	
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
	node* get = NULL;
	get=FindKthToTail( n1,3);
	printf("%d",get->val);
}