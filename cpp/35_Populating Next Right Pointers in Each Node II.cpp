////
////  35_Populating Next Right Pointers in Each Node II.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/9.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <queue>
//using namespace std;
//
///**
// * Definition for binary tree with next pointer.
// * struct TreeLinkNode {
// *  int val;
// *  TreeLinkNode *left, *right, *next;
// *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
// * };
// */
//
//struct TreeLinkNode {
//    int val;
//    TreeLinkNode *left, *right, *next;
//    TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
//};
//
//queue<TreeLinkNode*> q;
//
//class Solution {
//public:
//    void restNode(TreeLinkNode* head , TreeLinkNode* tail){
//        // same level other members
//        while(!q.empty()){
//            TreeLinkNode* nodespapa = q.front();
//            q.pop();
//            if(nodespapa->left != NULL){
//                tail->next = nodespapa->left;
//                tail = tail->next;
//            }
//            if(nodespapa->right != NULL){
//                tail->next = nodespapa->right;
//                tail = tail->next;
//            }
//        }
//        // push to queue
//        while(head!=NULL){
//            q.push(head);
//            head = head->next;
//        }
//    }
//    
//    void connect(TreeLinkNode *root) {
//        if(root==NULL) return;
//        while(!q.empty()) q.pop();
//        q.push(root);
//        TreeLinkNode* head = NULL;
//        TreeLinkNode* tail = NULL;
//        // same level head and tail
//        while(!q.empty()){
//            TreeLinkNode* headspapa = q.front();
//            q.pop();
//            if(headspapa->left != NULL)
//            {
//                head = headspapa->left;
//                tail = headspapa->left;
//                if(headspapa->right != NULL)
//                {
//                    head->next = headspapa->right;
//                    tail = headspapa->right;
//                }
//                restNode(head , tail);
//            }
//            else if(headspapa->right != NULL){
//                head = headspapa->right;
//                tail = headspapa->right;
//                restNode(head , tail);
//            }
//        }
//        
//    }
//};
//
//int main(){
//    
//    TreeLinkNode node1 = TreeLinkNode(1);
//    TreeLinkNode node2 = TreeLinkNode(2);
//    TreeLinkNode node3 = TreeLinkNode(3);
//    TreeLinkNode node4 = TreeLinkNode(4);
//    TreeLinkNode node5 = TreeLinkNode(5);
//    TreeLinkNode node7 = TreeLinkNode(7);
//    
//    node1.left = &node2;
//    node1.right = &node3;
//    node2.left = &node4;
//    node2.right = &node5;
//    node3.right = &node7;
//    
//    Solution s;
//    s.connect(&node1);
//    
//
//    return 0;
//}