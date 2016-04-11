////
////  8_Product of Array Except Self.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/9/20.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//vector<int> up_down;
//vector<int> down_up;
//
//class Solution {
//public:
//    vector<int> productExceptSelf(vector<int>& nums) {
//        up_down.clear();
//        down_up.clear();
//        
//        up_down.push_back(1);
//        down_up.push_back(1);
//        
//        int len = nums.size();
//        for(int i=0 ; i<nums.size()-1; i++){
//            if(i==0){
//                up_down.push_back(nums[0]);
//                down_up.push_back(nums[len-1]);
//            }
//            else{
//                up_down.push_back(up_down[i] * nums[i]);
//                down_up.push_back(down_up[i] * nums[len - i - 1]);
//            }
//        }
//        
//        vector<int> res;
//        for(int i=0 ; i<len ; i++){
//            res.push_back( up_down[i] * down_up[len - i - 1] );
//        }
//        
//        return res;
//    }
//};
//
//int main(){
//
//    vector<int> input;
//    input.push_back(1);
//    input.push_back(2);
//    input.push_back(3);
//    input.push_back(4);
//    
//    Solution s;
//    s.productExceptSelf(input);
//
//    return 0;
//}