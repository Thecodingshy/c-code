#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
reverse(struct ListNode* head)	//返回值为逆转后的头指针
{
	struct ListNode *n1 = NULL;
	struct ListNode	*n2 = head;
	struct ListNode	*n3 = head->next;
	if (n2 || n3)
	{
		return head;	//当head链表为空或者只有一个元素时候
	}
	while (n2)
	{
		n2->next = n1;	//交换

		n1 = n2;
		n2 = n3;
		if(n3)			//考虑到n2指向原链尾的NULL时候n3成为野指针
			n3 = n3->next;
	}
	return n1;
}

reverse2(struct ListNode* head)
{
	struct Listnode* cur = head;
	struct Listnode* next= head->next;
	struct Listnode* newhead = NULL;
	while (cur)
	{
		cur->next = newhead;
		newhead = cur;

		cur = next;
		next = next->next;
	}
	return newhead;
}

chkPalindrome(ListNode* A)	// 检查回文链表函数体返回值为bool
{
	ListNode* fast = A;
	ListNode* slow = A;
	listNode* prev = A;

	while (fast && fast->next)
	{
		prev = prev->next;			//为了断开前后链表
		slow = slow->next;
		next = next->next->next;
	}
	prev->next = NULL;
	slow = reverse(slow);	//方法一就是通过返回值返回回来的
	//或者通过二级指针来设计reverse()
	while (A)
	{
		if (A->val != slow->val)
		{
			return false;
		}
		else
		{
			A = A->next;
			slow = slow->next;
		}
	}
	return true;
}