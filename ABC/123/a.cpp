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

int main(){
  int a[5];
  REP(i, 5) cin >> a[i];
  int k;
  cin >> k;
  sort(a, a+5);
  bool ok = true;
  if (a[4]-a[0]>k) ok=false;
  cout << (ok ? "Yay!" : ":(") << endl;
  return 0;
}