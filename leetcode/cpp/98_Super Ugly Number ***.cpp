////
////  98_Super Ugly Number.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 16/2/26.
////  Copyright © 2016年 KeyOfSpectator. All rights reserved.
////
//
//// math!!!
//// similar problem ugly number I II
//
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    
//    int min(int a , int b){
//        return a>b?b:a;
//    }
//    
//    int nthSuperUglyNumber(int n, vector<int>& primes) {
//        
//        vector<int> min_list = vector<int>(primes.size() , 0);
//        vector<int> res_list = vector<int>(n , 0);
//        res_list[0] = 1;
//        
//        for(int i=1 ; i<n ; i++){
//            int minNum = INT32_MAX;
//            for(int j=0 ; j<primes.size() ; j++){
//                minNum = min(minNum , primes[j]*res_list[min_list[j]]);
//            }
//            res_list[i] = minNum;
//            
//            // 去掉重复
//            for(int j=0 ; j<primes.size() ; j++){
//                if(primes[j]*res_list[min_list[j]] <= minNum){
//                    min_list[j]++;
//                }
//            }
//        }
//        return res_list[n-1];
//    }
//};
//
//int main(){
//
//    vector<int> pri_input;
//    pri_input.push_back(2);
//    pri_input.push_back(7);
//    pri_input.push_back(13);
//    pri_input.push_back(19);
//    
//    Solution s;
//    int ans = s.nthSuperUglyNumber(12, pri_input);
//
//    return 0;
//}