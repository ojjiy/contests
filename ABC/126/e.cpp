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

struct UnionFind {
  vector<int> p;
  UnionFind (int n) : p(n, -1) {}
  int root(int x) { return p[x] < 0 ? x : p[x] = root(p[x]); }
  void merge(int x, int y) { if (root(x) != root(y)) p[root(y)] = x; }
};

int main(){
  int n, m;
  cin >> n >> m;
  int x[n];
  int y[n];
  int tmp;
  REP(i, m) cin >> x[i] >> y[i] >> tmp;
  return 0;
}