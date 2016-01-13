////
////  51_Nim Game.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/13.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//// tricky!
//
//#include <stdio.h>
//#include <string.h>
//using namespace std;
//
//#define MAX_NUM 10000
//
//bool hash_list[MAX_NUM];
//
//class Solution_runtimeError {
//public:
//    bool canWinNim(int n) {
//        memset(hash_list , 0 , sizeof(hash_list));
//        if(n==0) return NULL;
//        if(n<=3) return true;
//        hash_list[1] = hash_list[2] = hash_list[3] = true;
//        for(int i=4 ; i<=n ; i++){
//            if(hash_list[i-1] == false)
//                hash_list[i] = true;
//            else if(hash_list[i-2] == false)
//                hash_list[i] = true;
//            else if(hash_list[i-3] == false)
//                hash_list[i] = true;
//        }
//        return hash_list[n];
//    }
//};
//
//class Solution {
//public:
//    bool canWinNim(int n) {
//        int tmp = n%4;
//        if(tmp==0) return false;
//        else return true;
//    }
//};
//
//int main(){
//    
//    Solution s;
//    s.canWinNim(4);
//    
//    return 0;
//}