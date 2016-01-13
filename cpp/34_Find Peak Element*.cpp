////
////  34_Find Peak Element.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/9.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//
//// 三分法
//class Solution_1 {
//public:
//    int max(vector<int>& nums , int a , int b , int c){
//        if(nums[a]<nums[b])
//            return nums[b]<nums[c]?c:b;
//        else
//            return nums[a]<nums[c]?c:a;
//    }
//    
//    int findPeakElement(vector<int>& nums) {
//        int l=0 ,r = nums.size()-1;
//        int m =0 , mm = 0;
//        
//        while(l<r)
//        {
//            m = (l+r)/2;
//            mm = (m+r)/2;
//            if(nums[m] < nums[mm]){
//                l = m;
//            }
//            else if(nums[m] >= nums[mm]){
//                if(r - m == 1)
//                    return max(nums , l , m , r);
//                else
//                    r = mm;
//            }
//        }
//        
//        return m;
//        
//    }
//};
//
//// 梯度下降
//class Solution {
//public:
//    int findPeakElement(vector<int>& nums) {
//        if(nums.size() == 1) return 0;
//        int low = -2147483648;
//        int lowIndex = -1;
//        for(int i=0 ; i<nums.size() ; i++){
//            if(nums[i]<low){
//                return lowIndex;
//            }
//            else if(nums[i]>low){
//                low = nums[i];
//                lowIndex = i;
//            }
//        }
//        return lowIndex;
//    }
//};
//
//int main(){
//
//    vector<int> input;
////    input.push_back(3);
////    input.push_back(4);
////    input.push_back(3);
////    input.push_back(2);
//    input.push_back(1);
////    input.push_back(1);
//    
//    Solution s;
//    int ans = s.findPeakElement(input);
//    
//    return 0;
//}