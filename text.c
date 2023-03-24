#define _CRT_SECURE_NO_WARNINGS

#include"List.h"

void TestList1()
{
	//ListNode* phead = NULL;
	//ListInit(&phead);
	ListNode* phead = ListInit();
	ListPushBack(phead, 1);
	ListPushBack(phead, 2);
	ListPushBack(phead, 3);
	ListPushBack(phead, 4);

	ListPrint(phead);

	ListPopBack(phead);
	ListPopBack(phead);
	ListPopBack(phead);
	ListPopBack(phead);

	ListPrint(phead);

	ListPushFront(phead, 1);
	ListPushFront(phead, 2);
	ListPushFront(phead, 3);
	ListPushFront(phead, 4);
	ListPushFront(phead, 5);
	ListPrint(phead);

	ListPopFront(phead);
	ListPopFront(phead);
	ListPopFront(phead);
	ListPopFront(phead);

	ListDestory(phead);
}

void TestList2()
{
	ListNode* phead = ListInit();
	ListPushBack(phead, 1);
	ListPushBack(phead, 2);
	ListPushBack(phead, 3);
	ListPushBack(phead, 4);

	ListNode* pos = ListFind(phead, 3);
	ListInsert(pos, 30);
	ListPrint(phead);

	ListDestory(&phead);
}
int main()
{
	TestList1();	
	TestList2();
	return 0;
}