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

char board[4][4];

int main(){
  REP(i, 4) REP(j, 4) cin >> board[i][j];
  REP(i, 4) { REP(j, 4) cout << board[3-i][3-j] << " "; cout << endl; }
  return 0;
}