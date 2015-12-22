////
////  57_Combination Sum III.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/14.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//vector<vector<int>> ans;
//vector<int> line;
//int N;
//
//class Solution {
//public:
//    
//    void DFS(int lastNum , int k , int sum){
//        //
//        if(lastNum > 9) return;
//        if(lastNum > (N-sum)){
//            return;
//        }
//        //
//        if(lastNum == (N-sum) && k==1){
//            line.push_back(lastNum);
//            ans.push_back(line);
//            line.pop_back();
//            return;
//        }
//        if(lastNum == (N-sum) && k>1){
//            return;
//        }
//        
//        //
//        if(lastNum < (N-sum) && k==1 ){
//            return;
//        }
//        if(lastNum < (N-sum) && k>1){
//            for(int i=lastNum+1 ; i<=9 ; i++){
//                line.push_back(lastNum);
//                DFS(i , k-1 , sum+lastNum);
//                line.pop_back();
//            }
//        }
//
//    }
//    
//    vector<vector<int>> combinationSum3(int k, int n) {
//        ans.clear();
//        if(k==0) return ans;
//            
//        N = n;
//        for(int i=1 ; i<=9 ; i++){
//            line.clear();
//            DFS(i , k , 0);
//        }
//        return ans;
//    }
//};
//
//int main(){
//    
//    Solution s;
//    s.combinationSum3(3, 9);
//    
//    return 0;
//}