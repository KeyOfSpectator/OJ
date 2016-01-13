////
////  58_Binary Search Tree Iterator.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/14.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//// 思路：
//// 用栈纪录从根到叶的一整条路径 ， 栈底为根， 栈顶为每次返回的最小数A
//// hashNext只要看现在栈还是不是空就好 空就为false ， 不空 true
//// next 返回值为栈顶元素 A
//// 然后 重新构造栈：
//// 首先找 A的右边 下一个比A大的数 A右边子树的最左下节点
//// 若A没有右子树 ， 在栈中找从根到A这条路径中 比A小或等于A的全部pop掉， 留下第一个比A大的点
//
//#include <stdio.h>
//#include <stack>
//#include <iostream>
//using namespace std;
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
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//stack<TreeNode*> stack_node;
//
//
//class BSTIterator {
//public:
//    BSTIterator(TreeNode *root) {
//        while(!stack_node.empty()) stack_node.pop();
//        TreeNode* tmp = root;
//        while(tmp!=NULL){
//            stack_node.push(tmp);
//            tmp = tmp->left;
//        }
//    }
//    
//    /** @return whether we have a next smallest number */
//    bool hasNext() {
//        if(!stack_node.empty()) return true;
//        else
//            return false;
//    }
//    
//    /** @return the next smallest number */
//    int next() {
//        
//        int ans = stack_node.top()->val;
//        TreeNode* top = stack_node.top();
//        
//        // 先找右边
//        if(top->right != NULL){
//            top = top->right;
//            while(top!=NULL){
//                stack_node.push(top);
//                top = top->left;
//            }
//            return ans;
//        }
//        // 往上找
//        while(stack_node.size()!=0){
//            top = stack_node.top();
//            if(top->val <= ans){
//                stack_node.pop();
//            }
//            else{
//                break;
//            }
//        }
//        
//        return ans;
//    }
//};
//
///**
// * Your BSTIterator will be called like this:
// * BSTIterator i = BSTIterator(root);
// * while (i.hasNext()) cout << i.next();
// */
//
//int main(){
//    
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
//    node2->left = node1;
//    node2->right = node4;
//    node4->left = node3;
//    node4->right = node5;
//    node8->left = node7;
//    node8->right = node9;
//    
//    BSTIterator i = BSTIterator(node6);
//    while (i.hasNext())
//    {
//        cout << i.next();
////        printf("%d\n" , i.next());
//    }
//    
//    
//
//    return 0;
//}