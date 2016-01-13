///*
// * 122_Best Time to Buy and Sell Stock II.cpp
// *
// *  Created on: 2015Äê4ÔÂ7ÈÕ
// *      Author: fsc
// */
//
//#include <stdio.h>
//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    int maxProfit(vector<int> &prices) {
//    	int sum = 0;
//    	if(prices.size()==0)
//    	{
//    		return 0;
//    	}
//    	for(int i=0 ; i<prices.size()-1 ; i++)
//    	{
//    		if(prices[i]<=prices[i+1])
//    		{
//    			sum += prices[i+1] - prices[i];
//    		}
//    	}
//    	return sum;
//    }
//};
//
//int main()
//{
//	vector<int> prices;
//	prices.push_back(1);
//	prices.push_back(3);
//	prices.push_back(7);
//	prices.push_back(2);
//	prices.push_back(4);
//	prices.push_back(5);
//
//	Solution s;
//	int res;
//	res = s.maxProfit(prices);
//	printf("%d\n" , res);
//
//	return 0;
//}
//
//
