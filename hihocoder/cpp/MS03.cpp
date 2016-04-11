////
////  MS03.cpp
////  hihoCoder
////
////  Created by 冯诗淳 on 16/4/6.
////  Copyright © 2016年 KeyOfSpectator. All rights reserved.
////
//
//#include <iostream>
//#include<vector>
//#include<math.h>
//#include<stdio.h>
//#include<map>
//using namespace std;
//const int max_num = 110;
//const int M_S = 300;
//int board[max_num][max_num][2];
//int record[max_num][max_num];
//int result;
//int N, M;
//void bfs(int row, int col, int num, int direct) {
//    if(row == N - 1) {
//        for(int i = col; i < M; i++) num += record[N-1][i];
//        if(result > num) result = num;
//        return;
//    }
//    if(col == M - 1) {
//        for(int i = row; i < N; i++) num += record[i][M-1];
//        if(result > num) result = num;
//        return;
//    }
//    num += record[row][col];
//    if(num >= result)
//        return;
//    if(num >= board[row][col][direct])
//        return;
//    else
//        board[row][col][direct] = num;
//    
//    if(direct == 0) {
//        bfs(row, col+1, num, 0);
//        
//        if(record[row][col+1]) bfs(row+1, col, num, 1);
//        else bfs(row+1, col, num+1, 1);
//    }else {
//        bfs(row+1, col, num, 1);
//        if(record[row+1][col]) bfs(row, col+1, num, 0);
//        else bfs(row, col+1, num+1, 0);
//    }
//}
//int main()
//{
//    while(scanf("%d%d", &N, &M) != EOF) {
//        char s[150];
//        for(int a = 0; a < N; a++) {
//            scanf("%s", s);
//            for(int b = 0; b < M; b++) {
//                if(s[b] == '.') record[a][b] = 0;
//                else record[a][b] = 1;
//            }
//        }
//        for(int a = 0; a < N; a++) {
//            for(int b = 0; b < M; b++)
//                board[a][b][0] = board[a][b][1] = M_S;
//        }
//        result = 0;
//        for(int a = 0; a < M; a++) result += record[0][a];
//        for(int a = 1; a < N; a++) result += record[a][0];
//        bfs(0,0,0,0);
//        cout<<result<<endl;
//    }
//    return 0;
//}
