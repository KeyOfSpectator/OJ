//
////
////  neteast_network1.cpp
////  hihoCoder
////
////  Created by 冯诗淳 on 16/3/21.
////  Copyright © 2016年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//struct Node{
//    int a;
//    int b;
//    int need;
//    Node(): a(0),b(0),need(0){}
//};
//
//int calNeet(Node tmp , int r , int avg){
//    if(tmp.a>r)
//        return 0;
//    if(avg > r)
//        return 0;
//    int ret = (avg-tmp.a)/tmp.b;
//    return ret;
//}
//
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    int n,r,avg;
//    while(scanf("%d %d %d" , &n , &r , &avg)!=EOF){
//        
////        vector<Node> nodes;
//        
//        int ret = 0;
//        
//        for(int i=0 ; i<n ; i++){
//            Node tmp;
//            scanf("%d %d" , &tmp.a , &tmp.b);
//            
//            ret += calNeet(tmp , r , avg);
//            
////            nodes.push_back(tmp);
//        }
//        
//        printf("%d\n" , ret);
//        
//    
//    
//    }
//
//    return 0;
//}