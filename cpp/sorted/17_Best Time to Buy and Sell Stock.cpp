////
////  17_Best Time to Buy and Sell Stock.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/9/23.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
////vector<int> max_right;
////
////class Solution {
////public:
////    int maxProfit(vector<int>& prices) {
////        
////        max_right.clear();
////        int max = 0;
////        
////        for(int i=0 ; i<prices.size(); i++){
////            max_right.push_back(0);
////            for(int j = 0 ; j<i; j++){
////                if(prices[i] - prices[j] > max_right[j]){
////                    max_right[j] = prices[i] - prices[j];
////                    if(max < max_right[j])
////                        max = max_right[j];
////                }
////            }
////        }
////        return max;
////    }
////};
//
//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//        if(prices.size() == 0) return NULL;
//        int low = prices[0];
//        int ans = 0;
//        
//        for(int i=0 ; i<prices.size(); i++){
//            if(prices[i] < low) low = prices[i];
//            if(ans < (prices[i] - low)) ans = (prices[i] - low);
//        }
//        
//        return ans;
//    }
//};
//
//
//int main(){
//    
//    vector<int> prices;
//    prices.push_back(1);
//        prices.push_back(3);
//        prices.push_back(2);
//        prices.push_back(4);
//        prices.push_back(1);
//    
//    Solution s;
//    s.maxProfit(prices);
//    
//    
//
//    return 0;
//}