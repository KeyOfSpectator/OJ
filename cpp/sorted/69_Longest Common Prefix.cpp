////
////  69_Longest Common Prefix.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/23.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    string longestCommonPrefix(vector<string>& strs) {
//        int count = strs.size();
//        string ans;
//        if(count == 0) return ans;
//        int index = 0;
//        bool flag = true;
//        while(flag){
//            char tmp;
//            if(strs[0].length() <= index) break;
//            else
//                tmp = strs[0][index];
//            for(int i=1 ; i<count ; i++){
//                if(strs[i].length()<=index || strs[i][index] != tmp)
//                    flag = false;
//            }
//            if(flag){
//                ans += tmp;
//                index++;
//            }
//        }
//        return ans;
//    }
//};
//
//int main(){
//    
//    vector<string> input;
//    input.push_back("abcdef");
//    input.push_back("abcffsc");
//    input.push_back("abcb");
//    
//    Solution s;
//    s.longestCommonPrefix(input);
//    
//    return 0;
//}