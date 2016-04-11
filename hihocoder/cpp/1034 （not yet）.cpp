////
////  1034.cpp
////  hihoCoder
////
////  Created by 冯诗淳 on 16/3/18.
////  Copyright © 2016年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//
//struct Node{
//    int s;
//    int m;
//    int r;
//}nodes[100001];
//
//
//
//
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    int n , m , t , l , r;
//    int t_p = 0;
//    while(scanf("%d" , &n)!=EOF){
//        for(int i=0 ; i<n; i++){
//            scanf("%d %d %d" , &nodes[i].s , &nodes[i].m , &nodes[i].r);
//            
//        }
//        scanf("%d" , &m);
//        int ans = 0;
//        for(int i=0 ; i<m ; i++){
//            scanf("%d %d %d" , &t , &l , &r);
//            int time = t-t_p;
//            t_p = t;
//            for(int j=l-1 ; j<r ; j++){
//                int tmp = nodes[j].s + time*nodes[j].r;
//                ans += (tmp > nodes[j].m? nodes[j].m : tmp);
//                nodes[j].s = 0;
//            }
//        }
//        printf("%d\n" , ans);
//        
//    
//    }
//    
//
//    return 0;
//}