#define _CRT_SECURE_NO_WARNINGS
//OJ----138
//缺点：侵入式编程  如果并发操作时会有问题
//解决：C++  map,ordermap kv结构（结构）
#include<stdlib.h>
struct Node{
	int val;
	struct Node* next;
	struct Node* random;
}Node;
struct Node* copyRandomList(struct Node head)
{
	if (head == NULL)		//假设测试用例为{}没有链表传入，特殊情况
		return NULL;

	//1.拷贝节点，链接到原节点后面
	Node* cur = head;
	while (cur)
	{
		Node* copy = (Node*)malloc(sizeof(Node));
		copy->next = NULL;
		copy->random = NULL;
		copy->val = cur->val;

		copy->next = cur->next;	//跟下面的内容不能调换
		cur->next = copy;

		cur = next;				//迭代
	}

	//2.处理拷贝结点的random
	cur = head;
	while (cur)
	{
		Node* copy = cur->next;
		if(cur->random==NULL)
			copy->random = cur->random->next;		//copy结点的random指向cur->random->next		太妙了
	}
	cur = cur->next->next;	//或者cur=copy->next	

	//拆
	cur = head;
	Node* copyHead = head->next;					
	while (cur)
	{
		Node* copy = cur->next;
		Node* next = copy->next;

		cur->next = next;			//断一条
		if (next)
			copy->next = next->next;	//断另一条就像当于copy结点跟节点之间的关系都没了
		else
			copy->next = NULL;
		cur = next;					//迭代
	}
	return copyHead;
}













