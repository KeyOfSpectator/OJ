////
////  64_Valid Parentheses.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/20.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string>
//#include <iostream>
//#include <stack>
//using namespace std;
//
//stack<int> sta;
//
//class Solution {
//public:
//    bool isValid(string s) {
//        while(sta.empty() == false){
//            sta.pop();
//        }
//        bool ans = true;
//        for(int i=0 ; i<s.length() ; i++){
//            switch(s[i]){
//                case '(':
//                    sta.push(1);
//                    break;
//                case '[':
//                    sta.push(2);
//                    break;
//                case '{':
//                    sta.push(3);
//                    break;
//                case '}':
//                    if(sta.empty() || sta.top() != 3)
//                        ans = false;
//                    else
//                        sta.pop();
//                    break;
//                case ']':
//                    if(sta.empty() || sta.top()!=2)
//                        ans = false;
//                    else
//                        sta.pop();
//                    break;
//                case ')':
//                    if(sta.empty() || sta.top() != 1)
//                        ans = false;
//                    else
//                        sta.pop();
//            }
//            if(ans == false)
//                return false;
//        }
//        if(sta.empty() == false)
//            ans = false;
//        return ans;
//    }
//};
//
//int main(){
//    
//    string input;
//    cin >> input;
//    Solution s;
//    bool ans = s.isValid(input);
//    
//
//    return 0;
//}