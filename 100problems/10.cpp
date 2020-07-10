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

int cand[20];
bool dp[25][4000];

int main(){
  int n;
  cin >> n;
  dp[0][0] = true;
  REP(i, n) cin >> cand[i];
  int q, m;
  REP(i, n) REP(j, 2000){
    dp[i+1][j] |= dp[i][j];
    dp[i+1][j+cand[i]] |= dp[i][j];
  }
  cin >> q;
  REP(i, q){
    cin >> m;
    cout << (dp[n][m]? "yes": "no") << endl;
  }
  return 0;
}