///*
// * 171_Excel Sheet Column Number.cpp
// *
// *  Created on: 2015Äê4ÔÂ7ÈÕ
// *      Author: fsc
// */
//
//#include <stdio.h>
//#include <iostream>
//#include <string.h>
//using namespace std;
//
//class Solution {
//public:
//    int titleToNumber(string s) {
//    	int sum = 0;
//    	for(int i=s.length()-1;i>=0;i--){
//    		int val = int(s[i])-64;
//    		int lev = lev_cal(26 , (s.length()-i-1) );
//    		sum += val*lev;
//    	}
//    	return sum;
//    }
//    int lev_cal(int a , int m)
//    {
//    	int res = 1;
//    	if(m==0)
//    		return 1;
//    	for(int i=0;i<m;i++)
//    	{
//    		res *= a;
//    	}
//    	return res;
//    }
//};
//
//int main()
//{
//	string s = "AZ";
//	Solution solution;
//	int res;
//	res = solution.titleToNumber(s);
//
//	printf("%d\n" , res);
//
//	printf("test %c\n", s[0]);
//	printf("test %d\n", int(s[0])-64);
//}
