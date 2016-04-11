////
////  104_Counting Bits.cpp
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
//class Solution {
//public:
//    vector<int> countBits(int num) {
//        vector<int> ret;
//        for(int i=0 ; i<=num ; i++){
//            if(i==0){
//                ret.push_back(0);
//                continue;
//            }
//            if(i==1){
//                ret.push_back(1);
//                continue;
//            }
//            if(i%2==0){
//                ret.push_back(ret[i/2]);
//            }
//            else{
//                ret.push_back(ret[i-1]+1);
//            }
//            
//        }
//        return ret;
//    }
//};
//
//int main(){
//    
////    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    Solution s;
//    s.countBits(5);
//    
//    
//
//
//    return 0;
//}