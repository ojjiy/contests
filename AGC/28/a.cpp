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

int gcd(int a, int b){
  if(a<b) swap(a, b);
  if(b==0) return a;
  return gcd(b, a%b);
}

ll lcm(int a, int b){
  return ll(a) * ll(b) / ll(gcd(a, b));
}

int a[100005]

int main(){
  int n;
  cin >> n;
  REP(i, n) cin >> a[i];
  int x = gcd(n,m);
  bool exist = true;
  for(int i=0; i<x; i++) if(s[i*(n/x)]!=t[i*(m/x)]) exist = false;
  cout << (exist ? lcm(n,m) : -1) << endl;
  return 0;
}