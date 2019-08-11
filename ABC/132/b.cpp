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
  int p[n];
  REP(i, n) cin >> p[i];
  int res = 0;
  for(int i=1; i<n-1; i++){
  if(p[i-1]<p[i] && p[i]<p[i+1]) res++;
  if(p[i-1]>p[i] && p[i]>p[i+1]) res++;

  }
  cout << res << endl;
  return 0;
}