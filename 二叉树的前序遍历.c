#define _CRT_SECURE_NO_WARNINGS
#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>
typedef struct TreeNode {
	int data;
	struct TreeNode* left;
	struct TreeNode* right;
}TreeNode;
int TreeSize(TreeNode *root)
{
	return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
}
void PreOrder(struct TreeNode* root, int* a, int (*pi))
{
	if (root == NULL)
		return;
	a[(*pi)++] = root->data;
	PreOrder(root->left, a, (*pi));
	PreOrder(root->right, a, (*pi));
}


int* PreOrderTraversal(struct TreeNode* root,int *returnSize)  //int *returnSize 是输出型参数
{
	*returnSize = TreeSize(root);
	int* a = (int*)malloc(*returnSize * sizeof(int));
	int i = 0;
	PreOrder(root, a, &i);
	return a;
}