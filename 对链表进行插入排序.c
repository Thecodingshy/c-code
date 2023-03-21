#define _CRT_SECURE_NO_WARNINGS
//		OJ 147  对链表进行插入排序
#include<stdio.h>
typedef struct ListNode {
	int val;
	struct ListNode* next;
}Node;

struct ListNode* insertionSortList(struct ListNode* head) {
	if (head == NULL || head->next == NULL)
		return head;
	Node* sortHead = head;
	Node* cur = head->next;
	sortHead->next = NULL;

	while (cur)
	{
		Node* next = cur->next;
		//把cur插入到sortHead链表中，并且保持有序
		if (cur->val <= sortHead->val)	//说明头插
		{
			cur->next = sortHead;
			sortHead = cur;
		}
		else                //中间插入或者尾插
		{
			Node* sortPrev = sortHead;
			Node* sortCur = sortPrev->next;
			while (sortCur)
			{
				if (sortCur->val)
					sortPrev->next = cur;
					cur->next = sortCur;
					break;
				else
				{
					sortPrev = sortCur;			//迭代直到找到合适的位置
					sortCur = sortCur->next;
				}
			}	
			if (sortCur == NULL)	//判断不是break出来的，即找到尾部了已经
			{
				sortPrev->next = cur;
				cur->next = NULL;
			}
		}	
		cur = next;
	}
	return sortHead;
}