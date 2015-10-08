////
////  4_N-Queens.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/9/16.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//#include <string>
//using namespace std;
//
//#define MAX_N 1000
//
//bool x_mark[MAX_N];
//bool y_mark[MAX_N];
//bool left_right_mark[2*MAX_N];
//bool right_left_mark[2*MAX_N];
//
//char map_char[MAX_N][MAX_N];
//
//vector<vector<string>> res;
//vector<string> res_per;
//
//int N;
//
//class Solution {
//public:
//    
//    bool checkPoint(int x , int y){
//        if(x_mark[x]
//           && y_mark[y]
//           && left_right_mark[x-y+N]
//           && right_left_mark[x+y]){
//            return true;
//        }
//        return false;
//    }
//    
//    void MarkPoint(int x , int y){
//        x_mark[x] = false;
//        y_mark[y] = false;
//        left_right_mark[x-y+N] = false;
//        right_left_mark[x+y] = false;
//        
//        for(int i=0 ; i<N ; i++){
//            map_char[y][i] = '.';
//        }
//        map_char[y][N] = 0;
//        map_char[y][x] = 'Q';
//        
//        string s(map_char[y]);
////        strcpy(s , map[y]);
////        string s = map[x];
//        res_per.push_back(s);
//    }
//    
//    void UnMarkPoint(int x , int y){
//        x_mark[x] = true;
//        y_mark[y] = true;
//        left_right_mark[x-y+N] = true;
//        right_left_mark[x+y] = true;
//        
//        res_per.pop_back();
//    }
//    
//    void printResult(){
//        res.push_back(res_per);
//    }
//    
//    void DFS( int level ){
//        
//        if(level == 1){
//            while(res_per.empty()==false) res_per.pop_back();
//        }
//        
//        if(level == N){
//            for(int i=0 ; i<N ; i++){
//                if(checkPoint(i , level)){
//                    MarkPoint(i , level);
//                    printResult();
//                    UnMarkPoint(i , level);
//                }
//                else
//                    continue;
//            }
//            return;
//        }
//        
//        for(int i=0 ; i<N ; i++){
//            
//            if(checkPoint(i , level)){
//                MarkPoint(i , level);
//                DFS(level+1);
//                UnMarkPoint(i , level);
//            }
//            else
//                continue;
//        
//        }
//        
//}
//    
//    vector<vector<string>> solveNQueens(int n) {
//        N = n;
//        
//        res.clear();
//        
//        memset(x_mark , 1 , sizeof(x_mark));
//        memset(y_mark , 1 , sizeof(y_mark));
//        memset(left_right_mark , 1 , sizeof(left_right_mark));
//        memset(right_left_mark , 1 , sizeof(right_left_mark));
//        
//        DFS(1);
//        
//        return res;
//    }
//};
//
//
//int main(){
//    
//    int n = 2;
//    
//    Solution s;
//    s.solveNQueens(n);
//    
//    
//    return 0;
//}