////
////  44_Linked List Cycle II.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/12.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//
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
//// 思路： 步长1和步长2同时在开头A点遍历
//// 相遇在B点时 ， 纪录步长1走过c步
//// 然后从开头A点开始步长1遍历
//// 每次从A点遍历一个点， B点遍历c个点
//// 若相遇在C点，C是cycle的头
//
//// 步长为1时，超时
//// 修改思路： 最开始从A点，步长增为2和3
//// 找到B点后，从B点遍历c个点，步长不变
//
//// 还不行
//// 继续增加步长为 3和4
//
//// 成功！
//class Solution {
//public:
//    ListNode *detectCycle(ListNode *head) {
//        if(head == NULL) return NULL;
//        if(head->next==NULL) return NULL;
//        bool isLoop = false;
//        ListNode* point1 = head;
//        ListNode* point2 = head->next;
//        int count_point1 = 0;
//        while(point1 != NULL && point2!= NULL){
//            if(point1==point2){
//                isLoop = true;
//                break;
//            }
//            count_point1+=2;
//            
//            if(point1->next != NULL)
//                if(point1->next->next != NULL)
//                    point1 = point1->next->next->next;
//                else
//                    break;
//            else
//                break;
//            
//            if(point2->next != NULL)
//                if(point2->next->next != NULL)
//                    if(point2->next->next->next != NULL)
//                        point2 = point2->next->next->next->next;
//                    else
//                        break;
//                else
//                    break;
//            else
//                break;
//        }
//        
//        // no loop return null
//        if(isLoop == false)
//            return NULL;
//        
//        ListNode* point3 = head;
//        while(point3!= NULL && point1!=NULL){
//            
//            for(int i=0 ; i<=count_point1 ; i++){
//                if(point1 == point3)
//                    return point1;
//                point1 = point1->next;
//            }
//            point3 = point3->next;
//        }
//        
//        return NULL;
//    }
//};
//
//
//int main(){
//    
////    ListNode* node1 = new ListNode(1);
////    ListNode* node2 = new ListNode(2);
//    ListNode node1 = ListNode(3);
//    ListNode node2 = ListNode(2);
//    ListNode node3 = ListNode(0);
//    ListNode node4 = ListNode(-4);
//    
//    node1.next = &node2;
//    node2.next = &node3;
//    node3.next = &node4;
//    node4.next = &node1;
//    
//    Solution s;
//    s.detectCycle(&node1);
//
//    return 0;
//}