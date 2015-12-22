////
////  47_Search in Rotated Sorted Array II.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/12.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//struct Node{
//    int num;
//    int id;
//    Node(int i , int n):num(n),id(i){}
//};
//
//bool cmp(Node* A , Node* B){
//    return A->num < B->num;
//}
//
//class Solution {
//public:
//    
//    bool search(vector<int>& nums, int target) {
//        if(nums.size() == 0) return false;
//        vector<Node*> l;
//        for(int i=0 ; i<nums.size() ; i++){
//            l.push_back(new Node(i , nums[i]));
//        }
//        sort(l.begin() , l.end() , cmp);
//        
//        
//        // binary search
//        
//        int left = 0 , right = l.size()-1 , m=0;
//        while(left < right){
//            m = (left + right)/2;
//            if(l[m]->num < target){
//                left = m+1;
//            }
//            if(l[m]->num > target){
//                right = m-1;
//            }
//            if(l[m]->num == target){
//                break;
//            }
//        }
//        m = (left + right)/2;
//        if(l[m]->num == target)
//            return true;
//        else
//            return false;
//    }
//};
//
//int main(){
//
//    return 0;
//}