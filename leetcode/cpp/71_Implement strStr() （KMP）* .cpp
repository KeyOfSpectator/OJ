////
////  71_Implement strStr().cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/23.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <string>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    // KMP
//    vector<int> calNext(string needle){
//        vector<int> next(needle.length()+1 , 0);
//        int j=0;
//        // init next[0]=next[1]=0; because next[1] wont be give a value
//        for(int i=1 ; i<needle.length() ; i++){
//            while(j>0 && needle[i]!=needle[j]){
//                j = next[j];
//            }
//            if(needle[i] == needle[j]){
//                j++;
//            }
//            next[i+1] = j;
//        }
//        return next;
//    }
//    
//    int search(string haystack , string needle , vector<int> next){
//        
//        int ans = -1;
//        int j=0;
//        
//        if(needle.length() == 0)
//            return 0;
//        
//        for(int i=0 ; i<haystack.length() ; i++){
//            while(j>0 && haystack[i]!=needle[j]){
//                j = next[j];
//            }
//            if(haystack[i] == needle[j])
//                j++;
//            if(j==needle.length()){
//                ans = i-j+1;
//                break;
//            }
//    
//        }
//        return ans;
//    }
//    
//    int strStr(string haystack, string needle) {
//        int ans;
//        
//        Solution s;
//        vector<int> next = s.calNext(needle);
//        ans = s.search(haystack, needle, next);
//        
//        return ans;
//    }
//};
//
//int main(){
//    
//    string s1 = "a";
//    string s2 = "";
//    
//    Solution s;
//    s.strStr(s1, s2);
//    
//
//    return 0;
//}