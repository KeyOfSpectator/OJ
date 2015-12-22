////
////  Travel Information Center.cpp
////
////
////  Created by fsc on 15/10/24.
////  Copyright  2015 KeyOfSpectator. All rights reserved.
////
//
//#include <stdio.h>
//#include <vector>
//using namespace std;
//#define MAX_N 100001
//#define INF 0x3f3f3f3f
//
//vector<int> ed[MAX_N];
//
//int curNode , indx;
//// Heavy Link
//int fa[MAX_N] , son[MAX_N];     // fa: the father of the node;                          son: the weight son
//int poster[MAX_N] , top[MAX_N]; // poster: the index of poster in the link;             top: the index of the first node in the link
//int idNode[MAX_N] , pos[MAX_N]; // idNode: the para is node index , value is node id     pos: vice versa
//// segment tree
//int size[MAX_N];                // size: the subTree node num
//int posTree[MAX_N];             // posTree: para is node id , value is Tree node id
//struct Node {
//    int ld, rd; // most left festive city, most right festive city
//    int lc, rc; // child
//    int l, r; // left index, right index;
//};
//Node tr[MAX_N*6]; // segment tree node list
//
//int N , M;
//
//int min(int x , int y){
//    return x<y?x:y;
//}
//
//// build segment tree:              x:tree node id  l:tree node id left segment r:tree node id right segment
//void buildSegmentTree(int x , int l , int r){
//    tr[x].ld = tr[x].rd = INF;
//    tr[x].l = l;
//    tr[x].r = r;
//    // leaf
//    if(l==r) {
//        tr[x].lc = tr[x].rc = -1;
//        posTree[ idNode[l] ] = x;
//    }
//    else{
//        tr[x].lc = curNode++;
//        tr[x].rc = curNode++;
//        int mid = (l+r) >> 1;
//        buildSegmentTree(tr[x].lc, l, mid);
//        buildSegmentTree(tr[x].rc, mid+1, r);
//    }
//}
//
//// change a node in segment tree:   x:link root id   p:target node id   dis:light son distance
//void updateSegmentTree(int x , int p , int dis){
//    // found it
//    if(tr[x].l == tr[x].r && tr[x].l == p){
//        tr[x].ld = tr[x].rd = min(tr[x].ld , dis);
//        return;
//    }
//    int mid = (tr[x].l + tr[x].r) >> 1;
//    if( p<=mid ){
//        updateSegmentTree(tr[x].lc, p, dis);
//        tr[x].ld = min(tr[x].ld, tr[tr[x].lc].ld);
//        tr[x].rd = min(tr[x].rd, tr[x].r-mid+tr[tr[x].lc].rd);
//    }
//    else{
//        updateSegmentTree(tr[x].rc, p, dis);
//        tr[x].ld = min(tr[x].ld, mid-tr[x].l+1+tr[tr[x].rc].ld);
//        tr[x].rd = min(tr[x].rd, tr[tr[x].rc].rd);
//    }
//}
//
//// query Segment tree to the leaf
//int querySegmentTree(int x , int p){
//    // found it
//    if(tr[x].l == p && tr[x].r == p){
//        return tr[x].ld;
//    }
//    int mid = (tr[x].l + tr[x].r) >> 1;
//    int ans = INF;
//    if(p <= mid){
//        ans = min( ans , querySegmentTree(tr[x].lc, p) );
//        ans = min( ans , mid+1-p+tr[tr[x].rc].ld );     // consider the right segment's ld
//    }
//    else{
//        ans = min( ans , querySegmentTree(tr[x].rc, p) );
//        ans = min( ans , p-mid+tr[tr[x].lc].rd );       // consider the left segment's rd
//    }
//    return ans;
//}
//
//// calculate the heavy link :       x:root id     f:father id
//void dfs(int x , int f){
//    fa[x] = f;
//    size[x] = 1;
//    son[x] = -1;
//    for(vector<int>::iterator it = ed[x].begin() ; it != ed[x].end() ; it++){
//        if(*it == f)
//            continue;
//        dfs(*it , x);
//        size[x] += size[*it];
//        if(son[x] == -1 || size[son[x]] < size[*it])
//            son[x] = *it;
//    }
//}
//
//// build trees:                     x: root id    f:father id
//void build(int x , int f){
//    int s = indx; // start index of the tree
//    // get heavy link
//    for(int i=x ; i!=-1 ; i = son[i]){
//        poster[i] = x;
//        top[i] = curNode;
//        idNode[indx] = i;
//        pos[i] = indx++;
//    }
//    // a heavy link build a segment tree
//    buildSegmentTree(curNode++ , s , indx-1);
//    // every light son build another segment tree
//    for(int i = x ; i!=-1 ; i = son[i]){
//        for(vector<int>::iterator it = ed[i].begin() ; it != ed[i].end() ; it++){
//            if(*it == son[i] || *it == f)
//                continue;
//            build(*it , i);
//        }
//        f = i;
//    }
//}
//
//
//// change a city to festival
//void insert(int x){
//    // update from x to x's ancestors
//    for(int i=x, dis = 0; i!= -1 ; i = fa[poster[i]]){
//        if(dis >= tr[posTree[i]].ld) break;
//        updateSegmentTree(top[i] , pos[i] , dis);
//        dis = tr[top[i]].ld + 1;
//    }
//}
//
//// query distance: the query city id
//int query(int x){
//    // query from x to x's ancestors
//    int ans = INF;
//    for(int i=x, dis = 0; i!= -1 ; i = fa[poster[i]]){
//        ans = min( ans , dis + querySegmentTree(top[i] , pos[i]) );
//        dis += pos[i] - tr[top[i]].l + 1;
//    }
//    return ans;
//}
//
//int main(){
//    // debug
//    //freopen("/Users/KeyOfSpectator/input", "r", stdin);
//    
//    scanf("%d %d" , &N , &M);
//    for(int i=1 ; i<N ; i++){
//        int a , b;
//        scanf("%d %d" , &a , &b);
//        ed[a].push_back(b);
//        ed[b].push_back(a);
//    }
//    // build trees
//    dfs(1 , -1);
//    curNode = 0;
//    indx = 0;
//    build(1 , -1);
//    
//    // insert No1 city
//    insert(1);
//    
//    // query
//    for(int i=0 ; i < M ; i++){
//        int q, c;
//        scanf("%d %d", &q , &c);
//        if(q==1)
//            insert(c);
//        else
//            printf("%d\n" , query(c));
//    }
//    return 0;
//}