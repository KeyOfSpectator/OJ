////
////  73_Scramble String.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/23.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//class Solution1 {
//public:
//    
//    bool isScramble(string s1, string s2) {
//        int len_s1 = s1.length();
//        int len_s2 = s2.length();
//        if(len_s1 != len_s2) return false;
//        
//        if(len_s1 == 1) return s1 == s2;
//        
//        string tmp1 = s1;
//        string tmp2 = s2;
//        sort(tmp1.begin() , tmp1.end());
//        sort(tmp2.begin() , tmp2.end());
//        if(tmp1 != tmp2)
//            return false;
//        
//        bool ret = false;
//        string s11 , s12 , s21 , s22;
//        for(int i=0 ; !ret && i<len_s1 ; i++){
//            s11 = s1.substr(0 , i);
//            s21 = s2.substr(0 , i);
//            s12 = s1.substr(i , len_s1 - 1);
//            s22 = s2.substr(i , len_s1 - 1);
//            ret = isScramble(s11, s21) && isScramble(s12, s22);
//            if(!ret){
//                s21 = s2.substr(len_s1 - i , i);
//                s22 = s2.substr(0 , len_s1 - i);
//                ret = isScramble(s11, s21) && isScramble(s12, s22);
//            }
//        }
//        
//        return ret;
//        
//    }
//};
//
//class Solution {
//public:
//    bool isScramble(string s1, string s2) {
//        
//    }
//};
//
//int main(){
//
//    string s1 = "aabb";
//    string s2 = "abab";
//    
//    Solution s;
//    bool ans = s.isScramble(s1, s2);
//    
//
//    return 0;
//}