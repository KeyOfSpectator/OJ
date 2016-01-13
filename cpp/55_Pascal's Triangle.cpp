////
////  55_Pascal's Triangle.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/13.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    vector<vector<int>> generate(int numRows) {
//        vector<vector<int>> ans;
//        vector<int> line;
//        for(int i=0 ; i<numRows ; i++){
//            if(i==0){
//                line.push_back(1);
//                ans.push_back(line);
//                continue;
//            }
//            line.clear();
//            for(int j=0 ; j<=ans[i-1].size() ; j++){
//                if(j==0 ){
//                    line.push_back(ans[i-1][0]);
//                }
//                else if(j==ans[i-1].size()){
//                    line.push_back(ans[i-1][j-1]);
//                }
//                else{
//                    line.push_back(ans[i-1][j-1] + ans[i-1][j]);
//                }
//            }
//            ans.push_back(line);
//            
//        }
//        return ans;
//    }
//};
//
//int main(){
//    
//    Solution s;
//    s.generate(5);
//
//    return 0;
//}