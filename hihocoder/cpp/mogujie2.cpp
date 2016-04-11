////
////  mogujie2.cpp
////  hihoCoder
////
////  Created by 冯诗淳 on 16/3/31.
////  Copyright © 2016年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//
//int max(int a , int b){
//    return a>b?a:b;
//}
//
//int main(){
//
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    int v;
//    scanf("%d" , &v);
//    
//    vector<int> weight;         // 0~8
//    
//    vector<int> tab = vector<int>(v+1 , 0);
//    
//    //vector<vector<int>> ans = vector<vector<int>>(v , vector<int>());
//    
//    for(int i=0 ; i<9 ; i++){
//        int tmp_weight;
//        scanf("%d" , &tmp_weight);
//        weight.push_back(tmp_weight);
//    }
//    
//    for(int i=0 ; i<9 ; i++){   //1~9
//        
//        for(int j=weight[i] ; j<=v ; j++){
//            
//            tab[j] = max(  tab[j-weight[i]]*10+(i+1)  ,  tab[j] );
//            
//        }
//        
//    }
//    
//    int m = -1;
//    for(int i=0 ; i<=v ; i++){
//        if(tab[i] > m){
//            m = tab[i];
//        }
//    }
//    
//    if(m <= 0)
//        printf("-1\n");
//    else
//        printf("%d\n" , m);
//
//    return 0;
//}