////
////  87_Maximum Product of Word Lengths.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 16/1/14.
////  Copyright © 2016年 KeyOfSpectator. All rights reserved.
////
//
//// bit manipulation !
//
//// 首先我尝试暴力 O n^2*k (k是字符串平均长度)
//
//// 然后通过bit相与（&） O n^2
//
//#include <stdio.h>
//#include <vector>
//#include <unordered_set>
//#include <algorithm>
//#include <string>
//using namespace std;
//
//bool cmp(string word1 , string word2){
//    return word1.length() > word2.length();
//}
//
//class Solution_TimeLimit {
//public:
//    unordered_set<int> cal_hashlist(string str){
//        unordered_set<int> ret;
//        for(int i=0 ; i<str.length() ; i++){
//            int char_tmp = str[i]-'a';
//            if(ret.find(char_tmp) == ret.end()){
//                ret.insert(char_tmp);
//            }
//        }
//        return ret;
//    }
//    
//    bool check(unordered_set<int> str1_set , string str2){
//        for(int i=0 ; i<str2.length() ; i++){
//            if(str1_set.find(str2[i]-'a') != str1_set.end()){
//                return false;
//            }
//        }
//        return true;
//    }
//    
//    int maxProduct(vector<string>& words) {
//        
//        if(words.size() <= 1) return 0;
//        int ret = 0;
//        
//        sort(words.begin() , words.end() , cmp);
//        for(int i=0 ; i<words.size()-1 ; i++){
//            unordered_set<int> hash_list = cal_hashlist(words[i]);
//            for(int j=i+1 ; j<words.size() ; j++){
//                if(check( hash_list , words[j] )){
//                    return words[i].length() * words[j].length();
//                }
//            }
//        }
//        return 0;
//    }
//};
//
//class Solution {
//public:
//    int cal_bit(string str){
//        int ret = 0;
//        for(int i=0 ; i<str.length() ; i++){
//            int c = str[i] - 'a' + 1;
//            ret = ret | (1<<c);
//        }
//        return ret;
//    }
//    
//    bool check(int bit1 , int bit2){
//        int tmp = (bit1 & bit2);
//        if( (bit1 & bit2) == 0)                 // &
//            return true;
//        return false;
//    }
//    
//    vector<int> cal_bits(vector<string> input){
//        vector<int> ret;
//        for(int i=0 ; i<input.size() ; i++){
//            ret.push_back(cal_bit(input[i]));
//        }
//        return ret;
//    }
//    
//    int maxProduct(vector<string>& words) {
//        if(words.size() <= 1) return 0;
//        int ret = 0;
//        
//        sort(words.begin() , words.end() , cmp);
//        
//        vector<int> bit_list = cal_bits(words);
//        
//        int max = 0;
//        for(int i=0 ; i<words.size()-1 ; i++){
//            if(words[i].length() * words[i].length() < max) break;
//            for(int j=i+1 ; j<words.size() ; j++){
//                if(check( bit_list[i] , bit_list[j] )){
//                    int tmp = words[i].length() * words[j].length();
//                    if(tmp > max)
//                        max = tmp;
//                }
//            }
//        }
//        return max;
//    }
//};
//
//int main(){
//    
//    Solution s;
//    
//    vector<string> input;
//    input.push_back("a");
//    input.push_back("ab");
//    input.push_back("abc");
//    input.push_back("d");
//    input.push_back("cd");
//    input.push_back("bcd");
//    input.push_back("abcd");
//    
//    int ret = s.maxProduct(input);
//
//    printf("%d\n" , ret);
//
//    return 0;
//}