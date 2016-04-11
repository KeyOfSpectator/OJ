////
////  54_House Robber.cpp
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
//    
//    int max(int x , int y){
//        return x<y?y:x;
//    }
//    
//    int rob(vector<int>& nums) {
//        if(nums.size() == 0) return NULL;
//        vector<vector<int>> record;
//        vector<int> line;
//        for(int i=0 ; i<nums.size() ; i++){
//            line.clear();
//            if(i==0){
//                line.push_back(nums[i]);
//                line.push_back(0);
//                
//            }
//            else{
//                line.push_back(record[i-1][1] + nums[i]);
//                line.push_back( max( record[i-1][0] , record[i-1][1] ));
//            }
//            record.push_back(line);
//        }
//        int length = nums.size()-1;
//        return record[length][0] < record[length][1] ? record[length][1] : record[length][0];
//    }
//};
//
//int main(){
//    
//    vector<int> input;
//    input.push_back(2);
//    input.push_back(1);
//    input.push_back(1);
//    input.push_back(2);
//    
//    Solution s;
//    int ans = s.rob(input);
//
//
//    return 0;
//}