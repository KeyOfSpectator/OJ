////
////  23_Swap Nodes in Pairs(not submit).cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/9/28.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
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
//ListNode* headNode;
//ListNode* head_tmp;
//
//ListNode* firstNode;
//ListNode* secondNode;
//
///*
// 1 2 3
// first 2-> head
// second 1->next = 2->next
// third 2->next = 1
// 
// */
//
//class Solution {
//public:
//    void swapTwo(ListNode* node1 , ListNode* node2){
//        node1->next = node2->next;
//        node2->next = node1;
//    }
//    
//    ListNode* swapPairs(ListNode* head) {
//        if(head == NULL)
//            return NULL;
//        if(head->next != NULL){
//            headNode = head->next;
//        }
//        else
//            return head;
//        firstNode = head;
//        secondNode = head->next;
//        swapTwo(firstNode , secondNode);
//        while(firstNode->next!=NULL && firstNode->next->next!=NULL){
//            head_tmp = firstNode;
//            secondNode = firstNode->next->next;
//            firstNode = firstNode->next;
//            head_tmp->next = secondNode;
//            swapTwo(firstNode, secondNode);
//        }
//        
//        return headNode;
//    }
//};
//
//int main(){
//    
//    ListNode node1 = ListNode(1);
////    ListNode node2 = ListNode(2);
////    ListNode node3 = ListNode(3);
////    ListNode node4 = ListNode(4);
////    ListNode node5 = ListNode(5);
////    ListNode node6 = ListNode(6);
//    
////    node1.next = &node2;
////    node2.next = &node3;
////    node3.next = &node4;
////    node4.next = &node5;
////    node5.next = &node6;
//    
//    Solution s;
//    s.swapPairs(&node1);
//    
//
//
//    return 0;
//}