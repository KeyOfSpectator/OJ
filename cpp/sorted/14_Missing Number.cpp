////
////  14_Missing Number.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/9/21.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//
//class Solution {
//public:
//    int missingNumber(vector<int>& nums) {
//        int max = -1;
//        int total_original = 0;
//        int total = 0;
//        bool flag_zero = false;
//        for(int i=0 ; i< nums.size() ; i++){
//            if(nums[i] == 0)
//                flag_zero = true;
//            if(nums[i] > max)
//                max = nums[i];
//            total_original += nums[i];
//        }
//        for(int i=0 ; i<=max ; i++){
//            total += i;
//        }
//        if(flag_zero == false)
//            return 0;
//        else if(total_original == total)
//            return max+1;
//        return total - total_original;
//    }
//};
//
//int main(){
//    
//    vector<int> input;
//    input.push_back(0);
//    input.push_back(1);
//    
//    Solution s;
//    int ans = s.missingNumber(input);
//    printf("done\n");
//
//    return 0;
//}