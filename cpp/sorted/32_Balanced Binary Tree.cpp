////
////  32_Balanced Binary Tree.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/8.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//
//
//struct TreeNode
//{
//        int val;
//        TreeNode *left;
//        TreeNode *right;
//        TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//bool flag;
//
//class Solution {
//public:
//    int abs(int x)
//    {
//        return x>0?x:-x;
//    }
//    
//    int max(int x , int y)
//    {
//        return x<y?y:x;
//    }
//    
//    int childNum(TreeNode* root)
//    {
//        if(flag == false) return 0;
//        if(root->left == NULL && root->right == NULL) return 1;
//        int l=0 , r=0;
//        if(root->left!=NULL)
//            l = childNum(root->left);
//        if(root->right!=NULL)
//            r = childNum(root->right);
//        if(abs(l-r) > 1)
//            flag = false;
//        return max(r,l)+1;
//    }
//    
//    bool isBalanced(TreeNode* root)
//    {
//        flag = true;
//        if(root == NULL) return true;
//        
//        childNum(root);
//        
//        return flag;
//        
//    }
//};
//
//
//int main(){
//    TreeNode node1 = TreeNode(1);
//    TreeNode node2 = TreeNode(2);
//    TreeNode node3 = TreeNode(3);
//    TreeNode node4 = TreeNode(4);
//    TreeNode node5 = TreeNode(5);
//    TreeNode node6 = TreeNode(6);
//    
//    node1.left = &node2;
//    node1.right = &node3;
//    node2.left = &node4;
//    node2.right = &node5;
//    node3.left = &node6;
//    
//    Solution s;
//    bool ans = s.isBalanced(&node1);
//
//    return 0;
//}