///*
// * 191_Number_of_1_Bits.cpp
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
//	int hammingWeight(uint32_t n) {
//		int result = 0;
//		for (int i = 0; i < 32; i++) {
//			if (n & 1) {
//				result += 1;
//			}
//			n = n >> 1;
//		}
//		return result;
//	}
//};
//
//int main() {
//	Solution solution;
//	int result;
//
//	uint32_t input = 11;
//
//	result = solution.hammingWeight(input);
//	printf("%d\n", result);
//	return 0;
//}
//
