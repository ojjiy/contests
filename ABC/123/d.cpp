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

ll a[1000];
ll b[1000];
ll c[1000];
ll t_sum[1000000];
ll sum[3000000];

int main(){
  int x, y, z, k;
  cin >> x >> y >> z >> k;
  REP(i, x) cin >> a[i];
  REP(i, y) cin >> b[i];
  REP(i, z) cin >> c[i];
  sort(a, a+x, greater<ll>());
  sort(b, b+y, greater<ll>());
  sort(c, c+z, greater<ll>());
  REP(i, x) REP(j, y) t_sum[i*y+j] = a[i]+b[j];
  sort(t_sum, t_sum+x*y, greater<ll>());
  REP(i, min(3000, x*y)) REP(j, z) sum[i*z+j] = t_sum[i]+c[j];
  sort(sum, sum+min(3000, x*y)*z, greater<ll>());
  REP(i, k) cout << sum[i] << endl;
  return 0;
}