////
////  77_Multiply Strings.cpp
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
//    string multiEach(char num2 , string num1){
//        string ret = num1;
//        int mul = num2-'0';
//        int tex = 0;
//        for(int i=num1.length()-1 ; i>=0 ; i--){
//            int tmp = (num1[i]-'0')*mul + tex;
//            ret[i] = tmp%10 + '0';
//            tex = tmp/10;
//        }
//        if(tex != 0)
//            ret.insert(ret.begin() , tex+'0');
//        return ret;
//    }
//    
//    string addToAns(string tmp_str , int index , string ans){
//        if(ans == ""){
//            ans = tmp_str;
//            return ans;
//        }
//
//        int len_ans = ans.length();
//        int len_tmp = tmp_str.length();
//        if(len_tmp+index > len_ans){
//            int i = len_tmp+index-len_ans ;
//            while(i--){
//                ans.insert(ans.begin() , '0');
//            }
//        }
//        string tmp_ans = ans;
//        len_ans = ans.length();
//        int tex = 0;
//        for(int i = 0 ; i < len_tmp ; i++){
//            int num;
//            if(i != len_tmp)
//                num = tmp_str[len_tmp - i - 1] - '0';
//            else
//                num = 0;
//            
//            int sum = ans[len_ans - i - 1 - index] - '0' + num + tex;
//            tex = sum/10;
//            tmp_ans[len_ans - i - 1 - index] = sum%10 + '0';
//        }
//        if(tex!=0){
//            tmp_ans.insert(tmp_ans.begin() , tex+'0');
//        }
//        return tmp_ans;
//    }
//    
//    string multiply(string num1, string num2) {
//        int len1 = num1.length();
//        int len2 = num2.length();
//        string ans;
//        for(int i=0 ; i<len2 ; i++){
//            int index = len2-i-1;
//            
//            string tmp_str = multiEach(num2[index] , num1);
//            
//            ans = addToAns(tmp_str , i , ans);
//            
//        }
//        string::iterator it = ans.begin();
//        while(*it == '0'){
//            it = ans.erase(it);
//        }
//        if(ans.length() == 0)
//            ans.insert(ans.begin() , '0');
//        return ans;
//    }
//};
//
//int main(){
//
//    string input1 = "123456789";
//    string input2 = "987654321";
//    
//    Solution s;
//    s.multiply(input1, input2);
//    
//    return 0;
//}