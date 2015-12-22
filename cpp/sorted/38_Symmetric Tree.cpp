////
////  38_Symmetric Tree.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/9.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////

//// 绕
//
//#include <stdio.h>
//#include <queue>
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
//queue<TreeNode*> q;
//TreeNode* l[10000];
//int loc;
//
//class Solution {
//public:
//    bool checkSymmetric(){
//        if(loc == 1) return false;
//        for(int i=0 ; i<loc ; i++){
//            if( (l[i]!=NULL && l[loc-1-i]==NULL) || (l[i]==NULL && l[loc-1-i]!=NULL) ||  (l[i]!=NULL && l[loc-1-i]!=NULL)&&(l[i]->val != l[loc-1-i]->val))
//                return false;
//        }
//        return true;
//    }
//    
//    bool isSymmetric(TreeNode* root) {
//        if(root == NULL)return true;
//        while(!q.empty()) q.pop();
//        q.push(root);
//        while(!q.empty())
//        {
//            loc = 0;
//            //
//            while(!q.empty()){
//                TreeNode* tmp = q.front();
//                q.pop();
//                if(tmp->left != NULL){
//                    l[loc++] = tmp->left;
//                }
//                else{
//                    l[loc++] = NULL;
//                }
//                if(tmp->right != NULL){
//                    l[loc++] = tmp->right;
//                }
//                else{
//                    l[loc++] = NULL;
//                }
//            }
//            //
//            if(!checkSymmetric()){
//                return false;
//            }
//            //
//            for(int i=0 ; i<loc ; i++){
//                if(l[i]!=NULL)
//                    q.push(l[i]);
//            }
//        }
//        return true;
//    }
//};
//
//
//int main(){
//
//    TreeNode node1 = TreeNode(1);
////    TreeNode node2 = TreeNode(2);
////    TreeNode node3 = TreeNode(2);
////    TreeNode node4 = TreeNode(3);
////    TreeNode node5 = TreeNode(3);
//    
////    node1.left = &node2;
////    node1.right = &node3;
////    node2.right = &node4;
////    node3.left = &node5;
//    
//    Solution s;
//    bool ans = s.isSymmetric(&node1);
//    
//    return 0;
//}