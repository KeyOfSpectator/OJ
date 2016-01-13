////
////  6_Move Zeroes.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/9/19.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    void moveZeroes(vector<int>& nums) {
////        for(int i=0 ; i<nums.size() ; i++){
////            if(nums[i] == 0){
////                for(int j=i+1 ; j<nums.size() ; j++){
////                    int tmp = nums[j];
////                    nums[j] = nums[j-1];
////                    nums[j-1] = tmp;
////                    
////                }
////            }
////        }
////        int end = nums.size()-1;
////        if(nums[end] == 0 ){
////            int tmp = nums[end];
////            nums[end] = nums[end-1];
////            nums[end-1] = tmp;
////        }
//        int loc = 0;
//        for(int i=0 ; i<nums.size() ; i++){
//            if(nums[i] != 0)
//                nums[loc++] = nums[i];
//        }
//        for(int i=loc ; i<nums.size() ; i++)
//            nums[i] = 0;
//    }
//};
//
//int main(){
//    
//    vector<int> input;
//    input.push_back(0);
//    input.push_back(0);
//    input.push_back(1);
////    input.push_back(3);
////    input.push_back(12);
//
//    Solution s;
//    s.moveZeroes(input);
//    
//    printf("done\n");
//    
//    return 0;
//}