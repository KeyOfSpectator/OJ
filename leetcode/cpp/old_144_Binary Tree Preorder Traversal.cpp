///*
// * 144_Binary Tree Preorder Traversal.cpp
// *
// *  Created on: 2015Äê4ÔÂ28ÈÕ
// *      Author: fsc
// */
//
//#include <stdio.h>
//#include <iostream>
//#include <vector>
//using namespace std;
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
//public:
//	vector<int> preorderTraversal(TreeNode *root) {
//		vector<int> result;
//
//		if(root==NULL){
//			return result;
//		}
//
//		recursive(result , root);
//
//		return result;
//	}
//
//	void recursive(vector<int> &result , TreeNode *node){
//		result.push_back(node->val);
//		if(node->left!=NULL){
//			recursive(result, node->left);
//		}
//		if(node->right!=NULL){
//			recursive(result, node->right);
//		}
//	}
//};
//
//
//
//
//int main() {
//
//	TreeNode root = TreeNode(1);
//	TreeNode node1 = TreeNode(2);
//	TreeNode node2 = TreeNode(3);
//	TreeNode node3 = TreeNode(4);
//	TreeNode node4 = TreeNode(5);
//	TreeNode node5 = TreeNode(6);
//
////	root.right = &node1;
////	node1.left = &node2;
//
//	root.left = &node1;
//	node1.left = &node2;
//	node1.right = &node3;
//	root.right = &node4;
//	node4.left = &node5;
//
//	Solution solution;
//	vector<int> result_print;
//	result_print = solution.preorderTraversal(&root);
//
//	vector<int>::iterator it;
//	for(it = result_print.begin() ; it!=result_print.end() ; it++){
//		printf("%d\n" , *it);
//	}
//
//
//}
//
