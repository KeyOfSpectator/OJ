////
////  27_Permutations(NS).cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/9/28.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//vector<vector<int>> ans;
//vector<int> every_ans;
//
//class Solution {
//public:
//    
//    void DFS(vector<int>& nums){
//        if(nums.size() == 0){
//            ans.push_back(every_ans);
//            return;
//        }
//        for(int i=0 ; i<nums.size() ; i++){
//            int tmp = nums[i];
//            every_ans.push_back(tmp);
//            vector<int> restNums;
//            for(int j=0 ; j<nums.size() ; j++){
//                if(j!=i)
//                    restNums.push_back(nums[j]);
//            }
//            DFS(restNums);
//            every_ans.pop_back();
//        }
//    }
//    
//    vector<vector<int>> permute(vector<int>& nums) {
//        ans.clear();
//        every_ans.clear();
//        
//        DFS(nums);
//        
//        return ans;
//    }
//};
//
//int main(){
//    
//    vector<int> input;
//    input.push_back(1);
//    input.push_back(2);
//    input.push_back(3);
//    
//    Solution s;
//    s.permute(input);
//    
//    
//    return 0;
//}