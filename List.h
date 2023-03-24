#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

typedef int LTDataType;
typedef struct ListNode {
	struct ListNode* next;
	struct ListNode* prev;
	LTDataType data;
}ListNode;


//void ListInit(ListNode** phead);
ListNode* ListInit();								//@@@@
ListNode* BuyListNode(LTDataType x);
void ListPushBack(ListNode* phead, LTDataType x);
void ListPopBack(ListNode* phead);
void ListPushFront(ListNode* phead, LTDataType x);
void ListPopFront(ListNode* phead);

ListNode* ListFind(ListNode* phead, LTDataType x);
//在pos前面插入
void ListInsert(ListNode* pos, LTDataType x);		//@@@@
void ListErase(ListNode* pos);						//@@@@

void ListPrint(ListNode* phead);

void ListDestory(ListNode** pphead);
void ListClear(ListNode* phead);


/*
	链表和顺序表（数组）的区别和联系：
		1.顺序表就是在数组的基础上实现增删查改，并且插入时可以动态增长
		顺序表缺陷：
			a.存在一定的空间浪费
			b.增容有一些的效率损失
			c.中间或者头部插入删除，时间复杂度O（n）,因为要挪动数据
		这些问题链表就解决了
		链表的缺陷：
			链表不能随机访问

			数组内存利用率高于链表
			顺序表会有缓存污染的问题《深入理解计算机系统》

		互补的数据结构
*/