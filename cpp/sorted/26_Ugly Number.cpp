////
////  26_Ugly Number(NS).cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/9/28.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//
//class Solution {
//public:
//    bool isUgly(int num) {
//        if(num == 0) return false;
//        if(num == 1) return true;
//        while(num%2 == 0){
//            num /= 2;
//        }
//        while(num%3 == 0){
//            num /= 3;
//        }
//        while(num%5 == 0){
//            num /= 5;
//        }
//        if(num==1)
//            return true;
//        else
//            return false;
//    }
//};
//
//int main(){
//    
//    Solution s;
//    bool ans = s.isUgly(14);
//
//    return 0;
//}