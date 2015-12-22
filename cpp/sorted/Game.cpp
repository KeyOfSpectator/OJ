////
////  Game.cpp
////
////
////  Created by fsc on 15/10/24.
////  Copyright 2015 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include<iostream>
//#include<cstring>
//#include<cstdio>
//using namespace std;
//#define MAX_NUM 501
//
//long long left_list[MAX_NUM];
//long long up[MAX_NUM];
//long long down[MAX_NUM];
//int cube[MAX_NUM][MAX_NUM];
//int N , M;
//
//int lowestCanAccess , highestCanAccess;
//
//    
//    inline long long max(long long x, long long y) {
//        return x>y?x:y;
//    }
//
//    inline void fromleft(int m , int n){
//        // update left_list[n] to present this line
//        if(cube[m][n]!=-1 && left_list[n]!= -1){
//            left_list[n] += cube[m][n];
//        }
//        else{
//            left_list[n] = -1;
//        }
//        up[n] = down[n] = left_list[n];
//    }
//    
//    inline void fromUP(int m , int n){
//        // top row
//        if(n == 0 && up[N-1]!=-1 ){
//            up[n] = max(up[n] , cube[m][n]);
//        }
//        else if(n==0){
//            up[n] = max(-1 , up[n]);
//        }
//        // up one is available and self is available
//        else if(up[n-1] != -1 && cube[m][n] != -1){
//            up[n] = max (up[n] , up[n-1] + cube[m][n] );
//        }
//        // from up is a block but self is not a block
//        // self is a block
//        else if(cube[m][n] == -1){
//            up[n] = -1;
//        }
//        left_list[n] = max(left_list[n] , up[n]);
//    }
//    
//    inline void fromDown(int m , int n){
//        // bottom row
//        if(n==N-1 && down[0]!=-1 ){
//            down[n] = max(down[n] , cube[m][n]);
//        }
//        else if(n==N-1){
//            down[n] = max(-1 , down[n]);
//        }
//        // down is available and self is available
//        else if( down[n+1] != -1 && cube[m][n] != -1){
//            down[n] = max( down[n] , down[n+1] + cube[m][n] );
//        }
//        // down one is a block or self is a block
//        else if(cube[m][n] == -1){
//            down[n] = -1;
//        }
//        left_list[n] = max(left_list[n] , down[n]);
//    }
//    
//    long long highestScore(){
//        memset(left_list , 0 , sizeof(left_list));
//        for(int i=0 ; i<M ; i++){
//            lowestCanAccess = highestCanAccess = -1;
//            
//            // From left_list
//            for(int j=0 ; j<N ; j++){
//                fromleft(i , j);
//                // cross the wall ,then bottem to up cant beyond the highest
//                if(highestCanAccess == -1 && left_list[j] > -1){
//                    highestCanAccess = j;
//                }
//            }
//            for(int j=N-1 ; j>=0 ; j--){
//                // cross the wall ,then up to down cant beyond the lowest
//                if(lowestCanAccess == -1 && left_list[j] > -1){
//                    lowestCanAccess = j;
//                }
//            }
//            
//            // Up to down
//            for(int j=highestCanAccess ; j<N ; j++){
//                fromUP(i , j);
//            }
//            for(int j=0 ; j<lowestCanAccess ; j++){
//                fromUP(i , j);
//            }
//            
//            // Down to up
//            for(int j=lowestCanAccess ; j>=0 ; j--){
//                fromDown(i , j);
//            }
//            for(int j=N-1 ; j>highestCanAccess ; j--){
//                fromDown(i , j);
//            }
//        }
//        
//        long long maxNum = -1;
//        for(int i=0 ; i<N ; i++){
//            maxNum = max(maxNum , left_list[i]);
//        }
//        return maxNum;
//    }
//
//
//int main(){
//    
//    // debug
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    scanf("%d %d" , &N , &M);
//
//    for(int i=0 ; i<M ; i++){
//        for(int j=0 ; j<N ; j++){
//            scanf("%d" , &cube[j][i]);
//        }
//    }
//
//    long long ans = highestScore();
//    printf("%lld\n" , ans);
//
//    return 0;
//}
//
////4 4
////-1 100 1 1
////1 -1 1 1
////1 2 1 1
////1 -1 1 1
////
//// 11
//
////4 4
////-1 10 -1 10
////-1 10 -1 10
////1 10 1 10
////1 2 10 1
////
////72
//
