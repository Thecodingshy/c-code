#define _CRT_SECURE_NO_WARNINGS
//OJ 965 单值二叉树
#include<stdio.h>
#include<stdbool.h>
typedef int BTDatatype;
typedef struct TreeNode {
	struct TreeNode *left;
	struct TreeNode *right;
	BTDatatype val;
}BT;
//bool PreOrderComper(struct TreeNode* root,int val)
//{
//	if (root == NULL&&flag==false)
//		return true;
//
//	bool flag = true;
//	if (root->val !=val)
//	{
//		flag = false;
//		return flag;
//	}
//	PreOrderComper(root->left, val);
//	PreOrderComper(root->right, val);
//}
//-----
//bool isUnivalTree(struct TreeNode* root,int val)
//{
//	if (root == NULL)
//		return true;
//	bool flag = true;
//	PreOrderComper(root,root->val);
//
//	return flag;
//}

//--------------------------------------------------------------------------
//bool PreOrderComper(struct TreeNode* root, int val)
//{
//	if (root == NULL || flag==false)
//		return true;
//
//	if (root->val != val)
//	{
//		bool flag = false;
//		return flag;
//	}
//	PreOrderComper(root->left, val);
//	PreOrderComper(root->left, val);
//}
// -----
//bool isUnivalTree(struct TreeNode* root)
//{
//	if (root == NULL)
//		return true;
//	bool flag = true;
//	
//	PreOrderComper(root, root->val);
//	return flag;
//}
bool flag = true;
bool PreOrderComper(struct TreeNode* root, int val)
{
	if (root == NULL && flag==false)		//&&一个flag==false  目的是：左边查找完了且已经找到了直接返回就行了
		return true;

	if (root->val != val)
	{
		bool flag = false;
		return flag;
	}
	PreOrderComper(root->left, val);
	PreOrderComper(root->right, val);
}
//-----
bool isUnivalTree(struct TreeNode* root)
{
	if (root == NULL)
		return true;

	bool flag = true;
	PreOrderComper(root, root->val);

	return flag;
}

//---------------法二------------------------------

bool isUnivalTree(struct TreeNode* root)
{
	if (root == NULL)
		return true;

	if (root->left && root->left->val != root->val)
		return false;
	if (root->right && root->right->val != root->val)
		return false;

	return isUnivalTree(root->left) && isUnivalTree(root->right);
}

bool isUnivalTree(struct TreeNode* root)
{
	if (root == NULL)
		return true;
	if (root->right && root->right->val != root->val)
		return false;
	if (root->left && root->left->val != root->val)
		return false;
	return isUnivalTree(root->right) && isUnivalTree(root->left);
}

bool isUnivalTree(struct TreeNode* root)
{
	if (root == NULL)
		return true;
	 
	if (root->left && root->left->val != root->val)
		return false;
	if (root->right && root->right->val != root->val)
		return false;

	return isUnivalTree(root->left) && isUnivalTree(root->right);
}