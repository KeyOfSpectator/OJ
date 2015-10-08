////
////  25_Find Minimum in Rotated Sorted Array II(NS).cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/9/28.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//class Solution1 {
//public:
//    int findMin(vector<int>& nums) {
//        for(int i=nums.size()-1 ; i>=0 ; i--){
//            if(i==0) return nums[i];
//            else if(nums[i-1] > nums[i] ){
//                return nums[i];
//            }
//        }
//        return nums[0];
//    }
//};
//
//// 用二分就是有病！
//class Solution_wrong {
//public:
//    int findMin(vector<int>& nums) {
//        if(nums.size() == 0) return NULL;
//        if(nums.size() == 1) return nums[0];
//        
//        int l = 0 , r = nums.size()-1 , m = 0;
////        do{
////            m = (r+l)/2;
////            if(nums[m] >= nums[r]){
////                l = m+1;
////            }
////            else if(nums[m] <= nums[l] ){
////                r = m-1;
////            }
////            
////        }while(nums[l] > nums[r] || l!=r);
//        m = (r+l)/2;
//        while(nums[l] > nums[r] || nums[m]<nums[l]){
//            m = (r+l)/2;
//            if(nums[m]>nums[r]){
//                l = m+1;
//            }
//            if(nums[m]<nums[l]){
//                l++;
//            }
//        }
//        
//        return nums[l];
//    }
//};
//
//int main(){
//    
//    vector<int> input;
//    
//    input.push_back(3);
//    input.push_back(1);
//    input.push_back(3);
//    
////    input.push_back(4);
////    input.push_back(5);
////    input.push_back(6);
////    input.push_back(7);
////    input.push_back(8);
////    
////    input.push_back(1);
////    input.push_back(2);
////    input.push_back(3);
////    input.push_back(1);
////    input.push_back(2);
////    input.push_back(3);
//    
//    
//    Solution s;
//    int ans = s.findMin(input);
//
//    return 0;
//}