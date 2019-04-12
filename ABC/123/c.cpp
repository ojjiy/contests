#include <bits/stdc++.h>

#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(), (x).end()

using namespace std;

template <typename T> T &chmin(T &a, const T &b) {return a = min(a, b);}
template <typename T> T &chmax(T &a, const T &b) {return a = max(a, b);}

using ll = long long;
using ld = long double;

const ll INF = 1e18;
const ld eps = 1e-9, pi = acos(-1.0);

int main(){
  ll n;
  ll a[5];
  cin >> n;
  REP(i, 5) cin >> a[i];
  sort(a, a+5);
  cout << (n-1)/a[0] + 5 << endl;
  return 0;
}