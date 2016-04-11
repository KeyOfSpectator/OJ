//#include <stdio.h>
//#include <iostream>
//
///**
// * Definition for binary tree
// * struct TreeNode {
// *     int val;
// *     TreeNode *left;
// *     TreeNode *right;
// *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// * };
// */
//
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) :
//			val(x), left(NULL), right(NULL) {
//	}
//};
//
//class Solution {
//
//public:
//	bool isSameTree(TreeNode *p, TreeNode *q) {
//
//		if(p==NULL&&q==NULL)
//		{
//			return true;
//		}
//		if(!(p!=NULL&&q!=NULL))
//		{
//			return false;
//		}
//
//		bool res = true;
//		res = recursion(p, q, res);
//		return res;
//	}
//
//	bool recursion(TreeNode *p, TreeNode *q, bool res) {
//		if (res == false) {
//			return false;
//		} else {
//			if (p->val != q->val) {
//				return false;
//			} else {
//				bool res_left = true;
//				if (p->left != NULL && q->left != NULL) {
//					res_left = recursion(p->left, q->left, true);
//				} else if (!(p->left == NULL && q->left == NULL)) {
//					return false;
//				}
//				if (res_left == false)
//					return false;
//				bool res_right = true;
//				if (p->right != NULL && q->right != NULL) {
//					res_right = recursion(p->right, q->right, true);
//				} else if (!(p->right == NULL && q->right == NULL)) {
//					return false;
//				}
//				if (res_right == false)
//					return false;
//				return true;
//			}
//		}
//	}
//
//};
//
//int main() {
//
////	//	same tree
////
////	TreeNode root1(1);
////	TreeNode node2(2);
////	TreeNode node3(3);
////	TreeNode node4(4);
////	root1.left = &node2;
////	root1.right = &node3;
////	node2.left = &node4;
////
////	TreeNode root1_2(1);
////	TreeNode node2_2(2);
////	TreeNode node3_2(3);
////	TreeNode node4_2(4);
////	root1_2.left = &node2_2;
////	root1_2.right = &node3_2;
////	node2_2.left = &node4_2;
//
////	//	differ tree 1
////
////		TreeNode root1(1);
////		TreeNode node2(2);
////		TreeNode node3(3);
////		TreeNode node4(4);
////		root1.left = &node2;
////		root1.right = &node3;
////		node2.left = &node4;
////
////		TreeNode root1_2(1);
////		TreeNode node2_2(2);
////		TreeNode node3_2(3);
////		TreeNode node4_2(5);
////		root1_2.left = &node2_2;
////		root1_2.right = &node3_2;
////		node2_2.left = &node4_2;
//
////	differ tree 2
//
//	TreeNode root1(1);
//	TreeNode node2(2);
//	TreeNode node3(3);
//	TreeNode node4(4);
//	root1.left = &node2;
//	root1.right = &node3;
//	node2.left = &node4;
//
//	TreeNode root1_2(1);
//	TreeNode node2_2(2);
//	TreeNode node3_2(3);
//	TreeNode node4_2(5);
//	root1_2.left = &node2_2;
//	root1_2.right = &node3_2;
//	node2_2.right = &node4_2;
//
//	Solution s;
//	bool res;
//	res = s.isSameTree(&root1, &root1_2);
//	printf("%d\n", res);
//
//	return 0;
//}
