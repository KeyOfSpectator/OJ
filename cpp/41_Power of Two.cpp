////
////  41_Power of Two.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/11.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//// n 为 1 0 和小于0时情况
//
//#include <stdio.h>
//
//class Solution {
//public:
//    bool isPowerOfTwo(int n) {
//        if(n==0) return false;
//        if(n==1) return true;
//        if(n<0) return false;
//        
//        while(n!=0){
//            if(n%2 == 1)
//                return false;
//            n/=2;
//            if(n==1 || n==-1)
//                return true;
//        }
//        return true;
//    
//    }
//};
//
//int main(){
//    
//    Solution s;
//    s.isPowerOfTwo(-16);
//
//    return 0;
//}