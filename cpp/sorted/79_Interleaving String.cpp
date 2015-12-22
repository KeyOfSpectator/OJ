////
////  79_Interleaving String.cpp
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
//
//class Solution_wrong {
//public:
//    bool isInterleave(string s1, string s2, string s3) {
//        int len1 = s1.length();
//        int len2 = s2.length();
//        int len3 = s3.length();
//        
//        if(len1 + len2 != len3) return false;
//        
//        int p1 = 0 , p2 = 0 , p3 = 0;
//        
//        while(p3 < len3){
//            if(p1 < len1 && s1[p1] == s3[p3]){
//                p1++;
//                p3++;
//            }
//            else if(p2 < len2 && s2[p2] == s3[p3]){
//                p2++;
//                p3++;
//            }
//            else{
//                return false;
//            }
//        }
//        return true;
//    }
//};
//
//bool dp[100][100][200];
//int len1;
//int len2;
//int len3;
//string S1;
//string S2;
//string S3;
//
//class Solution {
//public:
//    void dfs(int p1 , int p2 , int p3){
//        if(p3 > len3) return;
//        dp[p1][p2][p3] = true;
//        if(p1 < len1 && S1[p1] == S3[p3]){
//            if(!dp[p1+1][p2][p3+1])
//                dfs(p1+1 , p2 , p3+1);
//        }
//        if(p2 < len2 && S2[p2] == S3[p3]){
//            if(!dp[p1][p2+1][p3+1])
//                dfs(p1 , p2+1 , p3+1);
//        }
//    }
//    
//    bool isInterleave(string s1, string s2, string s3) {
//        len1 = s1.length();
//        len2 = s2.length();
//        len3 = s3.length();
//        S1 = s1;
//        S2 = s2;
//        S3 = s3;
//        
//        if(len1 + len2 != len3) return false;
//        if(len3 == 0) return true;
//        
//        memset(dp , 0 , sizeof(dp));
//        
//        dfs(0 , 0 , 0);
//        
//        return dp[len1][len2][len3];
//    }
//};
//
//int main(){
//
//    string input1 = "";
//    string input2 = "";
//    string input3 = "";
//    
//    Solution s;
//    bool ans = s.isInterleave(input1, input2, input3);
//    
//    return 0;
//}