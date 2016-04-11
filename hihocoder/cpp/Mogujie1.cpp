////
////  Mogujie1.cpp
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
//int main(){
//
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    int T;
//    
//    while(scanf("%d" , &T)!=EOF){
//        
//        while(T--){
//            
//            int n;
//            scanf("%d" , &n);
//            vector<int> input;
//            
//            for(int i=0 ; i<n ; i++){
//                
//                int tmp;
//                scanf("%d" , &tmp);
//                input.push_back(tmp);
//                
//            }
//            
//            int ret = 0;
//            
//            for(int i=0 ; i<n ; i++){
//                
//                for(int j=0 ; j<n-i-1 ; j++){
//                    
//                    if(input[j] > input[j+1]){
//                        int tmp = input[j];
//                        input[j] = input[j+1];
//                        input[j+1] = tmp;
//                        
//                        ret++;
//                    }
//                    
//                }
//                
//            }
//            
//            
//            
//            printf("%d\n" , ret);
//        
//        
//        }
//    
//    }
//
//    return 0;
//}