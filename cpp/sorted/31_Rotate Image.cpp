////
////  31_Rotate Image.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/8.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//// 搅
//
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//
//class Solution {
//public:
//    
//    void reverse_matric1(vector<vector<int>>& matrix)
//    {
//        int len = matrix.size();
//        for(int i=0 ; i<matrix.size() ; i++)
//        {
//            for(int j=0 ; j<matrix.size()-i ; j++)
//            {
//                
//                    int tmp = matrix[i][j];
//                    matrix[i][j] = matrix[len-j-1][len-i-1];
//                    matrix[len-j-1][len-i-1] = tmp;
//                
//            }
//        }
//    }
//    
//    void reverse_matric2(vector<vector<int>>& matrix)
//    {
//        int len = matrix.size();
//        for(int i=0 ; i<matrix.size() ; i++)
//        {
//            for(int j=0 ; j<matrix.size()/2 ; j++)
//            {
//                int tmp = matrix[j][i];
//                matrix[j][i] = matrix[len-j-1][i];
//                matrix[len-j-1][i] = tmp;
//            }
//        }
//    }
//    
//    void rotate(vector<vector<int>>& matrix) {
//        if(matrix.size() == 0) return;
//        reverse_matric1(matrix);
//        reverse_matric2(matrix);
//    }
//};
//
//
//int main(){
//    vector<int> line1;
//    line1.push_back(1);
//    line1.push_back(2);
//    line1.push_back(3);
//    vector<int> line2;
//    line2.push_back(4);
//    line2.push_back(5);
//    line2.push_back(6);
//    vector<int> line3;
//    line3.push_back(7);
//    line3.push_back(8);
//    line3.push_back(9);
//    
//    vector<vector<int>> input;
//    input.push_back(line1);
//    input.push_back(line2);
//    input.push_back(line3);
//    
//    Solution s;
//    s.rotate(input);
//
//    return 0;
//}