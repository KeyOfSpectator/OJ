////
////  30_Spiral Matrix II.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/8.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////

//// bit hard for logic
//
//#include <stdio.h>
//#include <vector>
//#include <string.h>
//using namespace std;
//
//int mark[1000][1000];
//
//vector<int> tmp;
//vector<vector<int>> ans;
//int N = 0;
//
//class Solution {
//public:
//    void DFS(int num , int x , int y){
//        ans[N-y-1][x] = num;
//        // right (cant up)
//        if( ((y>0 && mark[x][y+1] != 0 )|| y==N-1) && x+1 < N && mark[x+1][y] == 0){
//            mark[x+1][y] = 1;
//            DFS(num+1 , x+1 , y);
//        }
//        // down
//        else if(y-1 >=0 && mark[x][y-1] == 0){
//            mark[x][y-1] = 1;
//            DFS(num+1 , x , y-1);
//        }
//        // left
//        else if(x-1 >=0 && mark[x-1][y] == 0){
//            mark[x-1][y] = 1;
//            DFS(num+1 , x-1 , y);
//        }
//        // up
//        else if(y+1 < N && mark[x][y+1] == 0){
//            mark[x][y+1] = 1;
//            DFS(num+1 , x , y+1);
//        }
//        else{
//            return;
//        }
//    }
//    
//    vector<vector<int>> generateMatrix(int n) {
//        
//        memset(mark , 0 , sizeof(mark));
//        N = n;
//        tmp.clear();
//        ans.clear();
//        if(n==0) return ans;
//        for(int i=0 ; i<n ; i++) tmp.push_back(0);
//        for(int i=0 ; i<n ; i++) ans.push_back(tmp);
//        
//        int num = 1;
//        mark[0][n-1] = 1;
//        DFS(num , 0 , n-1);
//        
//        return ans;
//    }
//};
//
//
//int main(){
//    Solution s;
//    s.generateMatrix(3);
//
//    return 0;
//}