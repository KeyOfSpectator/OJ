////
////  43_Combinations.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/12.
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
//    void recusion(int s , int k){
//        // s is the start num
//        // k is the count left
//        if(k<1){
//            ans.push_back(line);
//            return;
//        }
//        if(k==1){
//            if(s>=N){
//                return;
//            }
//            for(int i=s+1 ; i<=N ; i++){
//                line.push_back(i);
//                ans.push_back(line);
//                line.pop_back();
//            }
//            return;
//        }
//        else{
//            for(int i=s+1 ; i<=N ; i++){
//                line.push_back(i);
//                recusion(i , k-1);
//                line.pop_back();
//            }
//        }
//        
//    }
//    
//    vector<vector<int>> combine(int n, int k) {
//        N=n;
//        ans.clear();
//        if(n==0 || k==0) return ans;
//        if(n==k){
//            line.clear();
//            for(int i=1 ; i<=n ; i++){
//                line.push_back(i);
//            }
//            ans.push_back(line);
//            return ans;
//        }
//        for(int i=1 ; i<=n ; i++){
//            line.clear();
//            line.push_back(i);
//            recusion(i , k-1);
//        }
//        return ans;
//    }
//};
//
//int main(){
//    
//    Solution s;
//    s.combine(2, 1);
//
//    return 0;
//}