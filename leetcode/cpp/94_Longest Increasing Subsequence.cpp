////
////  94_Longest Increasing Subsequence.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 16/2/20.
////  Copyright © 2016年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    int lengthOfLIS(vector<int>& nums) {
//        if(nums.size() == 0)
//            return 0;
//        vector<int> dp = vector<int>(nums.size() , 0);
//        int max = 0;
//        for(int i=0 ; i<nums.size(); i++){
//            for(int j=0 ; j<i ; j++){
//                if(nums[i]>nums[j]){
//                    int tmp = dp[j]+1;
//                    dp[i] = tmp>dp[i]?tmp:dp[i];
//                    if(dp[i]>max) max = dp[i];
//                }
//            }
//        }
//        return max+1;
//    }
//};
//
//int main(){
//    
//    vector<int> input;
//    input.push_back(10);
//    input.push_back(9);
//    input.push_back(2);
//    input.push_back(5);
//    input.push_back(3);
//    input.push_back(7);
//    input.push_back(101);
//    input.push_back(18);
//    
//    Solution s;
//    int ans = s.lengthOfLIS(input);
//    
//    return 0;
//}