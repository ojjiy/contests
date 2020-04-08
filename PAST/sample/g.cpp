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

int a[100005];

int main(){
  ll res = 0;
  int n;
  ll k;
  cin >> n >> k;
  REP(i, n) cin >> a[i];
  int fr = 0;
  int to = 0;
  ll tmp = 0;
  bool isend = false;
  while(fr<n){
    while(tmp<k) { if(to>n-1) { isend = true; break; } tmp += a[to]; to++; }
    if(isend) break;
    while(tmp>=k) { res += n-to+1; tmp -= a[fr]; fr++; }
  }
  cout << res << endl;
  return 0;
}