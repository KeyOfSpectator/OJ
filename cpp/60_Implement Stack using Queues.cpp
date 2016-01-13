////
////  60_Implement Stack using Queues.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/15.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <queue>
//using namespace std;
//
//
//
//class Stack {
//public:
//    queue<int> q1;
//    queue<int> q2;
//    
//    // Push element x onto stack.
//    void push(int x) {
//        if(!q1.empty()){
//            q1.push(x);
//        }
//        else{
//            q2.push(x);
//        }
//    }
//    
//    // Removes the element on top of the stack.
//    void pop() {
//        if(!q1.empty()){
//            while(q1.size()!=1){
//                int tmp = q1.front();
//                q1.pop();
//                q2.push(tmp);
//            }
//            q1.pop();
//        }
//        else if(!q2.empty()){
//            while(q2.size() != 1){
//                int tmp = q2.front();
//                q2.pop();
//                q1.push(tmp);
//            }
//            q2.pop();
//        }
//    }
//    
//    // Get the top element.
//    int top() {
//        int ret = 0;
//        if(!q1.empty()){
//            while(q1.size()!=1){
//                int tmp = q1.front();
//                q1.pop();
//                q2.push(tmp);
//            }
//            ret = q1.front();
//            q1.pop();
//            q2.push(ret);
//        }
//        else if(!q2.empty()){
//            while(q2.size() != 1){
//                int tmp = q2.front();
//                q2.pop();
//                q1.push(tmp);
//            }
//            ret = q2.front();
//            q2.pop();
//            q1.push(ret);
//        }
//        return ret;
//    }
//    
//    // Return whether the stack is empty.
//    bool empty() {
//        return q1.empty()&&q2.empty();
//    }
//};
//
//int main(){
//    
//    Stack s;
//    s.push(2);
//    s.push(2);
//    int ans1 = s.top();
//    int ans2 = s.top();
//
//
//    return 0;
//}