#define _CRT_SECURE_NO_WARNINGS
struct ListNode {
	int x;
	struct ListNode* next;
};
ListNode* deletDupLication(ListNode* pHead)	//函数体部分
{
	if (head == NULL || head->next == NULL)
		return head;

	ListNode* prev = NULL;
	ListNode* cur = phead;
	ListNode* next = cur->next;

	while (next)
	{
		if (cur->val != next->val)
		{
			prev = cur;				//迭代
			next = cur;
			next = next->next;
		}
		else
		{
			while (next && cur->val == next->val)
			{			
					next = next->next;
			}


			if (prev)
			{
				prev->next = next;
			}
			else              //处理一上来就是连续的内容问题
			{
				phead = next;		//处理头
			}

			//释放
			while (cur != next)		//防止内存泄露
			{
				ListNode* del = cur;
				cur = cur->next;
				free(del);
			}
			if(next)		//处理尾部连续相同的值如果next为空则大循环while直接跳出
				next = next->next;
		}
	}
	return pHead;
}