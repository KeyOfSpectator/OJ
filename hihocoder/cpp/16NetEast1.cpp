////
////  16NetEast1.cpp
////  hihoCoder
////
////  Created by 冯诗淳 on 16/3/15.
////  Copyright © 2016年 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//vector<vector<int>> copy_original(vector<vector<int>> m_o , int N , int M){
//    vector<vector<int>> m = vector<vector<int>>(M , vector<int>(N , 0));
//    for(int i=0 ; i<M ; i++){
//        for(int j=0 ; j<N ; j++){
//            m[i][j] = m_o[i][j];
//        }
//    }
//    return m;
//}
//
//bool checkMove(vector<vector<int>> &m , char move , int &y , int &x , int &xt , int &yt , int N , int M){
//    if(move == 'l'){            // LEFT
//        if(y>0 && m[x][y-1]==4){        //  barries
//            return true;
//        }
//        else if(y>0 && (m[x][y-1] == 0 || m[x][y-1] == 2)){ //  empty and moveto
//            m[x][y] = 0;
//            m[x][y-1] = 1;
//            y = y-1;
//            return true;
//        }
//        else if(y==0){                  // wall do nothing
//            return true;
//        }
//        else if(y>0 && m[x][y-1] == 3){     // touch the box
//            if(y-1==0){                     // box near the wall
//                return true;
//            }
//            else if((m[x][y-2] == 0 ) || (m[x][y-2] == 2)){ // push the box
//                m[x][y] = 0;
//                m[x][y-1] = 1;
//                m[x][y-2] = 3;
//                y--;
//                yt--;
//                return true;
//            }
//            else{                                       // box near barries
//                return true;
//            }
//        }
//    }
//    else if (move == 'u'){      //  UP
//        
//        if(x>0 && (m[x-1][y] == 0 || m[x-1][y] == 2 )){     // empty moveto
//            m[x][y] = 0;
//            m[x-1][y] = 1;
//            x--;
//            return true;
//        }
//        else if(x>0 && m[x-1][y] == 3){
//            if(x>1 && (m[x-2][y] == 0 || m[x-2][y] == 2)){  // push box
//                m[x][y]  = 0;
//                m[x-1][y] = 1;
//                m[x-2][y] = 3;
//                x--;
//                xt--;
//                return true;
//            }
//        }
//        return true;
//    }
//    else if(move == 'r'){       //  RIGHT
//        
//        if(y<M && (m[x][y+1] == 0 || m[x][y+1] == 2)){       // empty moveto
//            m[x][y] = 0;
//            m[x][y+1] = 1;
//            y++;
//            return true;
//        }
//        else if(y<M && m[x][y+1] == 3){
//            if(y<(M-1) && (m[x][y+2] == 0 || m[x][y+2] == 2)){
//                m[x][y] = 0;
//                m[x][y+1] = 1;
//                m[x][y+2] = 3;
//                y++;
//                yt++;
//                return true;
//            }
//        }
//        return true;
//        
//    }
//    else if(move == 'd'){       //  DOWN
//        
//        if(x<N && (m[x+1][y] == 0 || m[x+1][y] == 2 )){         // empty moveto
//            m[x][y] = 0;
//            m[x+1][y] = 1;
//            x++;
//            return true;
//        }
//        else if(x<N && m[x+1][y] == 3){
//            if(x<(N-1) && (m[x+2][y]==0 || m[x+2][y]==2 )){
//                m[x][y] = 0;
//                m[x+1][y] = 1;
//                m[x+2][y] = 3;
//                x++;
//                xt++;
//                return true;
//            }
//        }
//        return true;
//        
//    }
//    return true;   // ERROR
//  
//}
//
//int main(){
//    
//    freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    int N , M , S;
//    int x_o = 0 , y_o = 0;
//    int x_b = 0 , y_b = 0;
//    int x_t = 0 , y_t = 0;
//    while(scanf("%d %d %d\n" , &N , &M , &S) != EOF){
//        vector<vector<int>> m_original = vector<vector<int>>(M , vector<int>(N , 0));
//        for(int i=0 ; i<M ; i++){
//            for(int j=0 ; j<N ; j++){
//                char tmp;
//                scanf("%c" , &tmp);
//                if(tmp == '1'){
//                    x_o = j;
//                    y_o = i;
//                }
//                if(tmp == '3'){
//                    x_b = j;
//                    y_b = i;
//                }
//                if(tmp == '2'){
//                    x_t = j;
//                    y_t = i;
//                }
//                m_original[i][j] = tmp-'0';
//            }
//            getchar();
//        }
//        
//        for(int i=0 ; i<S ; i++){
//            int x = x_o , y = y_o;
//            int xt = x_b , yt = y_b;
//            vector<vector<int>> m = copy_original(m_original , N , M);
//            
//            int move_num;
//            scanf("%d" , &move_num);
//            getchar();
//            
//            bool flag = true;
//            
//            for(int i=0 ; flag && i<move_num ; i++){
//                char move;
//                scanf("%c" , &move);
//                
//                flag = checkMove(m , move , x , y , xt , yt , N , M);
//                
//            }
//            
//            if(xt==x_t && yt==y_t){
//                printf("YES\n");
//            }
//            else{
//                printf("NO\n");
//            }
//            getchar();
//        }
//        
//        
//    }
//    
//
//    return 0;
//}