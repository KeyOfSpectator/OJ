////
////  66_Distinct Subsequences.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/21.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <String>
//#include <vector>
//using namespace std;
//
//#define MAX_LEN 1000
//
//// dp[i][j] 代表s第i位 t第j位 之前的所有位的 变换方法
////int dp[MAX_LEN][MAX_LEN];
//
//
//class Solution_correct {
//public:
//    int numDistinct(string S, string T) {
//        int m = S.size();
//        int n = T.size();
//        
//        vector<vector<int> > path(m+1, vector<int>(n+1, 0));
//        for(int i = 0; i < m+1; i ++)
//            path[i][0] = 1;
//        
//        for(int i = 1; i < m+1; i ++)
//        {
//            for(int j = 1; j < n+1; j ++)
//            {
//                if(S[i-1] == T[j-1])
//                    path[i][j] = path[i-1][j-1] + path[i-1][j];
//                else
//                    path[i][j] = path[i-1][j];
//            }
//        }
//        
//        return path[m][n];
//    }
//};
//
//class Solution {
//public:
//    int numDistinct(string s, string t) {
//        int s_len = s.length();
//        int t_len = t.length();
//        
//        vector<vector<int>> dp(s_len+1 , vector<int>(t_len+1 , 0));
//        
//        if(s_len == 0 || t_len == 0 || s_len<t_len){
//            return 0;
//        }
//        
//        dp[0][0] = 1;
//        for(int i=0 ; i<s_len ; i++){
//            dp[i][0] = 1;
//        }
//        
//        for(int i=1 ; i<=s_len ; i++){
//            for(int j=1 ; j<=t_len ; j++){
//                if(s[i-1] == t[j-1]){
//                    // 当前字母匹配时 s串跳过或者 不跳过 所以变换方法等于保留这个字母的变换方法加上不用这个字母的变换方法。
//                    dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
//                }
//                else{
//                    // 当前字母不匹配 s抛弃当前这个字符
//                    dp[i][j] = dp[i-1][j];
//                }
//            }
//        }
//        return dp[s_len][t_len];
//    }
//};
//
//int main(){
//    string s1 = "rabbbit";
//    string t1 = "rabit";
//    
//    Solution s;
//    int ans = s.numDistinct(s1, t1);
//
//    return 0;
//}