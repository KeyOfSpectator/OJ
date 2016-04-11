////
////  95_Binary Tree Right Side View.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 16/2/21.
////  Copyright © 2016年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
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
//class Solution {
//public:
//    vector<int> rightSideView(TreeNode* root) {
//        queue<TreeNode*> q;
//        q.push(root);
//        int cnt = 0;
//        int level = 1;
//        TreeNode* tmp = NULL;
//        vector<int> ret;
//        while(!q.empty()){
//            TreeNode* node = q.front();
//            q.pop();
//            if(node == NULL){
//                q.push(NULL);
//                q.push(NULL);
//            }
//            else
//                tmp = node;
//                
//            if(node!=NULL && node->left!=NULL)
//                q.push(node->left);
//            else if(node!=NULL)
//                q.push(NULL);
//            if(node!=NULL && node->right!=NULL)
//                q.push(node->right);
//            else if(node!=NULL)
//                q.push(NULL);
//            
//            cnt++;
//            if(cnt == level){
//                if(tmp != NULL)
//                    ret.push_back(tmp->val);
//                else
//                    break;
//                cnt = 0;
//                level*=2;
//                tmp = NULL;
//            }
//            
//        }
//        return ret;
//    }
//};
//
//int main(){
//    
//    TreeNode n1 = TreeNode(1);
//    TreeNode n2 = TreeNode(2);
//    TreeNode n3 = TreeNode(3);
//    TreeNode n4 = TreeNode(4);
//    TreeNode n5 = TreeNode(5);
//    TreeNode n6 = TreeNode(6);
//    
//    n6.left = &n1;
//    n1.right = &n3;
//    n3.left = &n2;
//    n3.right = &n5;
//    n5.left = &n4;
//    
//    Solution s;
//    s.rightSideView(&n6);
//
//    return 0;
//}