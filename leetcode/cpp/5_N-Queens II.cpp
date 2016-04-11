////
////  5_N-Queens II.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/9/19.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string.h>
//
//#define MAX_N 1000
//
//bool mark_x[MAX_N];
//bool mark_y[MAX_N];
//bool left_right_mark[2*MAX_N];
//bool right_left_mark[2*MAX_N];
//
//int ans;
//
//int N;
//
//class Solution {
//public:
//    
//    bool checkPoint(int x , int y){ // x start from 0 ; y start from 1
//        if(mark_x[x]
//           && mark_y[y]
//           && left_right_mark[x-y+N]
//           && right_left_mark[x+y]
//           ){
//            return true;
//        }
//        return false;
//    }
//    
//    void markPoint(int x , int y){
//        mark_x[x] = false;
//        mark_y[y] = false;
//        left_right_mark[x-y+N] = false;
//        right_left_mark[x+y] = false;
//    }
//    
//    void unMarkPoint(int x , int y){
//        mark_x[x] = true;
//        mark_y[y] = true;
//        left_right_mark[x-y+N] = true;
//        right_left_mark[x+y] = true;
//    }
//    
//    void DFS(int level){
//        
//        if(level == N){
//            for(int i=0 ; i<N ; i++){
//                if(checkPoint(i , level)){
//                    ans++;
//                }
//            }
//        }
//        
//        for(int i=0 ; i<N ; i++){
//            if(checkPoint(i , level)){
//                markPoint(i , level);
//                DFS(level+1);
//                unMarkPoint(i , level);
//            }
//        }
//            
//    
//    }
//    
//    int totalNQueens(int n) {
//        N = n;
//        ans = 0;
//        memset(mark_x , 1 , sizeof(mark_x));
//        memset(mark_y , 1 , sizeof(mark_y));
//        memset(left_right_mark , 1 , sizeof(left_right_mark));
//        memset(right_left_mark , 1 , sizeof(right_left_mark));
//        
//        DFS(1);
//        
//        return ans;
//    }
//};
//
//int main(){
//    
//    int n = 8;
//    
//    Solution s;
//    s.totalNQueens(n);
//    
//    return 0;
//}