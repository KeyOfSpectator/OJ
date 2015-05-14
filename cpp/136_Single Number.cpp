///*
// * 163_Single Number.cpp
// *
// *  Created on: 2015Äê4ÔÂ4ÈÕ
// *      Author: fsc
// */
//#include <stdio.h>
//#include <iostream>
//#include <map>
//using namespace std;
//
////class Solution {
////public:
////    int singleNumber(int A[], int n) {
////    	map<int,int> m1;
////    	for(int i=0;i<n;i++)
////    	{
////    		m1[A[i]]++;
////    	}
////    	for(map<int,int>::iterator it = m1.begin() ; it!= m1.end() ; it++)
////    	{
////    		if(it->second == 1)
////    		{
////    			return it->first;
////    		}
////    	}
////    	return 0;
////    }
////};
//
//class Solution {
//public:
//    int singleNumber(int A[], int n) {
//    	int tmp = 0;
//    	for(int i=0;i<n;i++)
//    	{
//    		tmp ^= A[i];
//    	}
//    	return tmp;
//    }
//};
//
//int main()
//{
//	int A[7] = {1,1,2,3,2,4,4};
//	Solution solution;
//	int result = solution.singleNumber( A , 7 );
//	printf("%d\n",result);
//}
//
//
//
