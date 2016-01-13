////
////  10_Integer to Roman.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/9/20.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string>
//using namespace std;
//
//// I 1  V 5  X 10  L 50  C 100  D 500  M 1000
//
//char ans[100];
//int loc;
//
//class Solution {
//public:
//    string intToRoman(int num) {
//        loc = 0;
//        
//        // 1000~
//        while(num >= 1000){
//            ans[loc++] = 'M';
//            num -= 1000;
//        }
//        
//        // 500~900
//        while(num >= 500 && num < 900){
//            ans[loc++] = 'D';
//            num -= 500;
//        }
//        // 900~1000
//        if(num >= 900){
//            ans[loc++] = 'C';
//            ans[loc++] = 'M';
//            num -= 900;
//        }
//        
//        // 100~400
//        while(num >= 100 && num < 400){
//            ans[loc++] = 'C';
//            num -= 100;
//        }
//        // 400~500
//        if(num >= 400){
//            ans[loc++] = 'C';
//            ans[loc++] = 'D';
//            num -= 400;
//        }
//        
//        // 50~90
//        while(num >= 50 && num < 90){
//            ans[loc++] = 'L';
//            num -= 50;
//        }
//        // 90~100
//        if(num >= 90){
//            ans[loc++] = 'X';
//            ans[loc++] = 'C';
//            num -= 90;
//        }
//        
//        // 10~40
//        while(num >= 10 && num < 40){
//            ans[loc++] = 'X';
//            num -= 10;
//        }
//        // 40~50
//        if(num >= 40){
//            ans[loc++] = 'X';
//            ans[loc++] = 'L';
//            num -= 40;
//        }
//        
//        // 5~4
//        while(num >= 5 && num < 9){
//            ans[loc++] = 'V';
//            num -= 5;
//        }
//        // 9~10
//        if(num >=9){
//            ans[loc++] = 'I';
//            ans[loc++] = 'X';
//            num -= 9;
//        }
//        
//        // 1~4
//        while(num >= 1 && num < 4){
//            ans[loc++] = 'I';
//            num -= 1;
//        }
//        // 4~5
//        if(num >= 4){
//            ans[loc++] = 'I';
//            ans[loc++] = 'V';
//            num -= 4;
//        }
//        
//        
//        ans[loc] = 0;
//        string res(ans);
//        
//        return res;
//    }
//};
//
//int main(){
//    
//    int num = 2999;
//    
//    Solution s;
//    s.intToRoman(num);
//    
//
//    return 0;
//}