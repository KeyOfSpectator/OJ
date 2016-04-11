////
////  101_Binary Tree Level Order Traversal.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 16/2/26.
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
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//class Solution_timeLimit {
//public:
//    queue<TreeNode*> q;
//    vector<vector<int>> levelOrder(TreeNode* root) {
//        
//        vector<vector<int>> ans;
//        vector<int> level_ans;
//        
//        q.push(root);
//        int cnt = 0;
//        int level = 1;
//        while(q.size() != 0){
//            TreeNode* node = q.front();
//            q.pop();
//            if(node != NULL){
//                level_ans.push_back(node->val);
//                if(node->left != NULL)
//                    q.push(node->left);
//                else
//                    q.push(NULL);
//                if(node->right != NULL)
//                    q.push(node->right);
//                else
//                    q.push(NULL);
//            }
//            else{
//                q.push(NULL);
//                q.push(NULL);
//            }
//            
//            cnt++;
//            if(cnt == level){
//                if(level_ans.size() == 0) break;
//                ans.push_back(level_ans);
//                level_ans.clear();
//                cnt = 0;
//                level *= 2;
//            }
//        }
//        return ans;
//    }
//};
//
//class Solution {  // double queue
//public:
//    vector<vector<int>> levelOrder(TreeNode* root) {
//        queue<TreeNode*>q1;
//        vector<vector<int>>ovec;
//        vector<int>ivec;
//        TreeNode *temp = root;
//        if(!temp)
//            return ovec;
//        q1.push(temp);
//        do
//        {
//            queue<TreeNode*>q2;;
//            while (!q1.empty())
//            {
//                temp = q1.front();
//                ivec.push_back(temp->val);
//                q1.pop();
//                if (temp->left)
//                    q2.push(temp->left);
//                if (temp->right)
//                    q2.push(temp->right);
//            }
//            ovec.push_back(ivec);
//            ivec.clear();
//            q1 = q2;
//        } while (!q1.empty());
//        return ovec;
//    }
//};
//
//
//int main(){
//    
//    TreeNode n1 = TreeNode(3);
//    TreeNode n2 = TreeNode(9);
//    TreeNode n3 = TreeNode(20);
//    TreeNode n4 = TreeNode(15);
//    TreeNode n5 = TreeNode(7);
//    
//    n1.left = &n2;
//    n1.right = &n3;
//    n3.left = &n4;
//    n3.right = &n5;
//    
//    Solution s;
//    s.levelOrder(&n1);
//
//    return 0;
//}