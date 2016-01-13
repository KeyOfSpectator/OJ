////
////  1_Delete Node in a Linked List.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/9/16.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//
///**
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     ListNode *next;
// *     ListNode(int x) : val(x), next(NULL) {}
// * };
// */
//
//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode(int x) : val(x), next(NULL) {}
//};
//
//class Solution {
//public:
//    void deleteNode(ListNode* node) {
//        ListNode* nextNode = node->next;
//        //ListNode* tmpNode = node;
//        node->val = nextNode->val;
//        node->next = nextNode->next;
//        //delete tmpNode;
//        //cant delete node , exp: node1
//    }
//};
//
//
//int main(){
//    
//    ListNode* node1 = new ListNode(1);
//    ListNode* node2 = new ListNode(2);
//    ListNode* node3 = new ListNode(3);
//    ListNode* node4 = new ListNode(4);
//    
//    node1->next = node2;
//    node2->next = node3;
//    node3->next = node4;
//    
//    Solution s;
//    s.deleteNode(node3);
//    
//    printf("done\n");
//
//    return 0;
//}