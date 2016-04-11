////
////  wangchenmin2.cpp
////  hihoCoder
////
////  Created by 冯诗淳 on 16/3/22.
////  Copyright © 2016年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//
//struct Node {
//    Node* left;
//    Node* right;
//    int num;
//    Node(int x) : num(x),left(NULL),right(NULL){};
//};
//
//Node* getNode(){
//    int l , r , val;
//    scanf("%d %d %d" , &l , &r , &val);
//    
//}
//
//int main(){
//    
//    int l , r , val;
//    int rest_node = 0;
//    
//    Node* root;
//    Node* lastNode;
//    while(scanf("%d %d %d" , &l , &r , &val)){
//        
//        if(rest_node == 0){
//            root = new Node(val);
//            lastNode = root;
//        }
//        
//        // end case
//        if(l==-1 && r==-1){
//            return 0;
//        }
//        
//        rest_node += l;
//        rest_node += r;
//        
//        if(l != 0)
//            lastNode->left = getNode();
//        
//        
//    
//    
//    }
//
//    return 0;
//}