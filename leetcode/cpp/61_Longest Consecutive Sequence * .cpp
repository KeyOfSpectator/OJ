////
////  61_Longest Consecutive Sequence.cpp
////  Leetcode
////
////  Created by 冯诗淳 on 15/10/15.
////  Copyright © 2015年 KeyOfSpectator. All rights reserved.
////
//
//
//
//#include <stdio.h>
//#include <vector>
//#include <unordered_set>
//using namespace std;
//
//#define MAX_NODE 10000
//#define MAX_NUM 100000
//
//int treeNode[MAX_NODE];  // treeNode[i] 纪录 i节点的并查集父节点的index
//int size_list[MAX_NODE]; // 若i为并查集的根节点， size_list[i]值为子树节点数
//int hash_list[2*MAX_NUM]; // 纪录 num －》 index 映射 若num没有值 为－1 否则纪录该num在nums中index
//int ans;
//
//// 思路
//// 采用并查集
//// 遍历list
//// 想多了
//class Solution_runtime_error {
//public:
//    
//    int findRoot(int x){
//        if(treeNode[x] == x) return x;
//        int root = findRoot(treeNode[x]);
//        treeNode[x] = root;
//        return root;
//    }
//    
//    int longestConsecutive(vector<int>& nums) {
//        
//        // init
//        int ans = 0;
//        memset(size_list , 0 , sizeof(size_list));
//        memset(hash_list , -1 , sizeof(size_list));
//        for(int i=0 ; i<nums.size() ; i++){
//            treeNode[i] = i;
//        }
//        
//        for(int i=0 ; i<nums.size() ; i++){
//            size_list[i] = 1;
//            hash_list[nums[i]] = i;
//            
//            // left but not right
//            if( hash_list[nums[i] - 1] >=0 &&  !(hash_list[nums[i] + 1]>=0)){
//                int root = findRoot(hash_list[nums[i]-1]);
//                treeNode[i] = root;
//                size_list[root] += 1;
//                if(ans < size_list[root])
//                    ans = size_list[root];
//            }
//            
//            // right but not left
//            if( hash_list[nums[i] + 1]>=0 &&  !(hash_list[nums[i] - 1]>=0) ){
//                int root = findRoot(hash_list[nums[i]+1]);
//                treeNode[i] = root;
//                size_list[root] += 1;
//                if(ans < size_list[root])
//                    ans = size_list[root];
//            }
//            
//            // left ans right
//            if( hash_list[nums[i] - 1]>=0 && hash_list[nums[i] + 1]>=0){
//                int root1 = findRoot(hash_list[nums[i]-1]);
//                int root2 = findRoot(hash_list[nums[i]+1]);
//                
//                if(size_list[root1] < size_list[root2]){
//                    treeNode[root1] = root2;
//                    size_list[root2] += size_list[root1];
//                    treeNode[i] = root2;
//                    size_list[root2] += 1;
//                    if(ans < size_list[root2])
//                        ans = size_list[root2];
//                }
//                else{
//                    treeNode[root2] = root1;
//                    size_list[root1] += size_list[root2];
//                    treeNode[i] = root1;
//                    size_list[root1] += 1;
//                    if(ans < size_list[root1])
//                        ans = size_list[root1];
//                }
//                
//            }
//            
//        }
//        return ans;
//        
//    }
//};
//
//class Solution {
//public:
//    unordered_set<int> s;
//    
//    int bound(int x , bool left){
//        int cnt = 0;
//        for(auto it = s.find(x) ; it != s.end() ; it = s.find(x)){
//            s.erase(it);
//            if(left)
//                x--;
//            else
//                x++;
//            cnt++;
//        }
//        return cnt;
//    }
//    
//    int longestConsecutive(vector<int>& nums) {
//        if(nums.size() == 1) return 1;
//        s.clear();
//        for(int i=0 ; i<nums.size() ; i++){
//            s.insert(nums[i]);
//        }
//        int ans = 0;
//        for(int i=0 ; i<nums.size() ; i++){
//            int tmp = bound(nums[i] /* !!! 没有－1 */, true) + bound(nums[i]+1 , false );
//            if(ans < tmp)
//                ans = tmp;
//        }
//        return ans;
//    }
//};
//
//int main(){
//    
//    vector<int> input;
//    input.push_back(0);
//    input.push_back(0);
////    input.push_back(200);
////    input.push_back(1);
////    input.push_back(3);
////    input.push_back(2);
//    
//    Solution s;
//    s.longestConsecutive(input);
//
//    return 0;
//}