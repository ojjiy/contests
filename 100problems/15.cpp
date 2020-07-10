#include <bits/stdc++.h>

#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(), (x).end()

using namespace std;

template <typename T> T &chmin(T &a, const T &b) {return a = min(a, b);}
template <typename T> T &chmax(T &a, const T &b) {return a = max(a, b);}

using ll = long long;
using ld = long double;

const ll INF = 1e15;
const ld eps = 1e-9, pi = acos(-1.0);

int main(){
  int n;
  cin >> n;
  int x[n], y[n];
  REP(i, n) cin >> x[i] >> y[i];
  int perm[n];
  ld res = 0;
  REP(i, n) perm[i]=i;
  int cnt = 0;
  do {
    REP(i, n-1){
      res+=sqrt((x[perm[i+1]]-x[perm[i]])*(x[perm[i+1]]-x[perm[i]])+(y[perm[i+1]]-y[perm[i]])*(y[perm[i+1]]-y[perm[i]]));
    }
    cnt++;
  } while(next_permutation(perm, perm+n));
  cout << setprecision(20) << res/cnt << endl;
  return 0;
}