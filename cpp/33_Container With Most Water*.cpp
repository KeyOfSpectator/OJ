////
////  33_Container With Most Water.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/9.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//// 2sum问题！！！
//// 引伸 ksum
//// 需要 复杂度 <n^2 
//
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//class Solution1_n2 {
//public:
//    int min(int x , int y){
//        return x<y?x:y;
//    }
//    
//    int abs(int x){
//        return x>0?x:-x;
//    }
//    
//    int maxArea(vector<int>& height) {
//        int max = 0;
//        for(int i=0 ; i<height.size() ; i++){
//            for(int j=0 ; j<i ; j++){
//                int area = min(height[i] , height[j]) * (abs(i-j));
//                if(max<area)
//                    max = area;
//            }
//        }
//        return max;
//    }
//};
//
//class Solution2_n2 {
//public:
//    int maxArea(vector<int>& height) {
//        int max = 0;
//        for(int i=0 ; i<height.size() ; i++){
//            for(int j=height.size()-1 ; j>i ; j--){
//                if(height[j]>height[i]){
//                    int area = height[i] * (j-i);
//                    if(max<area)
//                        max = area;
//                }
//            }
//        }
//        for(int i=height.size()-1 ; i>=0 ; i--)
//        {
//            for(int j=0 ; j<i ; j++)
//            {
//                if(height[i]<height[j]){
//                    int area = height[i] * (i-j);
//                    if(max<area)
//                        max = area;
//                }
//            }
//        }
//        return max;
//    }
//};
//
//class Solution {
//public:
//    int min(int x , int y){
//        return x<y?x:y;
//    }
//    
//    int abs(int x){
//        return x>0?x:-x;
//    }
//    
//    int maxArea(vector<int>& height) {
//        int l = 0 , r = height.size()-1;
//        int max = 0;
//        while(l<r){
//            int area = min(height[l] , height[r]) * (abs(r-l));
//            if(max < area)
//                max = area;
//            if(height[l] < height[r]){
//                l++;
//            }
//            else{
//                r--;
//            }
//        }
//        return max;
//    }
//};
//
//int main(){
//
//
//    return 0;
//}