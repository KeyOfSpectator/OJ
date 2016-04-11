//#include<iostream>
//#include<cstring>
//#include<cstdio>
//using namespace std;
//const int N = 500;
//long long sum[N], up[N], down[N];
//int v[N][N];
//
//inline long long max(long long x, long long y) {
//    return x>y?x:y;
//}
//// go down
//inline void goDown(long long sum[], long long down[], int j, int start, int end) {
//    for(int i = start; i <= end; i++) {
//        if(v[i][j] == -1) continue;
//        if(down[i-1] != -1) {
//            down[i] = max(down[i], down[i-1] + v[i][j]);
//            sum[i] = max(down[i], sum[i]);
//        }
//    }
//}
//// go up
//inline void goUp(long long sum[], long long up[], int j, int start, int end) {
//    for(int i = start; i >= end; i--) {
//        if(v[i][j] == -1) continue;
//        if(up[i+1] != -1) {
//            up[i] = max(up[i], up[i+1] + v[i][j]);
//            sum[i] = max(up[i], sum[i]);
//        }
//    }
//}
//void update(long long sum[], int j, int n) {
//    // go right
//    int uptel = n, downtel = -1;
//    for(int i = 0; i < n; i++) {
//        if(v[i][j] != -1 && sum[i] != -1) {
//            if(uptel == n) uptel = i;
//            downtel = i;
//            up[i] = down[i] = sum[i] = sum[i] + v[i][j];
//        } else
//            up[i] = down[i] = sum[i] = -1;
//    }
//    // go up
//    goUp(sum, up, j, n-2, 0);
//    // go down
//    goDown(sum, down, j, 1, n-1);
//    // teleport
//    if(down[0] == -1 && sum[n-1] != -1 && v[0][j] != -1) { // down to up
//        down[0] = v[0][j];
//        sum[0] = max(down[0], sum[0]);
//        goDown(sum, down, j, 1, downtel-1);
//    } else if(up[n-1] == -1 && sum[0] != -1 && v[n-1][j] != -1) { // up to down
//        up[n - 1] = v[n-1][j];
//        sum[n-1] = max(up[n - 1], sum[n-1]);
//        goUp(sum, up, j, n-2, uptel+1);
//    }
//}
//int main() {
//    // debug
//    //freopen("/Users/KeyOfSpectator/input", "r", stdin);
//
//    int n, m;
//    // input data
//    scanf("%d%d", &n, &m);
//    for(int i = 0; i < n; i++)
//        for(int j = 0; j < m; j++)
//            scanf("%d", v[i] + j);
//    // initialization
//    int r = 0;
//    memset(sum, 0, sizeof(sum));
//    // start dynamic program
//    for(int j = 0; j < m; j++)
//        update(sum, j, n);
//    // find the maximum value
//    long long ans = -1;
//    for(int i = 0; i < n; i++)
//        ans = max(ans, sum[i]);
//    // output answer
//    printf("%lld\n", ans);
//    return 0;
//}