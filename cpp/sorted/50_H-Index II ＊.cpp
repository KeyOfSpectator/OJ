////
////  50_H-Index II.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/13.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//// binary search !!!
//// 搅！
//
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    int hIndex(vector<int>& citations) {
//        if(citations.size() == 0) return NULL;
//        int ans = 0;
//        int left = 1 , right = citations.size() ,  m=0;
//        do{
//            m = (left + right)/2;
//            if( m <= citations[citations.size() - m] && (m==citations.size() || m >= citations[citations.size() - m - 1])){
//                ans = m;
//                left = m+1;
//            }
//            else{
//                if( m <= citations[citations.size() - m] && (m!=citations.size() && m<citations[citations.size() - m - 1] ) )
//                    left = m+1;
//                else
//                    right = m-1;
//            }
//        }while(left <= right);
//        
//        return ans;
//    }
//};
//
//int main(){
//    
//    vector<int> input;
//    input.push_back(0);
//    input.push_back(1);
//    input.push_back(3);
//    input.push_back(5);
//    input.push_back(6);
//    
//    Solution s;
//    s.hIndex(input);
//
//    return 0;
//}