////
////  75_ZigZag Conversion.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/30.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string>
//using namespace std;
//
//class Solution {
//public:
//    string convert(string s, int numRows) {
//        string ans;
//        int len = s.length();
//        int len_col = 2*numRows-2;
//        if(len_col < 1) len_col = 1;
//        if(len == 0)
//            return ans;
//        
//        for(int i=0 ; i<numRows ; i++){
//            int index = i;
//            if(i == 0 || i == numRows-1){
//                while(index < len){
//                    ans += s[index];
//                    index += len_col;
//                }
//            }
//            else{
//                while(index < len){
//                    ans += s[index];
//                    if( (index+len_col - 2*i) < len)
//                        ans += s[(index+len_col - 2*i)];
//                    index += len_col;
//                }
//            }
//        }
//        return ans;
//    }
//};
//
//int main(){
//    
//    string input = "A";
//    Solution s;
//    string ans = s.convert(input, 1);
//    
//
//    return 0;
//}