////
////  89_Best Time to Buy and Sell Stock with Cooldown.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 16/1/15.
////  Copyright © 2016年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//        int len = prices.size();
////        vector<int> buy = vector<int>(len , 0);
//        vector<int> sell = vector<int>(len+2 , 0);
//        
//        sell[0] = sell[1] = 0;
//
//        
//        for(int i=2 ; i<len+2 ; i++){
//            int max_tmp = 0;
//            for(int j=0 ; j<=i-2 ; j++){
//                int profit = prices[i-2] - prices[j] + sell[j];
//                if(max_tmp < profit){
//                    max_tmp = profit;
//                }
//            }
//            sell[i] = max(max_tmp , sell[i-1]);
//        }
//        
//        return sell[len-1+2];
//    }
//};
//
//int main(){
//    
//    vector<int> input;
//    input.push_back(1);
//    input.push_back(2);
//    input.push_back(3);
//    input.push_back(0);
//    input.push_back(2);
//    
//    Solution s;
//    int ret = s.maxProfit(input);
//    printf("%d\n" , ret);
//
//    return 0;
//}