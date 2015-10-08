////
////  2_Add Digits.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/9/16.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//
//
//class Solution {
//public:
//    int addDigits(int num) {
//        
//        while(num>9){
//            
//            int sum = 0;
//            while(num != 0){
//                int tmp = num%10;
//                sum+=tmp;
//                num/=10;
//            }
//            num = sum;
//        }
//        
//        return num;
//    }
//};
//
//int main(){
//    int test = 38;
//    Solution s;
//    int result = s.addDigits(test);
//    printf("%d\n" , result);
//    
//
//    return 0;
//}