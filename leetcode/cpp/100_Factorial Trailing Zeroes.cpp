////
////  100_Factorial Trailing Zeroes.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 16/2/26.
////  Copyright © 2016年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//
//class Solution {
//public:
//    int trailingZeroes(int n) {
//        int five_cnt = n/5;
//        int ans = five_cnt;
//        while(five_cnt >= 5){
//            five_cnt = five_cnt/5;
//            ans += five_cnt;
//        }
//        return ans;
//    }
//};
//
//int main(){
//    
//    int input = 26;
//    Solution s;
//    int ans = s.trailingZeroes(input);
//
//    return 0;
//}