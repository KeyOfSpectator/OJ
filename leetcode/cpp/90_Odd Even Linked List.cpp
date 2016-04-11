//
////
////  90_Odd Even Linked List.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 16/2/16.
////  Copyright © 2016年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//
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
//    ListNode* oddEvenList(ListNode* head) {
//        
//        if(head == NULL)
//            return NULL;
//        
//        ListNode* evenHead = NULL;
//        ListNode* evenTail = NULL;
//        ListNode* tmpHead = head;
//        ListNode * tmpTail = head;
//        ListNode * tmp = NULL;
//        bool flag = true;
//        
//        while(flag && tmpTail != NULL){
//            
//            tmpHead = tmpTail;
//            
//            if(tmpTail->next != NULL){
//                
//                tmp = tmpTail->next;
//                
//                // fix main list
//                if(tmpTail->next->next != NULL){
//                    tmpTail = tmpTail->next->next;
//                    tmpHead->next = tmpTail;
//                }
//                else{
//                    tmpTail->next = NULL;
//                    flag = false;
//                }
//                
//                // put tmp to the even list
//                if(evenHead == NULL){
//                    evenHead = tmp;
//                    evenTail = tmp;
//                }
//                else{
//                    evenTail->next = tmp;
//                    evenTail = evenTail->next;
//                }
//    
//            }
//            else{
//                break;
//            }
//            
//        }
//        
//        // put toghther main list and even list
//        if(evenTail!= NULL){
//            evenTail->next = NULL;
//            tmpTail->next = evenHead;
//        }
//        
//        return head;
//        
//        
//    }
//};
//
//int main(){
//
//    ListNode* n1 = new ListNode(1);
//    ListNode* n2 = new ListNode(2);
//    ListNode* n3 = new ListNode(3);
//    ListNode* n4 = new ListNode(4);
//    ListNode* n5 = new ListNode(5);
//    ListNode* n6 = new ListNode(6);
//    ListNode* n7 = new ListNode(7);
//    ListNode* n8 = new ListNode(8);
//    
//    n1->next = n2;
//    n2->next = n3;
//    n3->next = n4;
//    n4->next = n5;
//    n5->next = n6;
//    n6->next = n7;
//    n7->next = n8;
//    
//    Solution s;
//    s.oddEvenList(n1);
//    
//    return 0;
//}