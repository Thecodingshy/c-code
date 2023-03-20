#define _CRT_SECURE_NO_WARNINGS
typedef struct ListNode {
	int val;
	struct ListNode *next;
}node;

bool hasCycle(struct ListNode* head)
node slow = head;
node fast = fead;
{
	slow = slow->next;
	fast = fast->next;
	if (slow == fast)
	{
		return true;
	}
	return false;
}
/*
	面试官：
	请证明快指针是如何追上慢指针的？
	如果慢指针一次一步，快指针一次三步行不行？四步呢？n步？

	结论，只能是慢指针走一步，快指针走两步。其他情况下对于如果链表长度不一样时候就不一定可以了
*/