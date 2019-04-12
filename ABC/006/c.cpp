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
  int n, m;
  cin >> n >> m;
  m-=2*n;
  if(m<0) { cout << "-1 -1 -1" << endl; return 0; }
  int a, b, c;
  c=m/2;
  b=m%2;
  a=n-b-c;
  if(a<0) cout << "-1 -1 -1" << endl;
  else cout << a << " " << b << " " << c << endl;
  return 0;
}