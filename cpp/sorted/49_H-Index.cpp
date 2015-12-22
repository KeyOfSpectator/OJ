////
////  49_H-Index.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/13.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//// 丫的，题目好搅
//
//#include <stdio.h>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//    int hIndex(vector<int>& citations) {
//        if(citations.size() == 0) return NULL;
//        sort(citations.begin() , citations.end());
//        int ans = 0;
//        int post = citations[0]-1;
//        for(int i=1 ; i<=citations.size() ; i++){
//            
//            if( i <= citations[citations.size()-i]
//               //&& (i==citations.size() || i > citations[citations.size()-i-1] )
//               ){
//                ans = i;
//            }
//        
//        }
//        return ans;
//    }
//};
//
//int main(){
//    
//    vector<int> input;
//    input.push_back(1);
//    input.push_back(1);
//    
//    Solution s;
//    s.hIndex(input);
//
//    return 0;
//}