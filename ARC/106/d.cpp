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

int table[505][505];

int main(){
  int n, m, Q;
  cin >> n >> m >> Q;
  int l, r;
  int p, q;
  REP(i, m) { cin >> l >> r; table[l-1][r-1]++; }
  REP(i, n) REP(j, n) table[i][j+1] += table[i][j];
  REP(i, n+1) REP(j, n) table[j+1][i] += table[j][i];
  REP(i, Q) { cin >> p >> q; cout << table[q-1][q-1] - (p==1?0:table[q-1][p-2]+table[p-2][q-1]-table[p-2][p-2]) << endl; }
  return 0;
}