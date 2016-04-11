////
////  70_Add Binary.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/23.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string>
//#include <sstream>
//using namespace std;
//
//stringstream ss;
//
//class Solution_wrong {
//public:
//    string addBinary(string a, string b) {
//        int a_int , b_int;
//        ss << a;
//        ss >> a_int;
//        ss.clear();
//        
//        ss << b;
//        ss >> b_int;
//        ss.clear();
//        
//        int sum_tmp = a_int + b_int;
//        
//        if(sum_tmp == 0)
//            return "0";
//        
//        string ans;
//        
//        while(sum_tmp != 0){
//            int tmp = sum_tmp%10;
//            sum_tmp /= 10;
//            if(tmp > 1)
//                sum_tmp += 1;
//            // int to string
//            string tmp_str;
//            ss << (tmp%2);
//            ss >> tmp_str;
//            ss.clear();
//            
//            ans.insert(0 , tmp_str);
//        }
//        
//        return ans;
//    }
//};
//
//class Solution {
//public:
//    string addBinary(string a, string b) {
//        string ans;
//        int index = 0;
//        int modNum = 0;
//        while(index < a.length() || index < b.length()){
//            int a_tmp=0 , b_tmp=0;
//            if(index < a.length()){
//                a_tmp = a[a.length() - 1 - index] - '0';
//            }
//            if(index < b.length()){
//                b_tmp = b[b.length() - 1 - index] - '0';
//            }
//            int sum_tmp = a_tmp + b_tmp + modNum;
//            
//            if(sum_tmp > 1)
//                modNum = 1;
//            else
//                modNum = 0;
//            
//            sum_tmp %= 2;
//            
//            string tmp_str;
//            ss << (sum_tmp%2);
//            ss >> tmp_str;
//            ss.clear();
//            
//            ans.insert(0 , tmp_str);
//            
//            index ++;
//        }
//        
//        if(modNum > 0)
//        {
//            string tmpStr;
//            ss << (modNum%2);
//            ss >> tmpStr;
//            ss.clear();
//            ans.insert(0 , tmpStr);
//        }
//        
//        return ans;
//    }
//};
//
//int main(){
//    
//
//    string a = "1110110101";
//    string b = "1110111011";
//    
//    Solution s;
//    s.addBinary(a, b);
//
//    return 0;
//}