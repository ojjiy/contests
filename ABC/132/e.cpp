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

int dp[3][100000];

int main(){
  int n, m;
  cin >> n >> m;
  queue<int> que;
  vector<vector<int>> edge(n, vector<int>());
  int u, v;
  REP(i, m) {
    cin >> u >> v;
    edge[u-1].push_back(v-1);
  }
  REP(i, 3) REP(j, n) dp[i][j] = INF;
  int s, t;
  cin >> s >> t;
  que.push(s-1);
  dp[0][s-1]=0;
  while(!que.empty()){
    int target = que.front();
    que.pop();
    for(auto pt: edge[target]){
      if(dp[0][pt] > dp[2][target]+1) { dp[0][pt]=dp[2][target]+1; que.push(pt); }
      if(dp[1][pt] > dp[0][target]+1) { dp[1][pt]=dp[0][target]+1; que.push(pt); }
      if(dp[2][pt] > dp[1][target]+1) { dp[2][pt]=dp[1][target]+1; que.push(pt); }
    }
  }
  cout << (dp[0][t-1]<INF ? dp[0][t-1]/3 : -1) << endl;
  return 0;
}