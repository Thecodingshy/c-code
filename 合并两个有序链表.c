#define _CRT_SECURE_NO_WARNINGS
//核心取小的节点来尾插
//输入1->2->4,  1->3->4->5->8
//输出1->1->2->3->4->4->5->8
#include<stdio.h>
typedef struct SListnode {
	int val;
	struct SListnode* next;
}node;

typedef struct ListNode node;
struct ListNode* mergeTowLists(struct node* li, struct node* l2)
{
	node* head = NULL;
	node* tail = NULL;
	{
		if (l1 == NULL)			//保证l1,l2都不为空
			return l2;
		else (l2 == NULL)
			return l1;
	}
	if (l1->val < l2->val)		//取小的为新链表的头
	{
		head = tail = l1;
		l1 = l1->next;
	}
	else
	{ 
		head = tail = l2;
		l2 = l2->next;
	}
	while (l1!=NULL && l2!=NULL)	//想结束写继续
	{
		if (l1->val < l2->val)		//尾插
		{
			tail->next = l1;
			l1 = l1->next;
		}
		else
		{
			tail->next = l2;
			l2 = l2->next;
		}
		tail = tail->next;
	}
	if (l1 != NULL)
		tail->next = l1;
	else
		tail->next = l2;
	return head;
}