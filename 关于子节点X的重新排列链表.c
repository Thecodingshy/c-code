#define _CRT_SECURE_NO_WARNINGS
//输入 1 9 3 5 6 7 9   X=4；牛客网：链表分割
//输出 1 3 9 5 6 7 9

#include<stdio.h>
#include<stdlib.h>
typedef struct ListNode {
	int val;
	struct ListNode* next;
}ListNode;
 partition(struct ListNode* pHead, int x)
{
	 struct ListNode* lessHead, * lessTail;
	 struct ListNode* greaterHead, * greaterTail;
	 lessHead = lessTail = (ListNode *)malloc(sizeof(ListNode));		//less的首元结点
	 greaterHead = greaterTail = (ListNode*)malloc(sizeof(ListNode));	//great的首元结点
	 lessHead->next = greaterHead->next = NULL;		//初始化结点的next,
	 
	
	 ListNode* cur = pHead;

	 while (cur!=NULL)
	 {
		 if (cur->val < x)
		 {
			 lessTail->next = cur;
			 lessTail = lessTail->next;  
		 }
		 else
		 {
			 greaterTail->next= cur;
			 greaterTail = greaterTail->next;
		 }
		 cur = cur->next;
	 }
	lessTail->next = greaterHead->next; //
	 ListNode* realHead = lessHead->next;

	 free(greaterHead);					//首元结点一般情况下要free
	 free(lessHead);
	 greaterTail->next = NULL;			//防止带环的产生因为如果原链表的倒数第二个数y大于且X最后一个数x小于X，
										//说明x即指向greaterhead->next,y指向lesstail形成闭环
	 return realHead;
}