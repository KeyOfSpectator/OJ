////
////  13_Peeking Iterator.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/9/21.
////  Copyright (c) 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//// Below is the interface for Iterator, which is already defined for you.
//// **DO NOT** modify the interface for Iterator.
//class Iterator {
//    struct Data;
//    Data* data;
//public:
//    Iterator(const vector<int>& nums);
//    Iterator(const Iterator& iter);
//    virtual ~Iterator();
//    // Returns the next element in the iteration.
//    int next();
//    // Returns true if the iteration has more elements.
//    bool hasNext() const;
//};
//
//
//class PeekingIterator : public Iterator {
//public:
//    
//    int tmp;
//    int peek_loc;
//    int iterator_loc;
//    
//    PeekingIterator(const vector<int>& nums) : Iterator(nums) {
//        // Initialize any member here.
//        // **DO NOT** save a copy of nums and manipulate it directly.
//        // You should only use the Iterator interface methods.
//        peek_loc = 0;
//        iterator_loc = 0;
//        tmp = 0;
//    }
//    
//    // Returns the next element in the iteration without advancing the iterator.
//    int peek() {
//        if(peek_loc == iterator_loc && Iterator::hasNext()){
//            tmp = Iterator::next();
//            iterator_loc++;
//        }
//        return tmp;
//        
//    }
//    
//    // hasNext() and next() should behave the same as in the Iterator interface.
//    // Override them if needed.
//    int next() {
//        if(peek_loc == iterator_loc && Iterator::hasNext()){
//            tmp = Iterator::next();
//            iterator_loc++;
//            peek_loc++;
//        }
//        else if(peek_loc != iterator_loc){
//            peek_loc++;
//            return tmp;
//        }
//        else{
//            return NULL;
//        }
//        return tmp;
//    }
//    
//    bool hasNext() const {
//        if(peek_loc == iterator_loc){
//            return  Iterator::hasNext();
//        }
//        else{
//            return true;
//        }
//    }
//};
//
//int main(){
//
//    
//    
//    return 0;
//}