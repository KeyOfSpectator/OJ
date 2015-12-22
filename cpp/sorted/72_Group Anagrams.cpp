////
////  72_Group Anagrams.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/23.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//#include <string>
//#include <map>
//#include <algorithm>
//using namespace std;
//
//map<string , vector<string>> hash_map;
//
//class Solution {
//public:
//    vector<vector<string>> groupAnagrams(vector<string>& strs) {
//        hash_map.clear();
//        vector<vector<string>> ans;
//        if(strs.size() == 0) return ans;
//        
//        for(int i=0 ; i<strs.size() ; i++){
//            string tmp_str = strs[i];
//            string::iterator it = tmp_str.begin();
//            sort(it , it+tmp_str.length());
//            
//            map<string , vector<string>>::iterator it_map = hash_map.begin();
//            it_map = hash_map.find(tmp_str);
//            if(it_map != hash_map.end()){
//                it_map->second.push_back(strs[i]);
//            }
//            else{
//                pair<string , vector<string>> tmp_pair;
//                vector<string> tmp_vector;
//                tmp_vector.push_back(strs[i]);
//                tmp_pair.first = tmp_str;
//                tmp_pair.second = tmp_vector;
//                hash_map.insert(tmp_pair);
//            }
//            
//        }
//        
//        map<string , vector<string>>::iterator it_map = hash_map.begin();
//        for( ; it_map!=hash_map.end() ; it_map++){
//            vector<string> ans_str = it_map->second;
//            sort(ans_str.begin() , ans_str.end());
//            
//            ans.push_back(ans_str);
//        }
//        return ans;
//        
//    }
//};
//
//int main(){
//    
//    vector<string> input;
//
//    input.push_back("eat");
//    input.push_back("tea");
//    input.push_back("tan");
//    input.push_back("ate");
//    input.push_back("nat");
//    input.push_back("bat");
//    
//    Solution s;
//    s.groupAnagrams(input);
//
//    return 0;
//}