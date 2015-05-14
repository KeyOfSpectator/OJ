///*
// * 94_Binary Tree Inorder Traversal.cpp
// *
// *  Created on: 2015Äê5ÔÂ14ÈÕ
// *      Author: fsc
// */
//
//
//#include <stdio.h>
//#include <iostream>
//#include <vector>
//using namespace std;
///**
// * Definition for a binary tree node.
// * struct TreeNode {
// *     int val;
// *     TreeNode *left;
// *     TreeNode *right;
// *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// * };
// */
//
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//class Solution {
//public:
//    vector<int> inorderTraversal(TreeNode* root) {
//    	vector<int> result;
//
//    	if(root==NULL){
//    		return result;
//    	}
//
//    	recursive(root , result);
//    	return result;
//    }
//
//    void recursive(TreeNode* root , vector<int> &result){
//    	if(root->left!=NULL){
//    		recursive(root->left , result);
//    	}
//    	result.push_back(root->val);
//    	if(root->right!=NULL){
//    	    		recursive(root->right , result);
//    	    	}
//    }
//};
//
//int main(){
//
//	TreeNode root = TreeNode(1);
//	TreeNode node2 = TreeNode(2);
//	TreeNode node3 = TreeNode(3);
//	TreeNode node4 = TreeNode(4);
//	TreeNode node5 = TreeNode(5);
//
//	root.left = &node2;
//	root.right = &node3;
//	node2.left = &node4;
//	node3.right = &node5;
//
//	Solution solution;
//	vector<int> result_quene;
//	result_quene = solution.inorderTraversal(&root);
//
//	vector<int>::iterator it;
//	for(it = result_quene.begin() ; it != result_quene.end() ;  it++){
//		printf("%d\n",*it);
//	}
//	return 0;
//}
//
