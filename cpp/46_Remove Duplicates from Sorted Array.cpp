////
////  46_Remove Duplicates from Sorted Array.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/12.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//// 注意 vector的erase方法的用法！！！
//// 迭代器！！！
//
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    int removeDuplicates(vector<int>& nums) {
//        if(nums.size() == 0) return NULL;
//        int length = 0;
//        int postNum = nums[0]-1;
//        for(vector<int>::iterator it = nums.begin() ; it!=nums.end() ; /*  !!!!!!不要it＋＋  */){
//            if(*it > postNum){
//                postNum = *it;
//                length++;
//                it++;
//            }
//            else{
//                // !!!!!
//                it = nums.erase(it);
//                if(it == nums.end()){
//                    break;
//                }
//            }
//        }
//        return length;
//    }
//};
//
//
//int main(){
//    
//    vector<int> input;
//    input.push_back(1);
//    input.push_back(1);
//    input.push_back(2);
//    
//    Solution s;
//    s.removeDuplicates(input);
//    
//    return 0;
//}