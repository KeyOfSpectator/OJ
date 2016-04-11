////
////  1.cpp
////  hihoCoder
////
////  Created by 冯诗淳 on 16/3/18.
////  Copyright © 2016年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//#include <cstring>
//using namespace std;
//
//int excpt[7][6] = {
//    1 , 4 , -1 , -1 , -1 , -1,
//    1 , 2 , 3, 7, -1 , -1,
//    5 , 6, -1 , -1 , -1 , -1,
//    0 , 1, 7 , -1 , -1 , -1,
//    1 , 3 , 4, 5, 7, 9,
//    2, -1 , -1 , -1 , -1, -1,
//    1, 4, 7, 9, -1 , -1
//};
//
//
//int getNum(int N , int col){
//    while(col--){
//        N /= 10;
//    }
//    return N;
//}
//
//int main(){
//
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    int S , K , N;
//    while(scanf("%d\n" , &S)!=EOF){
//
//        while(S--){
//        scanf("%d %d\n" , &K , &N);
//        vector<vector<int>> ret;
//        for(int j=0 ; j<K ; j++){
//            
//            vector<int> ret_each;
//           
//            bool isExcpt[10];
//            memset(isExcpt , 0 , sizeof(isExcpt));
//            
//            char c;
//            c = getchar();
//            
//            while(c != '\n'){
//                
//                if(c >= '0' && c<= '9'){
//                    
//                    for(int i=0 ; i<6 ; i++){
//                        int tmp = excpt[(c-'0')-1][i];
//                        if(tmp == -1)
//                            break;
//                        
//                        isExcpt[tmp] = true;
//                        
//                    }
//                    
//                }
//                
//                c = getchar();
//                if(c == EOF)
//                    break;
//            
//            }
//            
//            
//            int cnt = 0;
//            for(int i=0 ; i<10 ; i++){
//                if(isExcpt[i] == false)
//                    ret_each.push_back(i);
//            }
//            
//            ret.push_back(ret_each);
//            
//        }// end for
//            
//            int less_total = 0;
//            int total_total = 0;
//            bool flag = true;
//            
//            
//            for(int i=0 ; i<ret.size() ; i++){
//                int less = 0;
//                int total = 0;
//                bool equl = false;
//                
//                int min = N%10;
//                N /= 10;
//                
//                for(int k=0 ; k<ret[ret.size()-i-1].size() ; k++){
//                    if( ret[ret.size()-i-1][k] < min ){
//                        
//                        less++;
//                    }
//                    else if(ret[ret.size()-i-1][k] == min){
//                        equl = true;
//                    }
//                    total++;
//                        
//                }
//                
//                if(i==0){
//                    less_total = less;
//                    total_total = total;
//                    if(equl){
//                        less_total++;
//                        flag = true;
//                    }
//                    else
//                        flag = false;
//                }
//                else{
//                    if(equl){                           // equl
//                        flag = true;
//                    }
//                    else{
//                        flag = false;
//                        less_total = 0;
//                    }
//                    
//                    if(less > 0)
//                        less_total += less * total_total; // less
//                    
//                    total_total = total * total_total;
//                }
//                
//                
//               
//                
//            }
//            
//            if(flag = true){
//                less_total--;
//            }
//            
//            printf("%d\n" , less_total);
//            
//            
//    }
//        
//    
//    }
//    
//    
//
//    return 0;
//}