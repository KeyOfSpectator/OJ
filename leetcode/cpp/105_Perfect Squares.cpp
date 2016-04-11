////
////  105_Perfect Squares.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 16/3/29.
////  Copyright © 2016年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//class Solution_wrong {
//public:
//    int numSquares(int n) {
//        
//        vector<int> squ;
//        for(int i=1 ; i*i<=n ; i++){
//            squ.push_back(i*i);
//        }
//        
//        int ans = 0;
//        for(int i=squ.size()-1 ; i>=0 ; i--){
//            while(squ[i] <= n){
//                ans++;
//                n -= squ[i];
//            }
//        }
//        
//        return ans;
//        
//    }
//};
//
//class Solution {
//public:
//    int numSquares(int n) {
//        
//        vector<int> dp = vector<int>(n+1 , -1);
//        
//        vector<int> squ;
//        for(int i=1 ; i*i<=n ; i++){
//            squ.push_back(i*i);
//            dp[i*i] = 1;
//        }
//        
//        for(int i=1 ; i<=n ; i++){
//            
//            if(dp[i] == 1)
//                continue;
//            
//            int min = 99999;
//            for(int j=0 ; j<squ.size() && squ[j]<i ; j++){
//                int tmp = (dp[i-squ[j]] + 1 );
//                min = (min < tmp ? min : tmp);
//
//            }
//            dp[i] = min;
//            
//            
//        }
//        
//        return dp[n];
//    }
//};
//
//int main(){
//    
//    Solution s;
//    s.numSquares(12);
//    
//
//
//    return 0;
//}