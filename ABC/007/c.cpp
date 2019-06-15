#include <bits/stdc++.h>

#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(), (x).end()

using namespace std;

template <typename T> T &chmin(T &a, const T &b) {return a = min(a, b);}
template <typename T> T &chmax(T &a, const T &b) {return a = max(a, b);}

using ll = long long;
using ld = long double;

const int INF = 1e9;
const ld eps = 1e-9, pi = acos(-1.0);

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
char board[50][50];
int res[50][50];

int main(){
  queue<int> que;
  int r, c, sy, sx, gy, gx;
  cin >> r >> c >> sy >> sx >> gy >> gx;
  REP(i, r) REP(j, c) { cin >> board[i][j]; res[i][j]=INF; }
  res[--sy][--sx]=0;
  que.push(sy*100+sx);
  while(!que.empty()){
    int tmp = que.front(); que.pop();
    int ty=tmp/100;
    int tx=tmp%100;
    REP(i, 4){
      int ttx = tx+dx[i];
      int tty = ty+dy[i];
      if(board[tty][ttx]=='#') continue;
      if(res[tty][ttx]>res[ty][tx]+1) { res[tty][ttx]=res[ty][tx]+1; que.push(tty*100+ttx); }
    }
  }
  cout << res[--gy][--gx] << endl;
  return 0;
}