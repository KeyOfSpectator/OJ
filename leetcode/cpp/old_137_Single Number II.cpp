///*
// * 137_Single Number II.cpp
// *
// *  Created on: 2015��4��4��
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
////    	map<int,int> mp;
////    	for(int i=0;i<n;i++)
////    	{
////    		mp[A[i]]++ ;
////    	}
////    	for(map<int,int>::iterator it = mp.begin() ; it != mp.end() ; it ++)
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
//// int��32λ ÿλ�ֱ���� �ܱ�3�����ľ�˵���������Ǹ�����һλΪ0 ���ܱ�3�����ĸ�λΪ0
////class Solution {
////public:
////    int singleNumber(int A[], int n) {
////    	int ans = 0;
////    	for(int i=0;i<32;i++)
////    	{
////    		int bit_sing = 0 ;
////    		int bit = 1 << i;
////    		for(int j=0;j<n;j++)
////    		{
////    			int tmp_a = A[j];
////    			int tmp = tmp_a&bit;
////    			if(tmp) bit_sing++;
////    		}
////    		if(bit_sing % 3 != 0)
////    			ans |= bit;
////    	}
////    	return ans;
////    }
////};
//
//class Solution {
//public:
//    int singleNumber(int A[], int n) {
//
//    	return
//    }
//};
//
//int main(){
//	int A[10] = {1 , 2 , 3 , 1 , 3 , 4 , 2 , 3 , 2 , 1};
//
//	Solution s;
//	int res = s.singleNumber(A , 10);
//	printf("%d\n" , res);
//	return 0;
//}
//
//
