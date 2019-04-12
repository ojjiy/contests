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
ll a[200005];

int main(){
  int n;
  ll l=0, r=0;
  cin >> n;
  REP(i, n) cin >> a[i];
  ll tmp_sum=0;
  ll tmp_xor=0;
  ll res=0;
  while(r<=n){
    while(tmp_sum==tmp_xor and r<=n){
      tmp_sum += a[r];
      tmp_xor ^= a[r];
      r++;
    }
    res += (r-l-1)*(r-l)/2;
    while(tmp_sum!=tmp_xor){
      tmp_sum -= a[l];
      tmp_xor ^= a[l];
      l++;
    }
    if(r!=n+1) res -= (r-l-1)*(r-l)/2;
  }
  cout << res << endl;
  return 0;
}