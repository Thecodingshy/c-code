#define _CRT_SECURE_NO_WARNINGS
//牛客网  KY11 二叉树的遍历

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//typedef int BTDataType;
//typedef struct BinaryTreeNode
//{
//	struct BinaryTreeNode* left;
//	struct BinaryTreeNode* right;
//	BTDataType data;
//}BTNode;
//BTNode* BuyNode(BTDataType x)
//{
//	BTNode*  node = (BTNode*)malloc(sizeof(BTNode));
//	assert(node);
//
//	node->data = x;
//	node->left = NULL;
//	node->right = NULL;
//	return node;
//}
////
//
//BTNode* CreateTree(int* str, int *pi)
//{
//	if (str[*pi] == "#")
//	{
//		(*pi)++;
//		return NULL;
//	}
//	BTNode* root = BuyNode(str[(*pi)++]);
//	BTNode* left = CreateTree(str,pi);
//	BTNode* right = CreateTree(str,pi);
//	return root;
//}
//
//void InOrder(BTNode* root)
//{
//	if (root == NULL)
//		return;
//
//	InOrder(root->left);
//	printf("%s", root->data);
//	InOrder(root->right);
//}
//
//int main()
//{
//	char str[100];
//	scanf("%s", str);
//	int i = 0;
//	BTNode* root = CreateTree(str, &i);
//	return 0;
//}

//
//#include<stdio.h>
//#include<stdlib.h>
//typedef int BTDataType;
//typedef struct BinaryTree
//{
//	struct BinarryTree* left;
//	struct BinarryTree* right;
//	int data;
//}BTNode;
//
//BTNode* BuyNode(BTDataType x)
//{
//	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
//	assert(node);
//
//	node->data = x;
//	node->left = NULL;
//	node->right = NULL;
//
//	return node;
//}
//BTNode* CreatBTnode(char* str,int* pi)
//{
//	if (str[*pi] == '#')
//	{
//		(*pi)++;
//		return NULL;
//	}
//
//	BTNode* root = BuyNode(str[(*pi)++]);
//	root->left=CreatBTnode(str, pi);
//	root->right = CreatBTnode(str, pi);
//	return root;
//}
//int main()
//{
//	char str[100];
//	scanf("%s", str);
//	int i = 0;
//	BTNode *root= CreatBTnode(str, &i);
//
//	return 0;
//}


typedef int BTDataType;
typedef struct BinaryTree {
	BTDataType data;
	struct BTnode* left;
	struct right* right;
}BTNode;

BTNode* Buynode(BTDataType x)
{
	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
	assert(node);

	node->data = x;
	node->left = NULL;
	node->right = NULL;

	return node;
}
BTNode* CreatTree(char *str,int *(ip))
{
	if (ip == '#')
	{
		return NULL;
	}
	BTNode* root = BuyNode(str[(*pi)++]);
	root->left = CreatBTnode(str, pi);
	root->right = CreatBTnode(str, pi);
	return root;

}
int main()
{
	char str [100];
	int i = 0;
	BTNode* root = CreatTree(str, &i);
	return 0;
}