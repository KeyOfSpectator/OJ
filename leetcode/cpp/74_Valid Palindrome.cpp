////
////  74_Valid Palindrome.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/30.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string>
//using namespace std;
//
//class Solution {
//public:
//    int convertChar(char x){
//        if((x >= 'a' && x <= 'z') || (x>= '0' && x<= '9'))
//            return x-0;
//        if(x >= 'A' && x<= 'Z'){
//            return (x-'A'+'a');
//        }
//        else
//            return 0;
//    }
//    
//    bool isPalindrome(string s) {
//        int len = s.length();
//        if(len == 0) return true;
//        int j=len-1;
//        int i=0;
//        bool ans = true;
//        while(j>i && ans){
//            char tmp1 = s[i];
//            int num1 = convertChar(tmp1);
//            if(num1 == 0){
//                i++;
//                continue;
//            }
//            char tmp2 = s[j];
//            int num2 = convertChar(tmp2);
//            if(num2 == 0){
//                j--;
//                continue;
//            }
//            if(num1 == num2){
//                i++;
//                j--;
//            }
//            else{
//                return false;
//            }
//        }
//        return ans;
//    }
//};
//
//int main(){
//    
//    string input = "0k.;r0.k;";
//    
//    Solution s;
//    bool ans  = s.isPalindrome(input);
//
//    return 0;
//}