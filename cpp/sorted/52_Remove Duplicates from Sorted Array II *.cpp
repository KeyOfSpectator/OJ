////
////  52_Remove Duplicates from Sorted Array II.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/13.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//// 双指针 O（n）
//
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    int removeDuplicates(vector<int>& nums) {
//        int length = 0;
//        int index = 0;
//        for(vector<int>::iterator it = nums.begin() ; it != nums.end() ; ){
//            if(index == 0 || index == 1){
//                length++;
//                it++;
//            }
//            else{
//                if(*it == *(it-2)){
//                    it = nums.erase(it);
//                }
//                else{
//                    it++;
//                    length++;
//                }
//            }
//            
//            index++;
//            
//        }
//        return length;
//    }
//};
//
//int main(){
//    
//    vector<int> input;
//    input.push_back(1);
//    input.push_back(1);
//    input.push_back(1);
//    input.push_back(2);
//    input.push_back(2);
//    input.push_back(3);
//    
//    Solution s;
//    s.removeDuplicates(input);
//    
//    return 0;
//}