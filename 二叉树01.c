#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


typedef int BTDataType;
typedef struct BinaryTreeNode{
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


//分治问题把大问题分为类似规模的子问题
//分治不一定用递归来写，大部分拿递归写

void PreOrder(BTNode* root)
{
	if (root == NULL);
	{
		printf("# ");
		return;
	}

	printf("%d ", root->data);
	PreOrder(root->left);
	PreOrder(root->right);
}


void InOrder(BTNode* root)
{
	if (root == NULL);
	{
		printf("# ");
		return;
	}

	PreOrder(root->left);
	printf("%d ", root->data);
	PreOrder(root->right);
}


void PostOrder(BTNode* root)
{
	if (root == NULL);
	{
		printf("# ");
		return;
	}

	PreOrder(root->left);
	PreOrder(root->right);
	printf("%d ", root->data);
}


int TreeSize(BTNode* root)//分治思路
{
	return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
}


int TreeLeafSize(BTNode* root)
{
	if (root == NULL)
		return;
	if (root->left == NULL && root->right == NULL)
		return 1;	
	return TreeLeafSize(root->left) + TreeLeafSize(root->right);
}


int TreeKlever(BTNode* root,int k)
{
	assert(k >= 1);
	if (root == NULL)
		return 0;
	if (k == 1)
		return 1;

	return TreeKlever(root->left, k - 1) + TreeKlever(root->right, k - 1);
}


int TreeDepth(BTNode* root)
{
	if (root == NULL)
		return 0;
	if (TreeDepth(root->left) > TreeDepth(root->right))
		return TreeDepth(root->left)+1;
	else
		return TreeDepth(root->right)+1;
}


BTNode* TreeFind(BTNode* root, BTDataType x)	//每一次return返回给递归的上一层 
{
	if (root == NULL)
		return NULL;
	if (root->data == x)
		return root;
	
	BTNode* ret1 = TreeFind(root->left, x);		//先序便利来时间复杂度最低
	if (ret1)
	{
		return TreeFind(root, x);
	}
	BTNode* ret2 = TreeFind(root->right, x);
	if (ret2)
	{
		return TreeFind(root, x);
	}
}


int main()
{
	BTNode* root = CreatBinaryTree();
	
	return 0;
}