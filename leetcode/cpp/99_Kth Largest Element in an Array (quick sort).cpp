////
////  99_Kth Largest Element in an Array.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 16/2/26.
////  Copyright © 2016年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//bool cmp(int a , int b){
//    return a>b;
//}
//
//class Solution_import {
// 
//public:
//
//    int findKthLargest(vector<int>& nums, int k) {
//        sort(nums.begin() , nums.end() , cmp);
//        return nums[k-1];
//    }
//};
//
//class Solution {
//    // quick sort
//    // from big to small
//public:
//    int findKthLargest(vector<int>& nums, int k) {
//        int L=0,R=nums.size()-1;
//        while(L<R){
//            int left = L , right = R;
//            int key = nums[left];
//            while(left < right){
//                while(left < right && nums[right]<key) right--;
//                nums[left] = nums[right];
//                while(left < right && nums[left]>=key) left++;
//                nums[right] = nums[left];
//            }
//            nums[left] = key;
//            if(left == k-1)
//                return nums[k-1]; // finish
//            else if(left > k-1) R = left - 1;  // 不全排完
//            else L = left + 1;
//            
//        }
//        return nums[k-1];
//        
//    }
//};
//
//int main(){
//    
//    vector<int> input;
//    input.push_back(3);
//    input.push_back(2);
//    input.push_back(1);
//    input.push_back(5);
//    input.push_back(6);
//    input.push_back(4);
//    
//    Solution s;
//    int ans = s.findKthLargest(input, 2);
//
//
//    return 0;
//}