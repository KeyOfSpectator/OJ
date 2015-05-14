//============================================================================
// Name        : test_cpp_1.cpp
// Author      : fsc
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <limits>
using namespace std;

class Solution {
public:
    int reverse(int x) {

    	if(x > 2147483647 || x < -2147483648){  //2^31-1
    		return 0;
    	}

    	int flag = 1;
    	if(x<0){
    		flag = -1;
    		x = -x;
    	}

    	int num = 0;
    	while(x>=10){
    		num = num*10+x%10;
    		x = x/10;
    	}
    	if(x>0){
    		num = num*10+x;
    	}


    	return num*flag;
    }
};

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	int test_ans;

	Solution test;

	test_ans = test.reverse(1534236469);

	cout << test_ans<<endl;

	int test1 = sizeof(int);
	cout <<"sizeof int "<<test1<<endl;
	// (numeric_limits<bool>::max)()
	cout <<"max num limit of int "<<(numeric_limits<int>::max)();

	cout <<"max num limit of int "<<(numeric_limits<int>::min)();

	return 0;
}
