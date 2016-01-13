///*
// * 96_Unique Binary Search Trees.cpp
// *
// *  Created on: 2015Äê4ÔÂ26ÈÕ
// *      Author: fsc
// */
//
//#include <stdio.h>
//#include <iostream>
//
//class Solution {
//public:
//	int map[1000] = {0};
//    int numTrees(int n) {
//    	int result = 0;
//    	result = recursion(n);
//    	return result;
//    }
//	int recursion(int n){
//		if(n<=1){
//			return 1;
//		}
//		else if(n==2){
//			return 2;
//		}
//		else{
//
//			if(map[n]>0){
//				return map[n];
//			}
//
//			int result =0;
//			for(int i=0;i<n;i++){
//				int left = recursion(i);
//				int right = recursion(n-i-1);
//				result += left * right;
//			}
//			map[n] = result;
//			return result;
//		}
//	}
//
//};
//int main(){
//	Solution solution;
//	int result;
//
//	int input = 3;
//
//	result = solution.numTrees(input);
//	printf("%d\n",result);
//	return 0;
//}
//
//
