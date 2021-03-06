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

int dp[10005][105][2];

int main(){
  int d;
  string n;
  cin >> d >> n;
  ll ans = 0;
  if(n.length()<2){
    REP(i, n[0]-'0') if(i%d==0) ans++;
    cout << ans-1 << endl;
    return 0;
  }
  REP(k,10) if(k<=n[0]-'0') dp[0][k%d][k<n[0]-'0']++;
  REP(i, n.length()-1) REP(j, d) REP(k, 10){
    dp[i+1][(k+j)%d][1] += dp[i][j][1];
    if(k<=n[i+1]-'0') dp[i+1][(k+j)%d][k<n[i+1]-'0'] += dp[i][j][0];
    dp[i+1][(k+j)%d][0] %= INF;
    dp[i+1][(k+j)%d][1] %= INF;
  }
  cout << dp[n.length()-1][0][0]+dp[n.length()-1][0][1]-1 << endl;
  return 0;
}