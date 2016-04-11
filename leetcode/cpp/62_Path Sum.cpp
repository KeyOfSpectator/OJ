////
////  62_Path Sum.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/15.
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
//int cnt;
//bool ans;
//int SUM;
//
//class Solution {
//public:
//    
//    void DFS(TreeNode* node , int cur_sum){
//        if(ans) return;
//        int cur_cnt = cur_sum;
//        if(node!=NULL){
//            cur_cnt += node->val;
////            if( cur_cnt > SUM )
////                return;
//            if(node->left == NULL && node->right == NULL && cur_cnt == SUM ){
//                ans = true;
//                return;
//            }
//            if(node->left != NULL){
//                DFS(node->left , cur_cnt);
//            }
//            if(node->right != NULL){
//                DFS(node->right , cur_cnt);
//            }
//        }
//        else
//            return;
//        
//    }
//    
//    bool hasPathSum(TreeNode* root, int sum) {
//        ans = false;
//        SUM = sum;
//        cnt = 0;
//        DFS(root , 0);
//        return ans;
//    }
//};
//
//
//int main(){
//    
//    TreeNode* node1 = new TreeNode(1);
////    TreeNode* node2 = new TreeNode(2);
////    TreeNode* node3 = new TreeNode(3);
//    
//    Solution s;
//    s.hasPathSum(node1, 1);
//    
//    
//    return 0;
//}