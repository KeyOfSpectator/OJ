////
////  56_Sum Root to Leaf Numbers.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/14.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//
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
//int sum;
//int each;
//
//class Solution {
//public:
//    void DFS(TreeNode* node){
//        if(node == NULL) return;
//        each *= 10;
//        each += node->val;
//        
//        if(node->left != NULL)
//            DFS(node->left);
//        if(node->right != NULL)
//            DFS(node->right);
//        if(node->left == NULL && node->right == NULL){
//            sum += each;
//        }
//        
//        each /= 10;
//    }
//    
//    int sumNumbers(TreeNode* root) {
//        sum = 0;
//        each = 0;
//        
//        DFS(root);
//        
//        return sum;
//    }
//};
//
//int main(){
//    
//    TreeNode* node1 = new TreeNode(9);
//    
//    Solution s;
//    s.sumNumbers(node1);
//
//    return 0;
//}