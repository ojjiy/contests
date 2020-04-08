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

int p[200005];

int main(){
  int n, k;
  cin >> n >> k;
  REP(i, n) cin >> p[i];
  int res = 0;
  REP(i, k) res += p[i];
  int tmp = res;
  REP(i, n-k) {
    tmp += p[k+i];
    tmp -= p[i];
    chmax(res, tmp);
  }
  cout << setprecision(10) << (res+k)/2.0 << endl;

  return 0;
}