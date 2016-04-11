////
////  97_Verify Preorder Serialization of a Binary Tree.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 16/2/24.
////  Copyright © 2016年 KeyOfSpectator. All rights reserved.
////
//
//// !!!
//// stack for tree preorder verify
//
//#include <stdio.h>
//#include <string>
//#include <vector>
//#include <stack>
//using namespace std;
//
//class Solution_timelimit {
//public:
//    bool check(vector<char> input , int start , int end , vector<vector<int>> dp){
//        if(start == end){
//            dp[start][end] = 1;
//            return true;
//        }
//        
//        if(start == end-1){
//            dp[start][end] = -1;
//            return false;
//        }
//        
//        if(input[start] != '#'){
//            // start->end
////            bool res;
////            if(dp[start+1][end]==1)
////                return true;
////            else if(dp[start+1][end]==0){
////                res = check(input , start+1 , end , dp);
////                if(res){
////                    dp[start+1][end] = 1;
////                    return true;
////                }
////                else
////                    dp[start+1][end] = -1;
////            }
//            
//            // start->i i->end
//            for(int i=start+1 ; i<end ; i++){
//                bool res1;
//                bool res2;
//                if(dp[start+1][i] != 0){
//                    res1 = (dp[start+1][i]==1);
//                }
//                else{
//                    res1 = check(input , start+1 , i , dp);
////                    if(res1)
////                        dp[start+1][i] = 1;
////                    else
////                        dp[start+1][i] = -1;
//                }
//                if(dp[i+1][end] != 0){
//                    res2 = (dp[i+1][end]==1);
//                }
//                else{
//                    res2 = check(input , i+1 , end , dp);
////                    if(res2)
////                        dp[i+1][end] = 1;
////                    else
////                        dp[i+1][end] = -1;
//                }
//                if(res1 && res2){
//                    dp[start][end] = 1;
//                    return true;
//                }
//            }
//        }
//        
//        return false;
//    }
//    
//    bool isValidSerialization(string preorder) {
//        
//        // handle input string
//        vector<char> input;
//        for(int i=0 ; i<preorder.length() ; i++){
//            if(preorder[i]!=',')
//                input.push_back(preorder[i]);
//        }
//
//        int n = input.size();
//        vector<vector<int>> dp = vector<vector<int>>(n , vector<int>(n , 0));  // 0 -> null ; 1 -> true ; -1 -> false;
//        bool res = check(input , 0 , n-1 , dp);
//        return res;
//        
////        int n = input.size();
////        vector<vector<bool>> dp = vector<vector<bool>>(n , vector<bool>(n , true));
////        
////        for(int l=2 ; l<n ; l++){
////            for(int left = 0 ; left < n-l ; left++){
////                int right = left+l;
////                for(int m){
////                
////                }
////            }
////        }
//        
//    }
//};
//
//// !!!!!!! stack
//class Solution {
//public:
//    bool isValidSerialization(string preorder) {
//        stack<int> s;
//        // handle input string
//        
//        vector<int> input;
//        bool flag = false;
//        for(int i=0 ; i<preorder.length() ; i++){
//            if(preorder[i]!=','&&preorder[i]!='#'&&!flag){
//                input.push_back(1);
//                flag = true;
//            }
//            if(preorder[i]==','){
//                flag = false;
//            }
//            if(preorder[i]=='#'){
//                input.push_back(-1);
//            }
//        }
//        
//        for(int i=0 ; i<input.size() ; i++){
//                //input.push_back(preorder[i]);
//                s.push(input[i]);
//            
//                while(s.size() >= 3){
//                    int a = s.top();
//                    s.pop();
//                    int b = s.top();
//                    s.pop();
//                    int c = s.top();
//                    s.pop();
//                    if( c!=-1 && a==-1 && b==-1){
//                        s.push(-1);
//                    }
//                    else{
//                        s.push(c);
//                        s.push(b);
//                        s.push(a);
//                        break;
//                    }
//            }
//        }
//        return (s.size() == 1 && s.top() == -1);
//      
//        
//    }
//};
//
//int main(){
//    
//    string input = "9,3,4,#,#,1,#,#,2,#,6,#,#";
//    //string input = "9,#,#,1";
//    //string input = "9,#,92,#,#";
//    
//    Solution s;
//    bool res = s.isValidSerialization(input);
//
//    return 0;
//}