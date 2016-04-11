////
////  7_Single Number III.cpp
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
//class Solution {
//public:
//    vector<int> singleNumber(vector<int>& nums) {
//        int AxorB = 0;
//        for(int i=0 ; i<nums.size() ;i++){
//            AxorB ^= nums[i];
//        }
//        int lowbit = AxorB & (-AxorB);
//        int A = 0 , B = 0;
//        for(int i=0 ; i<nums.size() ; i++){
//            if( (lowbit & nums[i]) == 0 )
//                A ^= nums[i];
//            else
//                B ^= nums[i];
//        }
//        vector<int> res;
//        res.push_back(A);
//        res.push_back(B);
//        return res;
//    }
//};
//
//int main(){
//    
//    vector<int> input;
//    input.push_back(1);
//    input.push_back(2);
//    input.push_back(1);
//    input.push_back(3);
//    input.push_back(2);
//    input.push_back(5);
//    
//    Solution s;
//    s.singleNumber(input);
//    
//    printf("done\n");
//    
//    return 0;
//}