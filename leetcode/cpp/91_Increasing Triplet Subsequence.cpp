////
////  91_Increasing Triplet Subsequence.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 16/2/16.
////  Copyright © 2016年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    bool increasingTriplet(vector<int>& nums) {
//        bool vflag = false;
//        int first_min = 99999;
//        int second_min = 99999;
//        for(int i=1 ; i<nums.size() ; i++){
//            if(vflag && nums[i] > second_min){
//                return true;
//            }
//            if(nums[i] > nums[i-1]){
//                
//                if(!vflag){
//                    first_min = nums[i-1];
//                    second_min = nums[i];
//                    vflag = true;
//                }
//                else{
//                    if(nums[i-1] < first_min)
//                        first_min = nums[i-1];
//                    if(nums[i] < second_min)
//                        second_min = nums[i];
//                }
//                
//            }
//        }
//        return false;
//    }
//};
//
//
//int main(){
//    
//    vector<int> input;
//    input.push_back(1);
//    input.push_back(2);
//    input.push_back(3);
//    input.push_back(4);
//    input.push_back(5);
//    
//    
//    Solution s;
//    bool ret = s.increasingTriplet(input);
//
//    return 0;
//}