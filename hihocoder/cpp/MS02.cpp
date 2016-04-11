////
////  MS01.cpp
////  hihoCoder
////
////  Created by 冯诗淳 on 16/4/6.
////  Copyright © 2016年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <string>
//#include <vector>
//#include <cmath>
//using namespace std;
//
//#define MAX_NUM 256*256*256*256;
////4294967296
////-611437212
//
////vector<int> h;
//
//int h[4294967296];
//int N , M;
//
//int getAddrNum(string add , int &indx){
//    int tmp = 0;
//    for(int i=indx ; i<add.length()&&add[i]!='.'&&add[i]!='/' ; i++){
//        tmp *= 10;
//        tmp += add[i] - '0';
//        indx = i;
//    }
//    indx++;
//    return tmp;
//}
//
//int getAddrMask(string add , int indx){
//    int ret = 0;
//    if(indx<add.length()){
//        //indx++;
//        for(int i = indx ; i<add.length() ; i++){
//            ret *= 10;
//            ret += add[i]-'0';
//        }
//        return ret;
//    }
//    else{
//        return 32;
//    }
//}
//
//vector<int> handleAddress(string add){
//    vector<int> addr = vector<int>(5 , 0);
//    //int addr[5];
//    //int mark;
//    int tmp = 0;
//    
//    int i=0;
//    for( int j = 0; j<4 ; j++){
//        addr[j] = getAddrNum(add , i);
//        i++;
//        //cout << i << endl;
//    }
//    
//    addr[4] = getAddrMask(add , i);
//    
//    
//    //cout << addr[0] << "." << addr[1] << "." << addr[2] << "." << addr[3] << "/" << addr[4] << endl;
//    
//    return addr;
//    
//    
//}
//
//void allow(vector<int> addr){
//    int mark = addr[4];
//    cout << addr[0] << "." << addr[1] << "." << addr[2] << "." << addr[3] << "/" << addr[4] << endl;
////    if(mark >= 0 && mark <= 4 ){
////        int tmp = 1 << (4-3);
////        int tmp1 = addr[0];
////        tmp = addr[0] & tmp;
////        cout << tmp << endl;
////    }
//    
//    long long tmp = (long long)addr[0] * 256*256*256 + addr[1] * 256*256 + addr[2] * 256 + addr[3];
//    //int tmp1 = 1 << addr[4];
//    //int tmp1 = tmp << addr[4];
//    //tmp1 = tmp & (1<<32);
//    
//    long long tmp1 = tmp >> (32-addr[4]);
//    
//
//    //tmp = tmp&tmp1;
//    
//    long long start = tmp1 * pow(2 , (32-addr[4]));
//    long long end = (tmp1+1) * pow(2 , 32-addr[4]) - 1;
//    
//    for(long long i=start ; i<end ; i++){
//        h[i] = 1;
//    }
//    
//}
//
//void deny(vector<int> addr){
//    int mark = addr[4];
//    
//    long long tmp = (long long)addr[0] * 256*256*256 + addr[1] * 256*256 + addr[2] * 256 + addr[3];
//    long long tmp1 = tmp >> (32-addr[4]);
//    
//    long long start = tmp1 * pow(2 , (32-addr[4]));
//    long long end = (tmp1+1) * pow(2 , 32-addr[4]) - 1;
//    
//    for(long long i=start ; i<end ; i++){
//        if(h[i] != 1)
//            h[i] = -1;
//    }
//    
//    
//    
//}
//
//bool check(vector<int> addr){
//    
//    //int mark = addr[4];
//    
//    long long tmp = (long long)addr[0]*256*256*256 + addr[1]*256*256 + addr[2]*256 + addr[3];
//    
//    //cout << tmp << endl;
//    
//    if(h[tmp] == -1)
//        return false;
//    
//    return true;
//    
//}
//
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    //h = vector<int>(256*256*256*256 , 0);
//    
//    while(scanf("%d %d" , &N , &M)!=EOF){
//    
//        // rules
//        for(int i=0 ; i<N ; i++){
//            
//            string input_command;
//            string add;
//            cin >> input_command;
//            cin >> add;
//            getchar();
//            //cout << input_command << add << endl;
//            if(input_command == "allow"){
//                
//                vector<int> addr = handleAddress(add);
//                
//                allow(addr);
//                
//            }
//            else{
//            
//                vector<int> addr = handleAddress(add);
//                
//                deny(addr);
//                
//            }
//            
//        
//        }
//        
//        
//        // Query
//        for(int i=0 ; i<M ; i++){
//            
//            string add;
//            cin >> add;
//            getchar();
//            
//            vector<int> addr = handleAddress(add);
//            bool ret = check(addr);
//            
//            if(ret)
//                cout << "YES" << endl;
//            else
//                cout << "NO" << endl;
//            
//        }
//    
//    }
//    
//
//    return 0;
//}