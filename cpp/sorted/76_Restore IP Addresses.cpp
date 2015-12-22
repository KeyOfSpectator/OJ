////
////  76_Restore IP Addresses.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/30.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//#include <string>
//#include <sstream>
//using namespace std;
//
//
//stringstream ss;
//string S;
//int len;
//vector<string> ans;
//
//class Solution {
//public:
//    string getStr(int index , int len_str){
//        string ret;
//        if((index + len_str) > len) return ret;
//        string tmp = S.substr(index , len_str);
//        int num;
//        ss << tmp;
//        ss >> num;
//        ss.clear();
//        if(num > 255 || num < 0) return ret;
//        else if(num > 0 && tmp[0]=='0') return ret;
//        else if(num == 0 && tmp.length()!=1) return ret;
//        else
//            return tmp;
//    }
//    
//    void DFS(int index , int level , string eachAns){
//        if(level >= 5) return;
//        if(index >= len ) return;
//        if(level == 4){
//            string tmp_str = getStr(index , len-index);
//            if(tmp_str.length() != 0){
//                string tmp_ans = eachAns;
//                tmp_ans += '.';
//                tmp_ans += tmp_str;
//                ans.push_back(tmp_ans);
//                return;
//            }
//            else
//                return;
//        }
//        else{
//            for(int i=1 ; i<=3 ; i++){
//                string tmp_ans = eachAns;
//                string tmp_str = getStr(index, i);
//                if(tmp_str.length()!=0){
//                    if(level!=1)
//                        tmp_ans += '.';
//                    tmp_ans += tmp_str;
//                    DFS(index+i , level+1 ,tmp_ans);
//                }
//            }
//        }
//    }
//    
//    vector<string> restoreIpAddresses(string s) {
//        ans.clear();
//        S = s;
//        len = s.length();
//        string eachStr;
//        DFS(0 , 1 , eachStr);
//        return ans;
//    }
//};
//
//int main(){
//
//    string input = "0000";
//    
//    Solution s;
//    s.restoreIpAddresses(input);
//    
//    return 0;
//}