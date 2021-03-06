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

ll dp[1000005][2];
ll sum[1000005];

int main(){
  int n, k;
  cin >> n >> k;
  dp[0][0]=1;
  dp[1][1]=k>2?1:0;
  sum[0]=0;
  sum[1]=dp[0][0];
  for(int i=1; i<n; i++){
    dp[i+1][0]=sum[i-1];
    dp[i+1][1]=(dp[i][0]+dp[i][1])%INF;
    sum[i+1]=(sum[i]+dp[i+1][0]+dp[i+1][1])%INF;
  }
  cout << dp[n-1][0]+dp[n-1][1] << endl;
  return 0;
}