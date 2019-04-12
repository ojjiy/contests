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

int adj[12][12];

int main(){
  int n, m;
  cin >> n >> m;
  REP(i, m){ int t1, t2; cin >> t1 >> t2; adj[--t1][--t2]=1; adj[t2][t1]=1; }
  int res = 0;
  REP(i, 5096){
    bitset<12> bs(i);
    bool tmp = true;
    REP(j, 12) REP(k, j) if(bs[j]==1 and bs[k]==1 and adj[j][k]==0) tmp=false;
    if(tmp) chmax(res, (int)bs.count());
  }
  cout << res << endl;
  return 0;
}