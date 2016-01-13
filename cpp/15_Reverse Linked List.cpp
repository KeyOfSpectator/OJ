////
////  15_Reverse Linked List.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/9/21.
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
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(NULL) {}
//};
//
//class Solution_iteratively {
//public:
//    ListNode* reverseList(ListNode* head) {
//        
//        if(head == NULL)
//            return NULL;
//        
//        ListNode* tmp = NULL;
//        ListNode* tmp_head = NULL;
//        while(head->next != NULL){
//            
//            tmp_head = head->next;
//            
//            head->next = tmp;
//            
//            tmp = head;
//            
//            head = tmp_head;
//            
//        }
//        
//
//        //head->next = tmp_head;
//        head->next = tmp;
//        
//        return head;
//            
//    }
//};
//
//ListNode* tail;
//
//class Solution {
//public:
//    ListNode* reverseList(ListNode* head) {
//        if(head == NULL)
//            return NULL;
//        //ListNode* tail = NULL;
//        recursive(head);
//        return tail;
//    }
//    
//    ListNode* recursive(ListNode* head){
//        if(head->next != NULL){
//            ListNode* tail = recursive(head->next);
//            head->next = NULL;
//            tail->next = head;
//            return head;
//            
//        }
//        else{
//            tail = head;
//            return head;
//        }
//    }
//};
//
//int main(){
//    
//    ListNode node1 = ListNode(1);
//        ListNode node2 = ListNode(2);
////        ListNode node3 = ListNode(3);
////        ListNode node4 = ListNode(4);
////        ListNode node5 = ListNode(5);
////        ListNode node6 = ListNode(6);
//    
//    node1.next = &node2;
////    node2.next = &node3;
////    node3.next = &node4;
////    node4.next = &node5;
////    node5.next = &node6;
//    
//    Solution s;
//    s.reverseList(&node1);
//    
//    
//    return 0;
//}