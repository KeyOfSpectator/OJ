////
////  test_KMP.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/23.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//#include <string>
//#include <iostream>
//using namespace std;
//
//
//class KMP_test{
//public:
//    // KMP
//    vector<int> getNext(string b)
//    {
//        int len=b.length();
//        int j=0;
//        
//        vector<int> next(len+1 , 0); //next表示长度为i的字符串前缀和后缀的最长公共部分，从1开始
//        
//        for(int i=1;i<len;i++)//i表示字符串的下标，从0开始
//        {
//            //j在每次循环开始都表示next[i]的值，同时也表示需要比较的下一个位置
//            while(j>0 && b[i]!=b[j])
//                j=next[j];
//            if(b[i]==b[j])
//                j++;
//            next[i+1]=j;
//        }
//        
//        return next;
//    }
//    
//    vector<int> search(string original, string find, vector<int> next)
//    {
//        vector<int> ans; // find position
//        
//        int j = 0;
//        for (int i = 0; i < original.length(); i++)
//        {
//            while (j > 0 && original[i] != find[j])
//                j = next[j];
//            if (original[i] == find[j])
//                j++;
//            if (j == find.length()) {
//                ans.push_back((i-j+1));
//                
//                cout << (original.substr(i - j + 1, i + 1)) << endl;
//                j = next[j];
//            }
//        }
//        
//        return ans;
//    }
//
//};
//
//
//int main(){
//    string s1 = "BBC ABCDAB ABCDABCDABDE";
//    string s2 = "ABCDABD";
//    
//    KMP_test s;
//    vector<int> next = s.getNext(s2);
//    
//    vector<int> ans = s.search(s1, s2, next);
//
//
//    return 0;
//}