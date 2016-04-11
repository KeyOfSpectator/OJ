////
////  22_Minimum Path Sum.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/9/23.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//int min_map[1001][1001];
//
//class Solution {
//public:
//    int minPathSum(vector<vector<int>>& grid) {
//        int n = grid.size();
//        int m = grid[0].size();
//        for(int i=0 ; i<grid.size() ; i++){
//            for(int j=0 ; j<grid[i].size() ; j++){
//                if(i==0){
//                    if(j==0){
//                        min_map[0][0] = grid[0][0];
//                    }
//                    else{
//                        min_map[i][j] = grid[i][j] + min_map[i][j-1];
//                    }
//                }
//                else{
//                    if(j==0){
//                        min_map[i][j] = grid[i][j] + min_map[i-1][j];
//                    }
//                    else{
//                        min_map[i][j] = grid[i][j] + min( min_map[i][j-1] , min_map[i-1][j]  );
//                    }
//                }
//            }
//        
//        }
//        return min_map[n-1][m-1];
//    }
//};
//
//int main(){
//    
//    return 0;
//}