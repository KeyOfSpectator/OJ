////
////  40_Kth Smallest Element in a BST.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/10.
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
//int loc;
//int K;
//bool found;
//int ans;
//
//class Solution {
//public:
//    void recusion(TreeNode* node){
//        if(node->left != NULL){
//            recusion(node->left);
//        }
//        //
//        if(!found){
//            loc++;
//            if(loc == K){
//                found = true;
//                ans = node->val;
//                return;
//            }
//        }
//        else
//            return;
//        
//        if(node->right != NULL){
//            recusion(node->right);
//        }
//    }
//    
//    int kthSmallest(TreeNode* root, int k) {
//        loc = 0;
//        K = k;
//        found = false;
//        ans = 0;
//        recusion(root);
//        if(!found)
//            return NULL;
//        else
//            return ans;
//    }
//};
//
//class Solution_别人的 {
//public:
//    int calcTreeSize(TreeNode* root){
//        if (root == NULL)
//            return 0;
//        return 1+calcTreeSize(root->left) + calcTreeSize(root->right);
//    }
//    int kthSmallest(TreeNode* root, int k) {
//        if (root == NULL)
//            return 0;
//        int leftSize = calcTreeSize(root->left);
//        if (k == leftSize+1){
//            return root->val;
//        }else if (leftSize >= k){
//            return kthSmallest(root->left,k);
//        }else{
//            return kthSmallest(root->right, k-leftSize-1);
//        }
//    }
//};
//
//int main(){
//
//
//    return 0;
//}
//
//
//
