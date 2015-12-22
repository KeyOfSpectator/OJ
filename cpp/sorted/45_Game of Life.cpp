////
////  45_Game of Life.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/12.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//// 思维要缜密！
//
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    
//    int calLiveCount(int x , int y , vector<vector<int>>& board){
//        int liveCount = 0;
//        for(int i=x-1 ; i<=x+1 ; i++){
//            for(int j=y-1 ; j<=y+1 ; j++){
//                // self
//                if(x==i&&y==j) continue;
//                // wall
//                if(i<0||j<0||i>=board[0].size()||j>=board.size()) continue;
//
////// !!!!!!
//                if(board[j][i]%10 == 1)
//                    liveCount++;
//                
//            }
//        }
//        return liveCount;
//    }
//    
//    void gameOfLife(vector<vector<int>>& board) {
//        if(board.size() == 0) return;
//        
//        for(int i=0 ; i<board[0].size(); i++){
//            for(int j=0 ; j<board.size() ; j++){
//                int liveCount = calLiveCount(i , j , board);
//                int nextGenCode = 0;
//                if(board[j][i] == 1){
//                    if(liveCount < 2 || liveCount >3){
//                        nextGenCode = 0;
//                    }
//                    else{
//                        nextGenCode = 1;
//                    }
//                }
//                else{
//                    if(liveCount == 3)
//                        nextGenCode = 1;
//                    else
//                        nextGenCode = 0;
//                }
//                board[j][i] += nextGenCode*10;
//            }
//        }
//        
//        for(int i=0 ; i<board[0].size() ; i++){
//            for(int j=0 ; j<board.size() ; j++){
//                board[j][i] /= 10;
//            }
//        }
//        
//    }
//};
//
//
//int main(){
//    
//    vector<vector<int>> input;
//    vector<int> line1;
//    line1.push_back(1);
//    line1.push_back(1);
//    vector<int> line2;
//    line2.push_back(1);
//    line2.push_back(0);
//    
//    input.push_back(line1);
//    input.push_back(line2);
//    
//    Solution s;
//    s.gameOfLife(input);
//    
//    
//    return 0;
//}