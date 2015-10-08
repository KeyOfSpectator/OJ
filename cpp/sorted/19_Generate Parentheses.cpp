////
////  19_Generate Parentheses.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/9/23.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//#include <string>
//using namespace std;
//
//char ans[100];
//int loc;
//vector<string> res;
//
//class Solution {
//public:
//    
//    void DFS(int left , int right){
//        if(left == 0 && right == 0){
//            ans[loc] = 0;
//            string s(ans);
//            res.push_back(s);
//            //loc--;
//            return;
//        }
//        if(left > 0){
//            ans[loc++] = '(';
//            //if(left-1 >= right-1)
//            DFS(left-1 , right );
//            loc--;
//        }
//        if(right > 0){
//            ans[loc++] = ')';
//            if(right > left)
//                DFS(left , right-1);
//            loc--;
//        }
//        
//    }
//    
//    vector<string> generateParenthesis(int n) {
//        res.clear();
//        loc = 0;
//        DFS( n , n );
//        return res;
//    }
//};
//
//int main(){
//    
//    Solution s;
//    s.generateParenthesis(3);
//    
//
//    return 0;
//}