////
////  81_Basic Calculator II.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/11/3.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string>
//#include <stack>
//using namespace std;
//
//string S;
//int indx;
//stack<int> sta;
//stack<int> sta_op;
//
//class Solution {
//public:
//    void getNextSbl(bool &isOp , int &num){
//        isOp = true;
//        
//        // empty
//        while(S[indx] == ' '){
//            indx ++;
//        }
//        
//        if(indx > S.length()-1){
//            num = -1;
//            return;
//        }
//        
//        if(S[indx] == '+'){
//            num = 1;
//            indx++;
//            return;
//        }
//        else if(S[indx] == '-'){
//            num = 2;
//            indx++;
//            return;
//        }
//        else if(S[indx] == '*'){
//            num = 3;
//            indx++;
//            return;
//        }
//        else if(S[indx] == '/'){
//            num = 4;
//            indx++;
//            return;
//        }
//        
//        int ret = 0;
//        isOp = false;
//        while(S[indx] >= '0' && S[indx] <= '9'){
//            ret = ret*10+(S[indx]-'0');
//            indx++;
//        }
//        num = ret;
//        return;
//        
//    }
//    
//    int calculate(string s) {
//        while(!sta.empty()) sta.pop();
//        while(!sta_op.empty()) sta_op.pop();
//        S = s;
//        indx = 0;
//        bool isOp;
//        // operator: + 1, - 2, * 3, / 4
//        int num;
//        getNextSbl(isOp, num);
//        if(num == -1) return 0;
//        sta.push(num);
//        while(num!=-1){
//            getNextSbl(isOp , num);
//            if(isOp){
//                int op_num = num;
//                if(op_num >= 3){
//                    // * /
//                    getNextSbl(isOp, num);
//                    int tmp = sta.top();
//                    sta.pop();
//                    if(op_num == 3)
//                        tmp = tmp*num;
//                    else
//                        tmp = tmp/num;
//                    sta.push(tmp);
//                }
//                else if(op_num>=1){
//                    sta_op.push(op_num);
//                    getNextSbl(isOp, num);
//                    sta.push(num);
//                }
//                else
//                    // end of string
//                    break;
//            }
//            else{
//                // num
//                sta.push(num);
//            }
//        }
//        
//        int ans = 0;
//        while(sta.size()!=1){
//            int tmp1 = sta.top();
//            sta.pop();
//            
//            int op_num = sta_op.top();
//            sta_op.pop();
//            if(op_num == 1){
//                ans+=tmp1;            }
//            else{
//                ans-=tmp1;
//            }
//        }
//        ans += sta.top();
//        
//        return ans;
//    }
//};
//
//int main(){
//    
//    string input = "5   ";
//    
//    Solution s;
//    int ans = s.calculate(input);
//
//
//    return 0;
//}