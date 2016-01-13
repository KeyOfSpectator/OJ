////
////  24_Happy Number(NS).cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/9/28.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//// 若陷入循环 false
//
//#include <stdio.h>
//#include <set>
//using namespace std;
//
//set<int> hash_set;
//
//class Solution {
//public:
//    
//    int calculate(int num){
//        int sum = 0;
//        while(num!=0){
//            sum += (num%10) * (num%10);
//            num/=10;
//        }
//        return sum;
//    }
//    
//    bool isHappy(int n) {
//        if(n<1) return false;
//        if(n==1) return true;
//        
//        hash_set.clear();
////        int time = 10000000;
//        int tmp = n;
//        while(true)
//        {
//            tmp = calculate(tmp);
//            if(tmp == 1)
//                return true;
//            if(hash_set.find(tmp)!=hash_set.end()){
//                return false;
//            }
//            hash_set.insert(tmp);
//        }
//        return false;
//    }
//};
//
//int main(){
//    
//    int num = 3;
//    Solution s;
//    bool ans = s.isHappy(num);
//    
//    return 0;
//}