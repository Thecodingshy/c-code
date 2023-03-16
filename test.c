#define _CRT_SECURE_NO_WARNINGS
#include"SList.h"
void TextSList1()
{
	SListNode* pList = NULL;
	SListPushBack(&pList, 1);	//二级指针传了指针的地址
	SListPushBack(&pList, 2);
	SListPushBack(&pList, 3);
	SListPushBack(&pList, 4);
	SListPrint(pList);
	SListPopBack(&pList);
	SListPopBack(&pList);
	SListPopBack(&pList);
	SListPopBack(&pList);
	printf("\n");
	SListPushFront(&pList, 1);
	SListPushFront(&pList, 2);
	SListPushFront(&pList, 3);
	SListPushFront(&pList, 4);
	SListPrint(pList);
//	SListPopFront(&pList);
//	SListPopFront(&pList);
//	SListPopFront(&pList);
//	SListPrint(pList);

	SListNode* post = SListFind(pList, 3);	//查找3
	if (post != NULL)						//修改对应位置值
	{
		post->data = 30;
	}
	SListPrint(pList);
}
int main()
{
	TextSList1();
	return 0;
} 