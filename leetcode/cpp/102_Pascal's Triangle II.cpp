////
////  102_Pascal's Triangle II.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 16/2/26.
////  Copyright © 2016年 KeyOfSpectator. All rights reserved.
////
//
//// !!!
//// Pascal Triangle
//
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//class Solution_OutOfRange {    //
//public:
//    int c(int n , int m){ // c(n , m)
//        int sum = 1;
//        int x = n-m+1;
//        for(int i=1; i<=m ; i++){
//            sum *= x;
//            sum /= i;
//            x++;
//        }
//        ///  !!!!!! 一边乘一边除，不然要越界
////        for(int i=m ; i>=1 ; i--){
////            sum /= i;
////        }
//        return sum;
//    }
//    
//    vector<int> getRow(int rowIndex) {
//        vector<int> ans;
//        rowIndex++;
//        int hafN;
//        if(rowIndex %2 == 0)
//            hafN = rowIndex/2;
//        else
//            hafN = rowIndex/2+1;
//        for(int i=0 ; i<hafN ; i++){
//            int tmp = c(rowIndex-1 , i);
//            ans.push_back(tmp);
//        }
//        
//        for(int i=hafN ; i<rowIndex ; i++){
//            ans.push_back(ans[rowIndex-i-1]);
//        }
//        
//        return ans;
//    }
//};
//
//class Solution {
//public:
//    vector<int> getRow(int rowIndex) {
//        rowIndex++;
//
//        vector<int> ans = vector<int>(rowIndex , 0);
//        if(rowIndex == 1){
//            ans[0] = 1;
//            return ans;
//        }
//        
//        for(int i=1 ; i<rowIndex ; i++){
//            ans[rowIndex-1] = 1;
//            
//            for(int j=rowIndex-i-1 ; j<=rowIndex-2 ; j++){
//                ans[j] = ans[j] + ans[j+1];
//            }
//            
//        }
//        return ans;
//    }
//};
//
//int main(){
//    
//    Solution s;
//    s.getRow(0);
//    
//
//    return 0;
//}