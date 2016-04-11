////
////  96_Different Ways to Add Parentheses.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 16/2/22.
////  Copyright © 2016年 KeyOfSpectator. All rights reserved.
////
//
//// \(≧▽≦)/
//
//#include <stdio.h>
//#include <vector>
//#include <string>
//using namespace std;
//
//class Solution {
//public:
//    vector<int> diffWaysToCompute(string input) {
//        
//        // handle input string
//        vector<int> nums;
//        vector<int> opts;  // +1 -2 *3 /4
//        int tmp = 0;
//        for(int i=0 ; i<input.length() ; i++){
//            if(input[i]>='0'&&input[i]<='9'){
//                tmp *= 10;
//                tmp += input[i]-'0';
//            }
//            else{
//                nums.push_back(tmp);
//                tmp = 0;
//                if(input[i] == '+')
//                    opts.push_back(1);
//                else if(input[i] == '-')
//                    opts.push_back(2);
//                else if(input[i] == '*')
//                    opts.push_back(3);
//                else
//                    opts.push_back(4);
//            }
//        }
//        nums.push_back(tmp);
//        
//        vector<vector<vector<int>>> dp = vector<vector<vector<int>>>(nums.size() , vector<vector<int>>(nums.size() , vector<int>(0,0)));
////        vector<int> ans;
//        for(int i=0 ; i<nums.size() ; i++){
//            dp[i][i].push_back(nums[i]);
//        }
//        
//        int n = nums.size();
//        for(int l=1 ; l<n ; l++){
//            for(int left = 0 ; left < n-l ; left++){
//                int right = left + l;
//                for(int m=left ; m<right ; m++){
//                    switch (opts[m]) {
//                        case 1:
//                            for(int i=0 ; i<dp[left][m].size() ; i++){
//                                for(int j=0 ; j<dp[m+1][right].size() ; j++){
//                                    dp[left][right].push_back(dp[left][m][i] + dp[m+1][right][j]);
//                                }
//                            }
//                            break;
//                        case 2:
//                            for(int i=0 ; i<dp[left][m].size() ; i++){
//                                for(int j=0 ; j<dp[m+1][right].size() ; j++){
//                                    dp[left][right].push_back(dp[left][m][i] - dp[m+1][right][j]);
//                                }
//                            }
//                            break;
//                        case 3:
//                            for(int i=0 ; i<dp[left][m].size() ; i++){
//                                for(int j=0 ; j<dp[m+1][right].size() ; j++){
//                                    dp[left][right].push_back(dp[left][m][i] * dp[m+1][right][j]);
//                                }
//                            }
//                            break;
//                        case 4:
//                            for(int i=0 ; i<dp[left][m].size() ; i++){
//                                for(int j=0 ; j<dp[m+1][right].size() ; j++){
//                                    dp[left][right].push_back(dp[left][m][i] / dp[m+1][right][j]);
//                                }
//                            }
//                            break;
//                        default:
//                            break;
//                    }
//                }
//            }
//        }
//        
//        return dp[0][n-1];
//    }
//};
//
//
//int main(){
//
//    string input = "2*3-4*5";
//    
//    Solution s;
//    s.diffWaysToCompute(input);
//
//    return 0;
//}