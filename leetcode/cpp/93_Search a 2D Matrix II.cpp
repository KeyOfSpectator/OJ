////
////  93_Search a 2D Matrix II.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 16/2/19.
////  Copyright © 2016年 KeyOfSpectator. All rights reserved.
////
//
//// ...
//
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//
//class Solution {
//public:
//    bool searchMatrix(vector<vector<int>>& matrix, int target) {
//        if(matrix.size() == 0 || matrix[0].size() == 0) return false;
//        
//        int i = 0 , j = matrix[0].size()-1;
//        
//        while(i<matrix.size() && j>=0){
//            if(target == matrix[i][j]) return true;
//            else if(target < matrix[i][j]) j--;
//            else i++;
//         }
//        return false;
//    }
//};
//
//int main(){
//    
//    vector<vector<int>> input;
//    
//    vector<int> row1;
//    row1.push_back(1);
//    row1.push_back(2);
//    row1.push_back(3);
//    
//    vector<int> row2;
//    row2.push_back(2);
//    row2.push_back(8);
//    
//    vector<int> row3;
//    row3.push_back(7);
//    row3.push_back(9);
//    
//    vector<int> row4;
//    row3.push_back(7);
//    row3.push_back(11);
//    
//    vector<int> row5;
//    row3.push_back(9);
//    row3.push_back(11);
//
//    input.push_back(row1);
//    input.push_back(row2);
//    input.push_back(row3);
//    input.push_back(row4);
//    input.push_back(row5);
//    
//    Solution s;
//    bool ans = s.searchMatrix(input, -2);
//
//    return 0;
//}