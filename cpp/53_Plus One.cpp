////
////  53_Plus One.cpp
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
//    vector<int> plusOne(vector<int>& digits) {
//        if(digits.size() == 0){
//            digits.push_back(1);
//            return digits;
//        }
//        int plusNum = 1;
//        for(int i=digits.size()-1 ; i>=0 ; i--){
//            digits[i] += plusNum;
//            plusNum = digits[i]/10;
//            digits[i] %= 10;
//        }
//        if(plusNum > 0)
//            digits.insert(digits.begin() , plusNum);
//        return digits;
//    }
//};
//
//int main(){
//    
//    vector<int> input;
//    input.push_back(9);
//    
//    Solution s;
//    s.plusOne(input);
//
//    return 0;
//}