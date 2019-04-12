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
  ll n, a, b;
  ll k;
  cin >> n >> a >> b >> k;
  ll an = a > b ? k / a : k / b;
  ll bn = a > b ? (k%a) / b : (k%b) / a;
  if(k - an * max(a, b) - bn * min(a, b)) cout << "Not good" << endl;
  cout << an << ", " << bn << endl;
  return 0;
}