////
////  80_Longest Palindromic Substring.cpp
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
//class Solution_1 {
//public:
//    int tmp_len;
//    string tmp_str;
//    void testPalindrome(string s , int left , int right){
//        tmp_len = 0;
//        while(left >=0 && right < s.length()){
//            if(s[left] == s[right]){
//                left--;
//                right++;
//            }
//            else
//                break;
//        }
//        tmp_len = right-left-1;
//        tmp_str = s.substr(left+1 , right-left-1);
//    }
//    string longestPalindrome(string s) {
//        int len = s.length();
//        if(len <= 1) return s;
//
//        int max = 0;
//        string ans;
//        string tmp_ans;
//        for(int i=0 ; i<2*len ; i++){
//            int min_len;
//            int left = i/2;
//            int right = i/2;
//            if(i%2 != 0){
//                right++;
//            }
//            testPalindrome(s , left , right);
//            if(max <= tmp_len){
//                max = tmp_len;
//                ans = tmp_str;
//            }
//        }
//        return ans;
//    }
//};
//
//
//bool dp[1001][1001];
//
//class Solution {
//public:
//    string longestPalindrome(string s) {
//        int len = s.length();
//        if(len <= 1) return s;
//        memset(dp , 0 , sizeof(dp));
//        int max = -1;
//        int longestBegin = -1;
//        for(int i=0 ; i<len ; i++){
//            dp[i][i] = true;
//            if(i<len-1 && s[i] == s[i+1]){
//                dp[i][i+1] = true;
//                if(max < 2){
//                    max = 2;
//                    longestBegin = i;
//                }
//            }
//        }
//        
//        for(int substr_len = 3 ; substr_len <= len ; substr_len++ ){
//            for(int i=0 ; i<len-1 ; i++){
//                int start = i;
//                int end = i+substr_len-1;
//                if(end >= len) break;
//                if(dp[start+1][end-1] && s[start]==s[end]){
//                    dp[start][end] = true;
//                    if(max < substr_len){
//                        max = substr_len;
//                        longestBegin = start;
//                    }
//                }
//                
//            }
//        }
//        
//        return s.substr(longestBegin , max);
//    }
//};
//
//int main(){
//    
//    string input = "aba";
//    Solution s;
//    string ans = s.longestPalindrome(input);
//
//    return 0;
//}