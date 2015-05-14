///*
// * 104_Maximum Depth of Binary Tree.cpp
// *
// *  Created on: 2015Äê4ÔÂ5ÈÕ
// *      Author: fsc
// */
//
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
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// };
//
//class Solution {
//public:
//    int maxDepth(TreeNode *root) {
//    	if(root == NULL)
//    	{
//    		return 0;
//    	}
//    	int max_level = 0;
//    	max_level = recursion_node(root , max_level);
//    	return max_level+1;
//    }
//
//    int recursion_node(TreeNode *Node , int level){
//    	int left_max_level = level;
//    	int right_max_level = level;
//    	if(Node->left != NULL)
//    	{
//    		left_max_level = recursion_node(Node->left , level+1);
//    	}
//    	if(Node->right != NULL)
//    	{
//    		right_max_level = recursion_node(Node->right , level+1);
//    	}
//    	return left_max_level>right_max_level ? left_max_level : right_max_level;
//    }
//
//};
//
//int main()
//{
////	TreeNode root(1);
////	TreeNode node2(2);
////	TreeNode node3(3);
////	TreeNode node4(4);
////
////	root.left = &node2;
////	root.right = &node3;
////	node2.left = &node4;
//
//	TreeNode root(0);
//
//	Solution s;
//	int res;
//	res = s.maxDepth( &root );
//	printf("%d\n" , res);
//	return 0;
//}
//
