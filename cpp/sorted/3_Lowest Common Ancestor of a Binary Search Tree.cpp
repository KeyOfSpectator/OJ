////
////  3_Lowest Common Ancestor of a Binary Search Tree.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/9/16.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//// AC 没有用到 Binary Search Tree >_<
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
//TreeNode* anc1[100];
//TreeNode* anc2[100];
//
//
//class Solution {
//public:
//    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//        int loc1 = 0;
//        findNode(root , p , anc1 , loc1);
//        int loc2 = 0;
//        findNode(root , q , anc2 , loc2);
//        
////        if(loc1<loc2){
////            return anc1[loc1-1];
////        }
////        else
////            return anc2[loc2-1];
//        
////        for(int i=0 ; i< (loc1<loc2 ? loc1 : loc2) ; i++){
////            if(anc1[i] == anc2[i])
////                return anc1[i];
////        }
//        
//        for(int i=loc2-1 , j=loc1-1 ; i>=0&&j>=0 ;j--,i--){
//             if(anc1[j] == anc2[i])
//                if(j>0 && i>0)
//                     continue;
//                else
//                    if(i>j)
//                      return anc2[i];
//                    else
//                        return anc1[j];
//             else
//                 return anc1[j+1];
//        }
//        
//        return root;
//    }
//    
//    bool findNode(TreeNode* root , TreeNode* node , TreeNode* anc[] , int &loc){
//        
//        bool flag = false;
//        // found
//        if(root == node){
//            anc[loc++] = root;
//            return true;
//        }
//        // leaf
//        if(root->left == NULL && root->right == NULL){
//            return false;
//        }
//        // left
//        if(root->left != NULL){
//            flag = flag || findNode(root->left , node , anc , loc);
//        }
//        if(flag){
//            anc[loc++] = root;
//            return flag;
//        }
//        // right
//        if(root->right !=NULL){
//            flag = flag || findNode(root->right , node , anc , loc);
//        }
//        if(flag){
//            anc[loc++] = root;
//            return flag;
//        }
//        else
//            return flag;
//        
//        
//        
//    }
//};
//
//
//int main(){
//    
//    TreeNode* node0 = new TreeNode(0);
//    TreeNode* node1 = new TreeNode(1);
//    TreeNode* node2 = new TreeNode(2);
//    TreeNode* node3 = new TreeNode(3);
//    TreeNode* node4 = new TreeNode(4);
//    TreeNode* node5 = new TreeNode(5);
//    TreeNode* node6 = new TreeNode(6);
//    TreeNode* node7 = new TreeNode(7);
//    TreeNode* node8 = new TreeNode(8);
//    TreeNode* node9 = new TreeNode(9);
//    
//    node6->left = node2;
//    node6->right = node8;
//    node2->left = node0;
//    node2->right = node4;
//    node4->left = node3;
//    node4->right = node5;
//    node8->left = node7;
//    node8->right = node9;
//    
//    Solution s;
//    TreeNode* ans = s.lowestCommonAncestor(node6, node2, node5);
//    
//    printf("done\n");
//
//    return 0;
//}