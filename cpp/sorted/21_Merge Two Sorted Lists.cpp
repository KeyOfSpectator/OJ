////
////  21_Merge Two Sorted Lists.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/9/23.
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
//
//class Solution {
//public:
//    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//        ListNode* l1_root = l1;
//        ListNode* l2_root = l2;
//        ListNode* root = NULL;
//        ListNode* tail = NULL;
//        
//        if(l1 == NULL && l2 == NULL) return NULL;
//        else if(l1 == NULL) return l2;
//        else if(l2 == NULL) return l1;
//        
//        while(l1_root != NULL || l2_root != NULL){
//            if(l1_root != NULL && l2_root != NULL){
//                if(l1_root->val < l2_root->val){
//                    if(tail == NULL){
//                        tail = l1_root;
//                        root = tail;
//                    }
//                    else{
//                        tail->next = l1_root;
//                        tail = tail->next;
//                    }
//                    l1_root = l1_root->next;
//                }
//                else{
//                    if(tail == NULL){
//                        tail = l2_root;
//                        root = tail;
//                    }
//                    else{
//                        tail->next = l2_root;
//                        tail = tail->next;
//                    }
//                    l2_root = l2_root->next;
//                }
//            }
//            else if(l1_root != NULL){
//                tail->next = l1_root;
//                break;
//            }
//            else if(l2_root != NULL){
//                tail->next = l2_root;
//                break;
//            }
//        }
//        return root;
//    }
//};
//
//int main(){
//    ListNode node1 = ListNode(1);
//    ListNode node2 = ListNode(2);
//    ListNode node3 = ListNode(3);
//    ListNode node4 = ListNode(4);
//    ListNode node5 = ListNode(5);
//    
//    node1.next = &node2;
//    node3.next = &node4;
//    node4.next = &node5;
//    
//    Solution s;
//    s.mergeTwoLists(&node1, &node3);
//
//    return 0;
//}