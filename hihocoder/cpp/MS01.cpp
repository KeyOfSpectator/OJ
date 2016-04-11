////
////  MS01.cpp
////  hihoCoder
////
////  Created by 冯诗淳 on 16/4/6.
////  Copyright © 2016年 KeyOfSpectator. All rights reserved.
////
//
//
//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//
//const int maxnum = 1e3 + 10;
//int N, P, W, H;
//int a[maxnum];
//
//int main() {
//    
//    int t;
//    cin >> t;
//    
//    while (t--) {
//        
//        scanf("%d %d %d %d", &N, &P, &W, &H);
//        
//        for (int i = 0; i < N; ++i) {
//            scanf("%d", &a[i]);
//        }
//        
//        int l = 1, r = min(W, H);
//        while (l <= r) {
//            int mid = (l+r) >> 1;
//            
//            int col = W/mid, rows_sum = 0;
//            for (int i = 0; i < N; ++i) {
//                int rows = ceil(1.0*a[i]/col);
//                rows_sum += rows;
//            }
//            
//            int pages = ceil(1.0*rows_sum/(H/mid));
//            
//            if (pages <= P)
//                l = mid+1;
//            else
//                r = mid-1;
//        }
//        printf("%d\n", r);
//    }
//    
//    return 0;
//}