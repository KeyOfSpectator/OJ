//
////
////  64_Length of Last Word.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/20.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string.h>
//#include <String>
//#include <iostream>
//using namespace std;
//
//class Solution {
//public:
//    int lengthOfLastWord(string s) {
//        int l = s.length();
//        if(l == 0) return 0;
//        while(s[l-1] == ' ') l--;
//        int ans = 0;
//        for(int i = l-1 ; i>=0 ; i--){
//            if(s[i] == ' ') break;
//            else
//                ans ++;
//        }
//        return ans;
//    }
//};
//
//int main(){
//
//    char input_char[100];
//    scanf("%s" , input_char);
//    string input_str = string(input_char);
//    
//    Solution s;
//    s.lengthOfLastWord(input_str);
//    
//    return 0;
//    
//}