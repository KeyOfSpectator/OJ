///*
// * 141_Linked List Cycle.cpp
// *
// *  Created on: 2015Äê4ÔÂ28ÈÕ
// *      Author: fsc
// */
//
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//
////Definition for singly-linked list.
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) :
//		val(x), next(NULL) {
//	}
//};
//
//class Solution {
//public:
//	bool hasCycle(ListNode *head) {
//		if(head==NULL||head->next==NULL||head->next->next==NULL){
//			return false;
//		}
//
//		ListNode *root1 = head;
//		ListNode *root2 = head;
//
//		while(root1->next!=NULL && root2->next!=NULL ){
////			root1->next->next->next!=NULL && root2->next->next!=NULL
//			if(root1->next->next->next!=NULL)
//				root1 = root1->next->next->next;
//			else
//				return false;
//			if(root2->next->next!=NULL)
//				root2 = root2->next->next;
//			else
//				return false;
//			if(root1->val == root2->val){
//				return true;
//			}
//		}
//		return false;
//
//	}
//};
//
//int main() {
//	ListNode root(1);
//	ListNode node1(2);
//	ListNode node2(3);
//	ListNode node3(4);
//
//	root.next = &node1;
////	node1.next = &node2;
////	node2.next = &node3;
////	node3.next = &root;
//
//	Solution solution;
//	bool result;
//	result = solution.hasCycle(&root);
//	printf("%d\n",result);
//
//	return 0;
//}
//
