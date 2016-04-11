////
////  18_Unique Paths.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/9/23.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//
//// map_path cant be larger than 100*100
//
//#include <stdio.h>
//
//int map_path[100][100];
//
//class Solution {
//public:
//    int uniquePaths(int m, int n) {
//        
//        if(m==1 || n==1) return 1;
//        map_path[0][0] = 1;
//        for(int j=0 ; j<m ; j++){
//            for(int i=0 ; i<n ; i++){
//                if(j==0){
//                    map_path[i][j] = 1;
//                }
//                else{
//                    if(i>0)
//                        map_path[i][j] = map_path[i-1][j] + map_path[i][j-1];
//                    else
//                        map_path[i][j] = map_path[i][j-1];
//                }
//            }
//        }
//        return map_path[n-1][m-1];
//        
//    }
//};
//
//int main(){
//
//    Solution s;
//    int ans = s.uniquePaths(1, 2);
//    
//    return 0;
//}