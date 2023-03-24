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
	
	//代码复用
	//ListInsert(phead,x);
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

	//代码复用
	//ListErase(phead->prev);
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

	//如果要进行代码的复用
	//ListInsert(phead->next,x);
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

	//代码复用
	//ListErase(phead->next);
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

	//posPrev newnode  pos
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


void ListClear(ListNode* phead)		//清理所有的数据结点，保留头节点，可以继续使用
{
	assert(phead);

	ListNode* cur = phead;
	while (cur != phead)
	{
		ListNode* next = cur->next;
		free(cur);
		cur = next;
	}
	phead->next = phead;
	phead->prev = phead;
}


void ListDestory(ListNode** pphead)	//销毁掉该链表
{
	assert(*pphead);

	ListClear(*pphead);
	free(*pphead);
}