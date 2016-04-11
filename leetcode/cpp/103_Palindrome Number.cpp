////
////  103_Palindrome Number.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 16/3/4.
////  Copyright © 2016年 KeyOfSpectator. All rights reserved.
////
//
//// fuck
//
//#include <stdio.h>
//
//class Solution {
//public:
//    
//    int pow(int i){
//        int ret = 1;
//        while(i>0){
//            ret *= 10;
//            i--;
//        }
//        return ret;
//    }
//    
//    int getTop(int x){
//        while(x>=10){
//            x/=10;
//        }
//        return x;
//    }
//    
//    int deleteTop(int x){
//        int i = 0;
//        int tmp = x;
//        while(x>=10){
//            x/=10;
//            i++;
//        }
//        tmp /= pow(i-1);
//        return tmp;
//    }
//    
//    int getLen(int x){
//        int l = 0;
//        while(x>0){
//            x/= 10;
//            l++;
//        }
//        return l;
//    }
//    
//    int getN(int x , int i){
//        x /= pow(i);
//        return x%10;
//    }
//    
//    bool isPalindrome(int x) {
//        
//        // fuck
//        if(x<0)
//            return false;
//        if(x>0&&x<10)
//            return true;
//        
////        x>0 ? x=x : x = -x;
//        
//        int len = getLen(x);
//        
//        for(int i=0 ; i<(len/2) ; i++){
//            int a = getN(x , i);
//            int b = getN(x , len-i-1);
//            if(a != b)
//                return false;
//        }
//        
//        return true;
//        
//    }
//};
//
//int main(){
//    
//    int input = -101;
//    
//    Solution s;
//    bool ans = s.isPalindrome(input);
//
//    return 0;
//}