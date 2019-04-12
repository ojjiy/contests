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

ll mod = (int)1e9+7;

ll fact[906];
ll inv[906];
ll inv_fact[906];

int main(){
  int r, c, x, y, d, l;
  cin >> r >> c >> x >> y >> d >> l;
  fact[0] = 1;
  inv[0] = inv[1] = 1;
  inv_fact[0] = 1;
  REP(i, 905) fact[i+1] = fact[i] * (i+1) % mod;
  for (int i=2; i<906; i++) inv[i] = mod - inv[mod % i] * (mod / i) % mod;
  REP(i, 905) inv_fact[i+1] = inv_fact[i] * inv[i+1] % mod;
  ll res = (((((((r-x+1) * (c-y+1) * fact[x*y] % mod) * inv_fact[d+l] % mod) * inv_fact[x*y-d-l] % mod) * fact[d+l] % mod) * inv_fact[d] % mod) * inv_fact[l] % mod);
  if(d+l==x*y) { cout << res << endl; return 0; }
  ll tmp_sum = 0;
  ll tmp_sub = 0;
  bitset<4> bs_x(3);
  bitset<4> bs_y(12);
  REP(i, 16){
    if(i==0) continue;
    bitset<4> bs(i);
    int tmpx = x-(bs&bs_x).count();
    int tmpy = y-(bs&bs_y).count();
    if(d+l>tmpx*tmpy) continue;
    if(bs.count()%2==0){
      tmp_sum += (((((((r-x+1) * (c-y+1) * fact[tmpx*tmpy] % mod) * inv_fact[d+l] % mod) * inv_fact[tmpx*tmpy-d-l] % mod) * fact[d+l] % mod) * inv_fact[d] % mod) * inv_fact[l] % mod);
      tmp_sum %= mod;
    } else {
      tmp_sub += (((((((r-x+1) * (c-y+1) * fact[tmpx*tmpy] % mod) * inv_fact[d+l] % mod) * inv_fact[tmpx*tmpy-d-l] % mod) * fact[d+l] % mod) * inv_fact[d] % mod) * inv_fact[l] % mod);
      tmp_sub %= mod;
    }
  }
  res = (((res + tmp_sum) % mod) - tmp_sub + mod) % mod;
  cout << res << endl;
  return 0;
}