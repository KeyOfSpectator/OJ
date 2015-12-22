//
////
////  test_sstream.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/23.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//// 测试 stringstream
//
//#include <stdio.h>
//#include <string>
//#include <sstream>
//#include <iostream>
//using namespace std;
//
//class Test_sstream{
//public:
//    
//    // stringstream不会主动释放内存(或许是为了提高效率)，但如果你要在程序中用同一个流，反复读写大量的数据，将会造成大量的内存消 耗，因些这时候，需要适时地清除一下缓冲 (用 stream.str("") )
//    
//    // Split to words
//    void testInputAndWords(){
//        string s , word;
//        getline(cin , s);
//        stringstream stream(s);
//        cout << stream.str() << endl;
//        while(stream >> word){
//            cout << word << endl;
//        }
//        
//        // clear the sstream
//        cout<<"size of stream = "<<stream.str().length()<<endl;
//        stream.str("");
//        cout<<"size of stream = "<<stream.str().length()<<endl;
//    }
//    
//    // Change int to string
//    void testChangeFromInt(){
//        string num_str;
//        int num = 123;
//        
//        stringstream stream;
//        stream << num;
//        num_str = stream.str();
//        cout << num_str << endl;
//        
//        // clear the sstream
//        cout<<"size of stream = "<<stream.str().length()<<endl;
//        stream.str("");
//        cout<<"size of stream = "<<stream.str().length()<<endl;
//        
//    }
//    
//    // change string to int
//    void testChangeToInt(){
//        string num_str = "1234";
//        int num;
//        
//        stringstream stream;
//        stream << num_str;
//        stream >> num;
//        cout << num << endl;
//        
//        
//        // clear the sstream
//        cout<<"size of stream = "<<stream.str().length()<<endl;
//        stream.str("");
//        cout<<"size of stream = "<<stream.str().length()<<endl;
//    }
//
//};
//
//
//
//int main(){
//    
//    // shanghai    no1 school 1989
//    Test_sstream s;
//    s.testInputAndWords();
//    
//    s.testChangeFromInt();
//    
//    s.testChangeToInt();
//    
//    return 0;
//}