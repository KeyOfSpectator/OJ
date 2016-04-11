////
////  MS02_03.cpp
////  hihoCoder
////
////  Created by 冯诗淳 on 16/4/10.
////  Copyright © 2016年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//struct Node{
//    
//    Node* zero;
//    Node* one;
//    
//    int isallow;  // 0 not set ; 1 allow ; 2 deny
//    
//    Node(int isA): isallow(isA),zero(NULL),one(NULL) {}
//    
//};
//
//struct Rule{
//    int* addrs;
//    int* addrs_bin;
//    int head;
//    bool isAllow;
//    
//    Rule(int* addrs_bin , int* addrs , int head , bool is): addrs_bin(addrs_bin),addrs(addrs) , head(head) , isAllow(is) {}
//    
//};
//
//int N, M;
//
////int rets[5];
//
//Rule parseAddr(string addr){
//    
//    //int rets[5];
//    int* addrs = new int[5];
//    
//    int cnt = 0;
//    int tmp = 0;
//    bool flag = false;
//    for(int i=0 ; i<addr.length() ; i++){
//        if(addr[i]=='.' || addr[i]=='/'){
//            if(addr[i] == '/') flag = true;
//            addrs[cnt] = tmp;
//            tmp = 0;
//            cnt++;
//        }
//        else{
//            tmp*=10;
//            tmp += (addr[i]-'0');
//        }
//    }
//    if(flag == true)
//        addrs[4] = tmp;
//    else{               // no /
//        addrs[3] = tmp;
//        addrs[4] = 32;
//    }
//    
//    // bin
//    
//    int* rets = new int[32];
//    
//    long long long_addr = (long long)addrs[0]*256*256*256 + addrs[1]*256*256 + addrs[2]*256 + addrs[3];
//    
//    for(int i=1 ; i<=32 ; i++){
//        rets[32 - i] = long_addr % 2;
//        long_addr = long_addr >> 1;
//    }
//    
////    // test
////    for(int i=0 ; i<32 ; i++){
////        cout << rets[i];
////    }
////    cout << endl;
//
//    
//    Rule ret = Rule(rets , addrs , addrs[4] , false);
//    
//    return ret;
//    
//}
//
//void storeRule(string cmd , string addr , Node* root){
//    
//    Rule r = parseAddr(addr);
//    
//    r.isAllow = (cmd=="allow");
//    
////    //test
////    for(int i=0 ; i<5 ; i++){
////        cout << r.addrs[i] << " ";
////    }
////    cout << " head: " << r.head << endl;
////    for(int i=0 ; i<32 ; i++){
////        cout << r.addrs_bin[i];
////    }
////    cout << endl;
////    //
//    
//    // insert tree
//    Node* tmp = root;
//    for(int i=0 ; i<r.head ; i++){
//        if(r.addrs_bin[i]==0){
//            if(tmp->zero == NULL){
//                tmp->zero = new Node(0);
//            }
//            tmp = tmp->zero;
//        }
//        else{
//            if(tmp->one == NULL){
//                tmp->one = new Node(0);
//            }
//            tmp = tmp->one;
//        }
//    }
//    if(tmp->isallow == 0){
//        if(r.isAllow)
//            tmp->isallow = 1;
//        else
//            tmp->isallow = 2;
//    }
//    
//    
////
////    
////    delete [] addrs;
////    
////    
////    cout << "release mem" << endl;
////    for(int i=0 ; i<5 ; i++){
////        cout << addrs[i] << " ";
////    }
////    cout << endl;
//    
//}
//
//void query(string addr , Node* root){
//    
//    Rule r = parseAddr(addr);
//    
//    bool ret = true;
//    
//    Node* tmp = root;
//    for(int i=0 ; i<=32 ; i++){
//        if(tmp->isallow > 0){
//            if(tmp->isallow == 1)
//                ret = true;
//            else
//                ret = false;
//        }
//        if(r.addrs_bin[i]==0){
//            if(tmp->zero == NULL)
//                break;
//            else
//                tmp = tmp->zero;
//        }
//        else{
//            if(tmp->one == NULL)
//                break;
//            else
//                tmp = tmp->one;
//        }
//    }
//    
//    // output
//    if(ret)
//        printf("YES\n");
//    else
//        printf("NO\n");
//    
//}
//
//string cmd;
//string addr;
//
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    scanf("%d %d" , &N , &M);
//    
//    Node root(0);
//    
//    while(N--){
//        
//        cin >> cmd;
//        cin >> addr;
//        
//        storeRule(cmd , addr , &root);
//        
//        //cout << cmd << " " << addr << endl;
//    }
//    
//    while(M--){
//        
//        cin >> addr;
//        
//        query(addr , &root);
//        
//    }
//
//
//    return 0;
//}