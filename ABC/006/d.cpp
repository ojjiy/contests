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

int c[30005];
int len[30005];

int main(){
  int n;
  cin >> n;
  REP(i, n) cin >> c[i];
  REP(i, n+1) len[i]=INF;
  len[0]=c[0];
  REP(i, n) {
    auto it = lower_bound(len, len+i, c[i]);
    *it=c[i];
  }
  REP(i, n+1) if(len[i]==INF) {cout << n-i << endl; break;}
  return 0;
}