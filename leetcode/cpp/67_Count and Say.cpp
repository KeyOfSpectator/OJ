////
////  67_Count and Say.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/22.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string>
//using namespace std;
//
//char* intToChar[10] = {
//    "0" , "1" , "2" , "3" , "4" , "5" , "6" , "7" , "8" , "9" ,
//};
//
//class Solution {
//public:
//    string makeNum(string input){
//        string ans ;
//        int count = 0;
//        char num;
//        for(int i=0 ; i<input.length() ; i++){
//            if(count == 0){
//                num = input[i];
//                count++;
//                continue;
//            }
//            if(num!=input[i])
//            {
//                ans += intToChar[count];
//                ans += num;
//                
//                num = input[i];
//                count = 1;
//            }
//            else
//            {
//                count++;
//            }
//        }
//        ans += intToChar[count];
//        ans += num;
//        return ans;
//    }
//    
//    string countAndSay(int n) {
//        if(n==0) return "";
//        
//        int level = 1;
//        string tmp = "1";
//        while(level<n){
//            tmp = makeNum(tmp);
//            level++;
//        }
//        
//        return tmp;
//        
//    }
//    
//};
//
//int main(){
//    
//    
//    Solution s;
//    string ans = s.countAndSay(5);
//
//    return 0;
//}