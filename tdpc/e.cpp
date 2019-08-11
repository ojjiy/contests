#include <bits/stdc++.h>

#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(), (x).end()

using namespace std;

template <typename T> T &chmin(T &a, const T &b) {return a = min(a, b);}
template <typename T> T &chmax(T &a, const T &b) {return a = max(a, b);}

using ll = long long;
using ld = long double;

const int INF = 1e9+7;
const ld eps = 1e-9, pi = acos(-1.0);

int dp[10005][100];

int main(){
  int d;
  string n;
  cin >> d >> n;
  ll ans = 0;
  REP(i, 10000) REP(j, d) {
    dp[i+1][j] += dp[i][(d+j)%d];
    dp[i+1][j] %= INF;
  }

  return 0;
}