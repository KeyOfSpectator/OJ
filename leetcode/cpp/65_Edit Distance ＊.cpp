////
////  65_Edit Distance.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/20.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//// 动态规划！
//
//#include <stdio.h>
//#include <string>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    int min(int a , int b , int c){
//        return a<b ? (a<c?a:c) : (b<c?b:c);
//    }
//    int minDistance(string word1, string word2) {
//        int len1 = word1.length();
//        int len2 = word2.length();
//        
//        if(len1 == 0)
//            return len2;
//        if(len2 == 0)
//            return len1;
//        
//        vector<vector<int>> dp =  vector<vector<int>>(len1+1 , vector<int>(len2+1 , 0));
//        
//        for(int i=0 ; i<=len2 ; i++  ){
//            dp[0][i] = i;
//        }
//        for(int i=0 ; i<=len1 ; i++){
//            dp[i][0] = i;
//        }
//        
//        for(int i=1 ; i<=len1 ; i++){
//            for(int j=1 ; j<=len2 ; j++){
//                
//                if( word1[i-1] == word2[j-1] ){
//                    dp[i][j] = dp[i-1][j-1];
//                }
//                else{
//                    //replace
//                    dp[i][j] = dp[i-1][j-1] + 1;
//                }
//                //insert
//                //delete
//                dp[i][j] = min( dp[i-1][j]+1 /* delete */, dp[i][j] ,dp[i][j-1]+1 /* insert */ );
//            }
//        }
//        return dp[len1][len2];
//    }
//};
//
//int main(){
//    
//    string s1 = "eeba";
//    string s2 = "abca";
//    
//    Solution s;
//    int res = s.minDistance(s1, s2);
//    
//
//    return 0;
//}