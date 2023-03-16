#define _CRT_SECURE_NO_WARNINGS
#include"SList.h"

SListNode* BuySListNode(SListDataType x)
{
	SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
	if (newNode == NULL)
	{
		printf("申请结点失败\n");
		exit(-1);
	}
	newNode->data = x;
	newNode->next = NULL;
	return newNode;
}
	void SListPushBack(SListNode** pphead, SListDataType x) //pphead是一个二级指针因为传过来的是（&phead）是一级指针的地址
{
		SListNode* newNode = BuySListNode(x);		
			if (*pphead == NULL)	//如果刚进来没有结点
			{
				*pphead = newNode;
			}			
			else
			{
				// 找尾部
				SListNode* tail = *pphead;
				while (tail->next != NULL)
				{
					tail = tail->next;
				}
	
				tail->next = newNode;
			}
}
void SListPrint(SListNode* phead)	//遍历打印链表
{
	SListNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);		 
		cur = cur->next;			//去下一个结点拿地址
	}
	printf("NULL");
}
void SListPopBack(SListNode** pphead)
{
	//1.空
	if (*pphead == NULL)
		{
		return;
		}
	//2.一个
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	//3.一个以上
	else
	{
		SListNode* prev = NULL;
		SListNode* tail = *pphead;
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		tail = NULL;	//可写可不写
		prev->next = NULL;
	}
}

void SListPushFront(SListNode** pphead, SListDataType x)
{
	SListNode *newnode= BuySListNode(x);
	newnode->next = *pphead;//把开始指向该链表的地址（开始存在*pphead(&plist)中），拷备一封给newnode->next
	*pphead = newnode;		//让*pphead与原来第一个结点断开连接，转而指向newnode
}

void SListPopFront(SListNode** pphead)
{
	//1.为空
	printf("\n");
	if (*pphead == NULL)
	{
		return;
	}
	//2.一个结点或多个结点
	else 
	{
		SListNode *next = ((*pphead)->next);
		free(*pphead);
		*pphead = next;
	}
}

SListNode* SListFind(SListNode* phead, SListDataType x)
{
	SListNode* cur = phead;
	while (cur != NULL)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}

void SListInserAfter(SListNode* pos, SListDataType x)	//在pos的后面插入newnode(前面插入特别麻烦)
{
	assert(pos);
	SListNode* newnode = BuySListNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}
void SListEraseAfter(SListNode* pos)
{
	assert(pos);
	if (pos->next != NULL)
	{
		SListNode* next = pos->next;
		SListNode* nextnext = next->next;
		pos->next=nextnext;
		free(next); 
	}
}