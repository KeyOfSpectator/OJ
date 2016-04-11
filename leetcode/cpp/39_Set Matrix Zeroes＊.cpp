////
////  39_Set Matrix Zeroes.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/10.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
///*
// 用 第一行和第一列纪录
// 明确 matrix[col][m] -> 第m行n列
// matrix[col_index][row_Index]
// 
// 不要continue跳过循环 会忽略
// 
// */
//
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    void setZeroes(vector<vector<int>>& matrix) {
//        
//        
//        int n = matrix.size();
//        int m = matrix[0].size();
////        // test
////        for(int i=0 ; i<m ; i++){
////            for(int j=0 ; j<n ; j++){
////                printf("%d %d %d\n" , i , j , matrix[j][i]);
////            }
////        }
//        bool col_flag = true;
//        bool row_flag = true;
//        
//        // first col and row
//        for(int i=0 ; i<m ; i++){
//            if(matrix[0][i]==0){
//                row_flag = false;
//                break;
//            }
//        }
//        for(int i=0 ; i<n; i++){
//            if(matrix[i][0] == 0){
//                col_flag = false;
//                break;
//            }
//        }
//        if(!(col_flag&&row_flag))
//            matrix[0][0] = 0;
//        
//        // judge
//        for(int i=1 ; i<m ; i++){
////            if(matrix[0][i] == 0) continue;
//            for(int j=1 ; j<n ; j++){
//                printf("%d %d %d\n" , i , j , matrix[j][i]);
////                if(matrix[j][0] == 0) continue;
//                if(matrix[j][i] == 0){
//                    matrix[0][i] = 0;
//                    matrix[j][0] = 0;
//                }
//            }
//        }
//        
//        // set value except first col and row
//        for(int i=1 ; i<m ; i++  ){
//            if(matrix[0][i] == 0)
//                for(int j=1 ; j<n ; j++){
//                    matrix[j][i] = 0;
//                }
//        }
//        for(int i=1 ; i<n ; i++){
//            if(matrix[i][0] == 0)
//                for(int j=1 ; j<m ; j++){
//                    matrix[i][j] = 0;
//                }
//        }
//        
//        // set value for first row and col
//        if(!row_flag){
//            for(int i=1 ; i<m ; i++){
//                matrix[0][i] = 0;
//            }
//        }
//        if(!col_flag){
//            for(int i=1 ; i<n; i++){
//                matrix[i][0] = 0;
//            }
//        }
//    }
//};
//
//int main(){
//    
//    vector<int> line1;
//    line1.push_back(1);
//    line1.push_back(1);
//    line1.push_back(0);
//    
//    vector<int> line2;
//    line2.push_back(1);
//    line2.push_back(1);
//    line2.push_back(0);
//    
//    vector<int> line3;
//    line3.push_back(1);
//    line3.push_back(1);
//    line3.push_back(1);
//    
//    vector<vector<int>> input;
//    input.push_back(line1);
//    input.push_back(line2);
//    input.push_back(line3);
//    
//    Solution s;
//    s.setZeroes(input);
//    
//
//    return 0;
//}