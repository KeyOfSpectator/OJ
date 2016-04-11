////
////  16_Gray Code.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/9/21.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//#include <string.h>
//using namespace std;
//
//int bin[1000];
//bool mark[10000000];
//int size;
//
//class Solution {
//public:
//    
//    vector<int> ans;
//    
//    // binary array from left to right
//    int binToTen(){
//        int res = 0;
//        for(int i=size-1 ; i>=0 ; i--){
////        for(int i = 0 ; i < size ; i++){
//            res = res*2 + bin[i];
//        }
//        return res;
//    }
//    
//    bool checkPoint(int num){
//        return !mark[num];
//    }
//    
//    void markPoint(int num){
//        ans.push_back(num);
//        mark[num] = true;
//    }
//    
//    void DFS(int lowBit){
//        for(int i=lowBit ; i>=0 ; i--){
//        //for(int i=0 ; i <= lowBit ; i++){
//            bin[lowBit] ^= 1;
//            int ten = binToTen();
//            if(checkPoint(ten)){
//                markPoint(ten);
//                if(lowBit>0)
//                    for(int j=0 ; j<lowBit ; j++){
//                        DFS(j);
//                    }
//                    //DFS(lowBit-1);  // inorder
//            }
//            else{
//                bin[lowBit] ^= 1;
//                continue;
//            }
//        }
//    }
//    
//    vector<int> grayCode(int n) {
//        size = n;
//        memset(bin , 0 , sizeof(bin));
//        memset(mark , 0 , sizeof(mark));
//        
//        ans.clear();
//        
//        markPoint(0);
//        
//        for(int i=0 ; i<n ; i++){
//            DFS(i);
//        }
//        
//        return ans;
//    }
//};
//
//int main(){
//    
//    Solution s;
//    s.grayCode(3);
//
//    return 0;
//}