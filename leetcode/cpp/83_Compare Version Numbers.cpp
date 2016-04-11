////
////  84_Compare Version Numbers.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/11/3.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string>
//using namespace std;
//
//string Str1 , Str2;
//int indx1 , indx2;
//
//class Solution {
//public:
//    void getNum(string str , int &indx , int &value){
//        while(str[indx] < '0' || str[indx] > '9'){
//            indx++;
//        }
//        if(indx >= str.length()){
//            value = -1;
//            return;
//        }
//        int ret = 0;
//        while(str[indx] >= '0' && str[indx] <= '9'){
//            ret = ret*10 + (str[indx]-'0');
//            indx++;
//        }
//        value = ret;
//    }
//    
//    int compareVersion(string version1, string version2) {
//        Str1 = version1;
//        Str2 = version2;
//        indx1 = 0;
//        indx2 = 0;
//        
//        int v1;
//        int v2;
//        getNum(Str1 , indx1 , v1);
//        getNum(Str2 , indx2 , v2);
//        
//        while(v1>=0 && v2>=0){
//            if(v1 < v2)
//                return -1;
//            else if(v1 > v2)
//                return 1;
//            
//            getNum(Str1 , indx1 , v1);
//            getNum(Str2 , indx2 , v2);
//        }
//        
//        while(v1 >= 0){
//            if(v1 > 0)
//                return 1;
//            getNum(Str1 , indx1 , v1);
//        }
//        
//        while(v2 >= 0){
//            if(v2 > 0)
//                return -1;
//            getNum(Str2 , indx2 , v2);
//        }
//        
//        return 0;
//    }
//};
//
//int main(){
//    
//    string input1 = "1.1";
//    string input2 = "1";
//    
//    Solution s;
//    int ans = s.compareVersion(input1 , input2);
//
//    return 0;
//}