////
////  37_Search a 2D Matrix.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/9.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    bool searchMatrix(vector<vector<int>>& matrix, int target) {
//        for(int i=0 ; i<matrix.size() ; i++){
//            if(i<matrix.size()-1){
//                if(target >= matrix[i+1][0]){
//                    continue;
//                }
//            }
//            for(int j=0 ; j<matrix[0].size() ; j++){
//                if(matrix[i][j] < target )
//                    continue;
//                else if(matrix[i][j] > target)
//                    return false;
//                else
//                    return true;
//            }
//        
//        }
//        return false;
//    }
//};
//
//int main(){
//    
//    vector<int> line1;
//    line1.push_back(1);
//    
//    vector<int> line2;
//    line2.push_back(3);
//    
//    vector<vector<int>> input;
//    input.push_back(line1);
//    input.push_back(line2);
//    
//    Solution s;
//    bool ans = s.searchMatrix(input , 1);
//
//    return 0;
//}