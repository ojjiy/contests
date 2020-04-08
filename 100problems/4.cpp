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

ll score[100][100];

int main(){
  ll res = 0;
  int n, m;
  cin >> n >> m;
  REP(i, n) REP(j, m) cin >> score[i][j];
  REP(i, m) REP(j, i) { ll tmp = 0; REP(k, n) tmp+=max(score[k][i], score[k][j]); chmax(res, tmp); }
  cout << res << endl;
  return 0;
}