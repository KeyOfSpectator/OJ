////
////  1014.cpp
////  hihoCoder
////
////  Created by 冯诗淳 on 16/3/18.
////  Copyright © 2016年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string>
//#include <iostream>
//using namespace std;
//
////string str[100001];
////string query[100001];
//
//struct Node{
//    int c;
//    int count;
//    Node* next[27];
//    Node(int val): c(val),count(0) {}
//};
//
//Node* newNode(int c){
//    Node* newNode = new Node(c);
//    for(int i=0 ; i<27 ; i++){
//        newNode->next[i] = NULL;
//    }
//    return newNode;
//}
//
//void insert_tree(Node* root , string str){
//    Node* tmp = root;
//    for(int i=0 ; i<str.length() ; i++){
//        int c = str[i] - 'a';
//        tmp->count++;
//        if(tmp->next[c]!= NULL){
//            tmp = tmp->next[c];
//        }
//        else{
//            tmp->next[c] = newNode(c);
//            tmp = tmp->next[c];
//        }
//    }
//    tmp->count++;
//    return;
//}
//
//int query_tree(Node* root , string str){
//    Node* tmp = root;
//    for(int i=0 ; i<str.length() ; i++){
//        int c = str[i] - 'a';
//        if(tmp->next[c] == NULL)
//            return 0;
//        else{
//            tmp = tmp->next[c];
//        }
//    }
//    return tmp->count;
//}
//
//
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    int n , m;
//    string str;
//    Node* root = newNode(0);
//    while(scanf("%d" , &n)!=EOF){
//        for(int i=0 ; i<n ; i++){
//            cin >> str;
//            insert_tree(root , str);
//            
//        }
//        scanf("%d" , &m);
//        for(int i=0 ; i<m ; i++){
//            cin >> str;
//            int ans = query_tree(root , str);
//            printf("%d\n" , ans);
//        }
//        
//    }
//
//    return 0;
//}