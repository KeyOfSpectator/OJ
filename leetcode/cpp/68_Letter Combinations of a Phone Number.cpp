////
////  68_Letter Combinations of a Phone Number.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/23.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//#include <string>
//#include <sstream>
//using namespace std;
//
//string list_str[10] = {
//    " ",
//    "",
//    "abc",
//    "def",
//    "ghi",
//    "jkl",
//    "mno",
//    "pqrs",
//    "tuv",
//    "wxyz",
//};
//
//int N;
//string input_str;
//stringstream ss;
//vector<string> ans;
//
//class Solution {
//public:
//    int stringToInt(string str){
//        ss << str;
//        int ret;
//        ss >> ret;
//        ss.clear();
//        return ret;
//    }
//    
//    void dfs(string eachAns , int level){
//        if(level == N){
//            ans.push_back(eachAns);
//            return;
//        }
//        string str = list_str[ input_str[level]-'0' ];
//        if(str.length() == 0)
//        {
//            dfs(eachAns , level+1);
//        }
//        else
//        {
//            for(int i=0 ; i<str.length() ; i++){
//                string tmp_str = eachAns;
//                tmp_str += str[i];
//                dfs(tmp_str , level+1);
//            }
//        }
//        
//    }
//    
//    vector<string> letterCombinations(string digits) {
//        ans.clear();
//        if(digits.length() == 0) return ans;
//        N = digits.length();
//        input_str = digits;
//        string eachAns;
//        dfs(eachAns , 0);
//        
//        return ans;
//    }
//};
//
//int main(){
//    
//    string input = "23";
//    
//    Solution s;
//    s.letterCombinations(input);
//
//    return 0;
//}