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

priority_queue<int> a;

int main(){
  ll res = 0;
  int n, m;
  int tmp;
  cin >> n >> m;
  REP(i, n) { cin >> tmp; a.push(tmp); }
  REP(i, m) { a.push(a.top()/2); a.pop(); }
  REP(i, n) { res += a.top(); a.pop(); }
  cout << res << endl;
  return 0;
}