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

double r[100];

int main(){
  int n, k;
  cin >> n >> k;
  REP(i, n) cin >> r[i];
  sort(r, r+n);
  double res = 0;
  for(int i=n-k; i<n; i++) res = (res + r[i]) / 2.0;
  cout << setprecision(10) << res << endl;
  return 0;
}