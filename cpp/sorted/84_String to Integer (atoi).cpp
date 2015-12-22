////
////  84_String to Integer (atoi).cpp
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
//#define MAX_INT 2147483647
//#define MIN_INT 2147483648
//
//class Solution {
//public:
//    int myAtoi(string str) {
//        int indx = 0;
//        long long ans = 0;
//        bool isPositive = true;
//        
//        while(str[indx]==' '){
//            indx++;
//        }
//        if(indx>= str.length()
//           ||
//           (str[indx]!='+' && str[indx]!='-' && (str[indx]>'9' || str[indx]<'0'))
//            )
//            return 0;
//    
//        if(str[indx]=='+'  &&  !(indx < str.length()-1 && str[indx+1]>='0' && str[indx+1]<='9'))
//            return 0;
//        
//        if(str[indx]=='-' &&  !(indx < str.length()-1 && str[indx+1]>='0' && str[indx+1]<='9'))
//            return 0;
//            
//        
////        while(indx < str.length()
////              //&& !(indx < str.length()-1 && str[indx]=='+' && str[indx+1]>='0' && str[indx+1]<='9')
////              //&& !(indx < str.length()-1 && str[indx]=='-' && str[indx+1]>='0' && str[indx+1]<='9')
////              && (str[indx]!='+' && str[indx]!='-')
////              && (str[indx]>'9' || str[indx]<'0')){
////            indx++;
////        }
//
//        if(str[indx] == '-'){
//            isPositive = false;
//            indx++;
//        }
//        else if(str[indx] == '+'){
//            indx++;
//        }
//        
//        while( ((isPositive && ans <= MAX_INT) || (!isPositive && ans<=MIN_INT)) && str[indx]<='9' && str[indx]>='0'){
//            ans = ans*10 + (str[indx]-'0');
//            indx++;
//        }
//        
//        if(isPositive){
//            if(ans >= MAX_INT)
//                return MAX_INT;
//            else
//                return (int)ans;
//        }
//        else{
//            if(ans >= MIN_INT)
//                return -MIN_INT;
//            else
//                return -(int)ans;
//        }
//    }
//};
//
//int main(){
//    
//    string input = "+-2";
//
//    Solution s;
//    int ans = s.myAtoi(input);
//    
//    return 0;
//}