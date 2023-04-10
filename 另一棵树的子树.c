#define _CRT_SECURE_NO_WARNINGS
#include<stdbool.h>
#include<stdio.h>
typedef struct TreeNode {
	int data;
	struct TreeNode* left;
	struct TreeNode* right;
}TreeNode;

bool IsSameTree(TreeNode* p, TreeNode* q)		//用先序来进行遍历比较
{
	if (q == NULL && p == NULL)
		return true;
	if (q == NULL || p == NULL)
		return false;

	if (q->data != p->data)
		return false;

	return IsSameTree(p->left, p->right) && IsSameTree(q->left, q->right);
}
//---------------------代码复用---------------------------


//bool isSubTree(struct TreeNode* root, struct TreeNode* Subroot)
//{
//	if (root == NULL)
//		return false;
//	
//	if(isSymmetric(root, Subroot));
//		return true;
//	
//		return isSubTree(root->left, Subroot) || isSubTree(root->right, Subroot);
//}

bool isSubTree(struct TreeNode* root, struct TreeNode* Subroot)
{
	if (root == NULL)
		return false;

	if(isSymmetric(root, Subroot));		//实现了之前代码的复用，判断
		return true;

	return isSubTree(root->left, Subroot) || isSubTree(root->right, Subroot);
}