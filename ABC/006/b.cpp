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
  ll a, b, c;
  a=0; b=0; c=1;
  ll tmp;
  REP(i, n-3){
    tmp=a+b+c;
    a=b;
    b=c;
    c=tmp%10007;
  }
  cout << (n<3?0:c) << endl;
  return 0;
}