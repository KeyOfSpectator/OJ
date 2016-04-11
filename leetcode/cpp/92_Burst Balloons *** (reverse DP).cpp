////
////  92_Burst Balloons.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 16/2/16.
////  Copyright © 2016年 KeyOfSpectator. All rights reserved.
////
//
//// dynamic programming
//// dp[i][j] = max( dp[i][j] ,  num[i]*num[m]*num[j] + dp[i][m] + dp[m][j]  )
//
//// !!! reverse thinking !!!
//// from short to long
//// from the last burst to the first
//
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    int max(int a , int b){
//        return a>b?a:b;
//    }
//    
//    int maxCoins(vector<int>& nums) {
//        vector<int> iNums = vector<int>(nums.size()+2 , 1);
//        int n = 1;
//        for(int x: nums){
//            if(x>0)
//                iNums[n++] = x;
//        }
//        iNums[0] = iNums[n++] = 1;
//        
//        vector<vector<int>> dp = vector<vector<int>>(n , vector<int>(n , 0));
//        
//        for(int k=2 ; k<n ; ++k){
//            for(int left = 0 ; left < n-k ; ++left){
//                int right = left + k;
//                for(int i = left + 1 ; i<right ; ++i){
//                    dp[left][right] = max(  dp[left][right] ,
//                                          iNums[left] * iNums[i] * iNums[right] + dp[left][i] + dp[i][right]    );
//                }
//            }
//        }
//        return dp[0][n-1];
//    }
//    
//};
//
//int main(){
//
//    vector<int> input;
//    input.push_back(3);
//    input.push_back(1);
//    input.push_back(5);
//    input.push_back(8);
//    
//    Solution s;
//    int ans = s.maxCoins(input);
//
//    return 0;
//}