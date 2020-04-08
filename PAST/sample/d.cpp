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
  string s;
  int res = 0;
  int r = 0;
  int b = 0;
  cin >> s;
  REP(i, s.length()){
    if (s[i] == '0' && b != 0) { b--; res+=2; }
    else if (s[i] == '0' && b == 0) { r++; }
    else if (s[i] == '1' && r != 0) { r--; res+=2; }
    else if (s[i] == '1' && r == 0) { b++; }
  }
  cout << res << endl;
  return 0;
}