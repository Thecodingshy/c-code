#define _CRT_SECURE_NO_WARNINGS

struct ListNode* detectCycle(struct ListNode* head)
{
	struct ListNode* slow, * fast;
	slow = fast = head;
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (fast == slow)
		{			
			break;
		}		
	}
	if (fast==NULL ||fast->next==NULL)
	{
		return NULL;
	}
	struct ListNode* meet = fast;
	while (head != meet)
	{
		head = head->next;
		meet=meet->next:
	}
	return meet;
}