////
////  28_Sort Colors.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/8.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    void sortColors(vector<int>& nums) {
//        int pin_last = nums.size() , pin_first = 0;
//        for(int i=0 ; i<nums.size() ; i++){
//            if(nums[i] == 0){
//                pin_first++;
//            }
//            if(nums[i] == 2){
//                pin_last--;
//            }
//            
//        }
//        for(int j=0 ; j<nums.size(); j++){
//            if(j<pin_first)
//                nums[j] = 0;
//            else if(j>=pin_last)
//                nums[j] = 2;
//            else
//                nums[j] = 1;
//        }
//    }
//};
//
//int main(){
//    
//    vector<int> input;
//    
//    input.push_back(0);
//    input.push_back(0);
//    
//    Solution s;
//    s.sortColors(input);
//    
//    
//    return 0;
//}