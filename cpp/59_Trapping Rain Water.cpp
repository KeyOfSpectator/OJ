////
////  59_Trapping Rain Water.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/14.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//// 思路：
//// 排序所有点
//// 取最高的 计算与所有其他点依次的积水
//// 其他点 从高到低排序 计算
//// 横坐标若计算过了就跳过
//
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//struct Bar{
//    int index;
//    int height;
//    Bar(int i , int h):index(i),height(h){}
//};
//
//vector<Bar> list_bar;
//bool mark[10000];
//
//bool cmp(Bar A , Bar B){
//    return A.height > B.height;
//}
//
//class Solution {
//public:
//    int min(int x  , int y){
//        return x<y?x:y;
//    }
//    
//    int max(int x  , int y){
//        return x>y?x:y;
//    }
//    
//    int trap(vector<int>& height) {
//        if(height.size()<=2) return 0;
//        
//        int ans = 0;
//        memset(mark , 0 , sizeof(mark));
//        
//        list_bar.clear();
//        for(int i=0 ; i<height.size() ; i++){
//            Bar tmp_bar = Bar(i , height[i]);
//            list_bar.push_back(tmp_bar);
//        }
//        sort(list_bar.begin() , list_bar.end() , cmp);
//        Bar highest = list_bar[0];
//        for(int i=1 ; i<list_bar.size() ; i++){
//            Bar lowBar = list_bar[i];
//            if(mark[lowBar.index] == true) continue;
//            for(int j= min(lowBar.index , highest.index) ; j< max(lowBar.index , highest.index) ; j++){
//                if(mark[j] == false){
//                    ans += ( lowBar.height - height[j] )>0 ? ( lowBar.height - height[j] ) : 0;
//                    mark[j] = true;
//                }
//            }
//        }
//        return ans;
//    }
//};
//
//int main(){
//    
//    vector<int> input;
//    input.push_back(0);
//    input.push_back(1);
//    input.push_back(0);
//    input.push_back(2);
//    input.push_back(1);
//    input.push_back(0);
//    input.push_back(1);
//    input.push_back(3);
//    input.push_back(2);
//    input.push_back(1);
//    input.push_back(2);
//    input.push_back(1);
//    
//    Solution s;
//    s.trap(input);
//
//    return 0;
//}