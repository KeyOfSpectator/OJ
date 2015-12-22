////
////  36_Remove Element.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/9.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    int removeElement(vector<int>& nums, int val) {
//        for(vector<int>::iterator it = nums.begin() ; it != nums.end() ; it++ ){
//            if(*it == val)
//            {
//                if(nums.size() == 1){
//                    nums.clear();
//                    return 0;
//                }
//                nums.erase(it);
//                it--;
//            }
//        }
//        return nums.size();
//    }
//};
//
//int main(){
//
//    vector<int> input;
//    input.push_back(4);
//    input.push_back(5);
//    
//    Solution s;
//    s.removeElement(input, 5);
//    
//    return 0;
//}