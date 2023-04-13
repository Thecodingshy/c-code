#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
typedef BTNode QDataType;

typedef struct QueueNode
{
	struct QueueNode* next;
	QDataType data;
}QueueNode;

typedef struct Queue
{
	QueueNode* head;
	QueueNode* tail;
}Queue;


typedef int BTDataType;
typedef struct BinaryTreeNode {
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	BTDataType data;
}BTNode;


BTNode* BuyNode(BTDataType x)
{
	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
	assert(node);

	node->data = x;
	node->left = NULL;
	node->right = NULL;

	return node;
}


BTNode* CreatBinaryTree()
{
	BTNode* node1 = BuyNode(1);
	assert(node1);
	BTNode* node2 = BuyNode(2);
	assert(node1);
	BTNode* node3 = BuyNode(3);
	assert(node3);
	BTNode* node4 = BuyNode(4);
	assert(node4);
	BTNode* node5 = BuyNode(5);
	assert(node5);
	BTNode* node6 = BuyNode(6);
	assert(node6);

	node1->left = node2;
	node1->right = node4;
	node2->left = node3;
	node4->left = node5;
	node4->right = node6;
	return node1;
}


void QueueInit(Queue* pq)
{
	assert(pq);
	pq->head = NULL;
	pq->tail = NULL;

}

QDataType QueueFront(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));

	return pq->head->data;
}

void QueuePop(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));				//assert(pq->head);

	QueueNode* next = pq->head->next;
	free(pq->head);
	pq->head = next;
	if (pq->head == NULL)					//删完了，要处理tail不然tail变成了野指针
	{
		pq->tail = NULL;
	}
}

void QueuePush(Queue* pq, QDataType x)
{
	assert(pq);
	QueueNode* newnode = (QueueNode*)malloc(sizeof(QueueNode));
	if (newnode != NULL)
	{
		newnode->data = x;
		newnode->next = NULL;

		if (pq->head == NULL)
		{
			pq->head = pq->tail = newnode;
		}
		else
		{
			pq->tail->next = newnode;
			pq->tail = newnode;
		}
	}
	printf("开辟失败");
	exit(-1);
}

void QueueDestory(Queue* pq)
{
	assert(pq);
	QueueNode* cur = pq;
	while (cur)
	{
		QueueNode* next = cur->next;
		free(cur);
		cur = next;
	}
	pq->head = pq->tail = NULL;	//处理一直不动的指针pq->tail
}

bool QueueEmpty(Queue* pq)
{
	assert(pq);
	return pq->head == NULL;	//pq->head==NULL是真的，返回true；pq->head==NULL是假的，返回false；
}

bool treeCompate(BTNode* root)
{
	Queue q;
	QueueInit(&q);
	if (root)
	{
		QueuePush(&q, root);
	}
	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);
		if (front)
		{
			QueuePush(&q, front->left);
			QueuePush(&q, front->right);
		}
		else
		{
			break;	//遇到空以后，则跳出层序遍历
		}
	}

	//如果后面全为空则是完全二叉树
	//如果后面有非空则不是完全二叉树
	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);
		if (front)
		{
			QueueDestory(&q);
			return false;
		}
	}
	QueueDestory(&q);
	return true;
}


int main()
{
	BTNode* root = CreatBinaryTree();
	treeCompate(root);
	return 0;
}
