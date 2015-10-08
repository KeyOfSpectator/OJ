////
////  20_Binary Tree Postorder Traversal.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/9/23.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//#include <stack>
//using namespace std;
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
//stack<TreeNode*> s;
//vector<int> ans;
//
//class Solution {
//public:
//    vector<int> postorderTraversal(TreeNode* root) {
//        
//        while(s.size() != 0) s.pop();
//        ans.clear();
//        
//        if(root == NULL) return ans;
//        
//        s.push(root);
//        
//        while(s.size() != 0){
//            TreeNode* tmp = s.top();
//            if(tmp->left == NULL && tmp->right == NULL){
//                ans.push_back(tmp->val);
//                s.pop();
//            }
//            else if(tmp->left != NULL){
//                s.push(tmp->left);
//                tmp->left = NULL;
//            }
//            else if(tmp->right != NULL){
//                s.push(tmp->right);
//                tmp->right = NULL;
//            }
//        }
//        return ans;
//    }
//};
//
//
//int main(){
//
//    return 0;
//}