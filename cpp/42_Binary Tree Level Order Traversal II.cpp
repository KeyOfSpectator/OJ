////
////  42_Binary Tree Level Order Traversal II.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/11.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
///*
// 参考 http://www.cnblogs.com/ganganloveu/p/3843470.html
// 遇到问题：
// ans 加入 line 后 ， 再修改line的值后， ans 不变，和java对象指针不同 ！ 注意！！！
// 
// 两种方法： 
// 1.递归（层次遍历树）
// 2.压入队列
// 
// */
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
//vector<int> line;
//vector<vector<int>> ans;
//queue<TreeNode*> q;
//TreeNode* nodeList[100];
//int loc;
//
//class Solution_runtime_error {
//public:
//    vector<vector<int>> levelOrderBottom(TreeNode* root) {
//        while(q.empty() == false) q.pop();
//        ans.clear();
//        if(root == NULL) return ans;
//        line.clear();
//        loc = 0;
//        q.push(root);
//        line.push_back(root->val);
//        ans.push_back(line);
//        
//        while(!q.empty()){
//            line.clear();
//            loc = 0;
//            while(!q.empty()){
//                TreeNode* tmp = q.front();
//                q.pop();
//                if(tmp->left != NULL){
//                    line.push_back(tmp->left->val);
//                    nodeList[loc++] = tmp->left;
//                }
//                if(tmp->right != NULL){
//                    line.push_back(tmp->right->val);
//                    nodeList[loc++] = tmp->right;
//                }
//            }
//            ans.insert(ans.begin() , line);
//            for(int i=0 ; i<loc ; i++){
//                q.push(nodeList[i]);
//            }
//        }
//        return ans;
//    }
//};
//
//struct LevelNode{
//    TreeNode* node;
//    int level;
//    LevelNode(TreeNode* nodePoint , int l):node(nodePoint),level(l){}
//};
//
//queue<LevelNode*> q_level;
//
//// by myself level visit
//class Solution_correct_level {
//public:
//    vector<vector<int>> levelOrderBottom(TreeNode* root) {
//        while(!q_level.empty()) q_level.pop();
//        ans.clear();
//        if(root == NULL) return ans;
//        line.clear();
//        LevelNode* levelNodeRoot = new LevelNode(root , 1);
//        // 先把值放入line后 把line加入ans
//        int levelCount = 1;
//        
//        q_level.push(levelNodeRoot);
//        
//        while(!q_level.empty()){
//            LevelNode* tmpLN = q_level.front();
//            q_level.pop();
//            if(tmpLN->level > levelCount){
//                ans.insert(ans.begin() , line);
//                line.clear();
//                levelCount++;
//            }
//            line.push_back(tmpLN->node->val);
//            
//            if(tmpLN->node->left != NULL){
//                LevelNode* newLeftLF = new LevelNode(tmpLN->node->left , tmpLN->level+1);
//                q_level.push(newLeftLF);
//            }
//            if(tmpLN->node->right != NULL){
//                LevelNode* newRightLF = new LevelNode(tmpLN->node->right , tmpLN->level+1);
//                q_level.push(newRightLF);
//            }
//            
//        }
//        ans.insert(ans.begin() , line);
//        return ans;
//        
//    }
//};
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
//struct Node
//{
//    TreeNode* tNode;
//    int level;
//    Node(TreeNode* newtNode, int newlevel): tNode(newtNode), level(newlevel) {}
//};
//
//class Solution_correct_refenrence {
//public:
//    vector<vector<int> > levelOrderBottom(TreeNode *root) {
//        vector<vector<int> > ret;
//        if(!root)
//            return ret;
//        // push root
//        Node* rootNode = new Node(root, 0);
//        queue<Node*> Nqueue;
//        Nqueue.push(rootNode);
//        
//        vector<int> cur;
//        int curlevel = 0;
//        while(!Nqueue.empty())
//        {
//            Node* frontNode = Nqueue.front();
//            Nqueue.pop();
//            
//            if(frontNode->level > curlevel)
//            {
//                ret.push_back(cur);
//                cur.clear();
//                curlevel = frontNode->level;
//            }
//            
//            cur.push_back(frontNode->tNode->val);
//            
//            if(frontNode->tNode->left)
//            {
//                Node* leftNode = new Node(frontNode->tNode->left, frontNode->level+1);
//                Nqueue.push(leftNode);
//            }
//            if(frontNode->tNode->right)
//            {
//                Node* rightNode = new Node(frontNode->tNode->right, frontNode->level+1);
//                Nqueue.push(rightNode);
//            }
//        }
//        ret.push_back(cur);
//        
//        reverse(ret.begin(), ret.end());
//        return ret;
//    }
//};
//
//// by myself recursion
//class Solution {
//public:
//    
//    void recursion(TreeNode* node , int level){
//        if(level > ans.size()){
//            ans.insert(ans.begin() , line);
//        }
//        
//        ans[ans.size() - level].push_back(node->val);
//        if(node->left != NULL){
//            recursion(node->left , level+1);
//        }
//        if(node->right != NULL){
//            recursion(node->right , level+1);
//        }
//        
//    }
//    
//    vector<vector<int>> levelOrderBottom(TreeNode* root) {
//        ans.clear();
//        line.clear();
//        if(root == NULL) return ans;
//        
//        recursion(root , 1);
//        
//        return ans;
//    }
//};
//
//int main(){
//    //
//    TreeNode node4 = TreeNode(4); // real val
//    TreeNode* node1 = new TreeNode(1); // address
//    TreeNode* node2 = new TreeNode(2);
//    TreeNode* node3 = new TreeNode(3);
//    
//    node1->left = node2;
//    node1->right = node3;
//    
//    Solution s;
//    s.levelOrderBottom(node1);
//    
//    return 0;
//}