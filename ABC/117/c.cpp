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

int target[100005];
int dist[100005];

int main(){
  int n, m;
  cin >> n >> m;
  REP(i, m) cin >> target[i];
  sort(target, target+m);
  REP(i, m-1) dist[i] = target[i+1]-target[i];
  sort(dist, dist+m-1);
  int res = 0;
  REP(i, m-n) res += dist[i];
  cout << res << endl;
  return 0;
}