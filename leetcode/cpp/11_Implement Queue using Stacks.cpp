////
////  11_Implement Queue using Stacks.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/9/21.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#define MAX_LEN 10000
//
//class Queue {
//public:
//    
//    int queue[MAX_LEN];
//    int loc = 0;
//    
//    // Push element x to the back of queue.
//    void push(int x) {
//        queue[loc++] = x;
//    }
//    
//    // Removes the element from in front of queue.
//    void pop(void) {
//        for(int i=1 ; i<loc ; i++ ){
//            queue[i-1] = queue[i];
//        }
//        loc--;
//    }
//    
//    // Get the front element.
//    int peek(void) {
//        if(loc>0)
//            return queue[0];
//        else
//            return NULL;
//    }
//    
//    // Return whether the queue is empty.
//    bool empty(void) {
//        if(loc == 0)
//            return true;
//        else
//            return false;
//    }
//};
//
//int main(){
//
//    Queue q;
//    q.push(1);
//    q.push(2);
//    q.push(3);
//    int tmp = q.peek();
//    q.pop();
//    
//    
//    return 0;
//}