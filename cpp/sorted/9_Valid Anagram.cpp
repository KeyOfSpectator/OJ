////
////  9_Valid Anagram.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/9/20.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string.h>
//#include <string>
//using namespace std;
//
//int hash_list[1000];
//
//class Solution {
//public:
//    bool isAnagram(string s, string t) {
//        memset(hash_list , 0 , sizeof(hash_list));
//        
//        int s_len = s.length();
//        for(int i=0 ; i<s_len ; i++){
//            char tmp = s[i];
//            hash_list[tmp-'0']++;
//        }
//        
//        int t_len = t.length();
//        if(t_len != s_len)
//            return false;
//        for(int i=0 ; i<t_len ; i++){
//            char tmp = t[i];
//            if(hash_list[tmp - '0']>0){
//                hash_list[tmp - '0'] --;
//            }
//            else
//                return false;
//        }
//        return true;
//    }
//};
//
//int main(){
//    
//    string s = "rat";
//    string t = "cat";
//    
//    Solution so;
//    bool res = so.isAnagram(s, t);
//    printf("%d\n" , res);
//    
//    return 0;
//}