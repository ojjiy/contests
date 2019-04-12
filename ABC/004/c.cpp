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
  int n;
  cin >> n;
  n %= 30;
  int ans[6] = {1,2,3,4,5,6};
  REP(i, n) swap(ans[i%5], ans[i%5+1]);
  REP(i, 6) cout << ans[i];
  cout << endl;
  return 0;
}