#define _CRT_SECURE_NO_WARNINGS
//  abs()是C语言的库函数求（）内的绝对值

typedef struct ListNode {
		int val;
		struct ListNode* next;
}ListNode;
struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB)		//函数体部分
{
	ListNode* curA = headA;
	int la = 0;
	while (curA)							//求A链表的实际长度
	{
		la = la + 1;
		curA = curA->next;
	}
	ListNode* curB = headB;
	int lb = 0;
	while (curB)							//求B链表的实际长度
	{
		lb = lb + 1;
		curB = curB->next;
	}
	ListNode* longlist  = headA;			//找到长的和短的链表并且用long 和short表示
	ListNode* shortlist = headB;
	if (la < lb)
	{
		longlist = headB;
		shortlist =headA;
	}
	int gap = abs(la - lb);
	while (gap--)
	{
		longlist = longlist->next;
	}
	/*			//可以写比我更优的代码进行替换比如老师下面写的内容
	if (longlist->next == shortlist->next, longlist = longlist->next, shortlist = shortlist->next)
	{
		return longlist;
	}
	return null;
	*/
	while (longlist)						//精辟的点
	{
		if (longlist == shortlist)
			return longlist;

		longlist = longlist->next;
		shortlist = shortlist->next;
	}
	return NULL;
}