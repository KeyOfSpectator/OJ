////
////  85_Bulb Switcher.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 16/1/14.
////  Copyright © 2016年 KeyOfSpectator. All rights reserved.
////
//
//
//// Brainteaser 闹经急转弯 !!!
//
//#include <stdio.h>
//#include <vector>
//#include <math.h>
//using namespace std;
//
//class Solution_wrongtime {
//public:
//    int bulbSwitch(int n) {
//        if(n<=2) return 1;
//        vector<int> list = vector<int>(n , 0);
//        int ret = 0; // 2 is off
//        for(int i=2 ; i<=n ; i++){
//            int step = i;
//            while(step <= n){
//                list[step-1] += 1;
//                step += i;
//            }
//            if(list[i-1]%2 == 0)
//                ret ++;
//        }
//        return ret;
//    }
//};
//
//class Solution1 {
//public:
//    vector<int> cal_prime(int max){
//        vector<int> prime_list;
//        vector<bool> prime_flag = vector<bool>(max , true);
//        for(int i=2 ; i<=max ; i++){
//            bool flag = true;
//            if(!prime_flag[i-1]) continue;
//            for(int j=2 ; j<=sqrt(i) ; j++){
//                if(i%j==0){
//                    flag = false;
//                    break;
//                }
//            }
//            if(flag)
//                prime_list.push_back(i);
//        }
//        return prime_list;
//    }
//    int bulbSwitch(int n) {
//        if(n<=2) return 1;
//        vector<int> prime_list = cal_prime(n);
//        int ret = 1; // 2
////        for(int i=3 ; i<=n ; i++){
////            if()
////        }
//        return ret;
//    }
//};
//
//class Solution {
//public:
//    int bulbSwitch(int n) {
//        int ret = 0;
//        for(int i=1 ; i*i<=n ; i++){
//            ret++;
//        }
//        return ret;
//    }
//};
//
//int main(){
//    
//    Solution s;
//    int ret = s.bulbSwitch(9999999);
//    printf("%d\n" , ret);
//
//    return 0;
//}