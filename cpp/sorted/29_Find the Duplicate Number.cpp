////
////  29_Find the Duplicate Number.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/8.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//// 二分法
//
//#include <stdio.h>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    int findDuplicate(vector<int>& nums) {
//        sort(nums.begin(), nums.end());
//        int l = 0 , r = nums.size()-1 , m;
//        while(l<r){
//            m = (l+r)/2;
//            if( (m-l) > (nums[m] - nums[l]) ){
//                r = m;
//            }
//            else if( (r-m) > (nums[r] - nums[m]) ){
//                l = m;
//            }
//            if(nums[r] == nums[l]){
//                return nums[l];
//            }
//        }
//        return nums[m];
//    }
//};
//
//int main(){
//    
//    vector<int> input;
//    input.push_back(5);
//    input.push_back(4);
//    input.push_back(3);
//    input.push_back(3);
//    input.push_back(2);
//    input.push_back(1);
//    
//    Solution s;
//    int ans = s.findDuplicate(input);
//    
//
//    return 0;
//}