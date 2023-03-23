#define _CRT_SECURE_NO_WARNINGS
#include "List.h"

//void ListInit(ListNode** pphead)			//外面传的是phead的地址过来
//{
//	*pphead = BuyListNode(0);
//	(*pphead)->next = *pphead;
//	(*pphead)->prev = *pphead;
//}


ListNode* ListInit()						//通过返回指针方式来进行初始化
{
	ListNode* phead = BuyListNode(0);
	phead->next = phead;
	phead->prev = phead;

	return phead;
}


ListNode* BuyListNode(LTDataType x)
{
	ListNode* node = (ListNode *)malloc(sizeof(ListNode));
	node->next = NULL;
	node->prev = NULL;
	node->data = x; 

	return node;
}


void ListPrint(ListNode* phead)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}


void ListPushBack(ListNode* phead, LTDataType x)
{
	assert(phead);
	ListNode* tail = phead->prev;
	ListNode* newnode = BuyListNode(x);

	tail->next = newnode;
	newnode->prev = tail;

	newnode->next = phead;
	phead->prev = newnode;
}


void ListPopBack(ListNode* phead)
{
	assert(phead);
	assert(phead->next != phead);	//表示删到没有删了
	ListNode* tail = phead->prev;
	ListNode* tailPrev = tail->prev;
	
	tailPrev->next=phead;
	phead->prev = tailPrev;			//当删完最后一个时候又回归最初只有phead指针状态
	free(tail);
	tail = NULL;			//置空好习惯
}


void ListPushFront(ListNode* phead, LTDataType x)	//头插
{
	assert(phead);
	ListNode* first = phead->next;
	ListNode* newnode = BuyListNode(x);

	phead->next = newnode;
	newnode->prev = phead;

	newnode->next = first;
	first->prev = newnode;
}


void ListPopFront(ListNode* phead)
{
	assert(phead);
	assert(phead->next !=phead);

	ListNode* first = phead->next;
	ListNode* second = first->next;

	//phead first second
	phead->next = second;
	second->prev = phead;
	free(first);

}

ListNode* ListFind(ListNode* phead, LTDataType x)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == x)
			return cur;

		cur = cur->next;
	}
	return NULL;
}

void ListInsert(ListNode* pos, LTDataType x)
{
	assert(pos);
	ListNode* posPrev = pos->prev;
	ListNode* newnode = BuyListNode(x);

	//posPrev newnode pos
	posPrev->next = newnode;
	newnode->prev = posPrev;
	newnode->next = pos;
	pos->prev = newnode;
}

void ListErase(ListNode* pos)
{
	assert(pos);
	//assert(pos != phead);
	ListNode* posPrev = pos->prev;
	ListNode* posNext = pos->next;

	free(pos);
	posPrev->next = posNext;
	posNext->prev= posPrev;
}
