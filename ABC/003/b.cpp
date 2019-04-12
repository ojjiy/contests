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

set<char> atcoder={'a','t','c','o','d','e','r'};

int main(){
  string s, t;
  cin >> s >> t;
  bool res = true;
  REP(i, s.size()) {
    if(s[i]=='@' and atcoder.find(t[i])!=atcoder.end()) s[i] = t[i];
    if(t[i]=='@' and atcoder.find(s[i])!=atcoder.end()) t[i] = s[i];
    if(s[i]!=t[i]) {res = false; break;}
  }
  cout << (res ? "You can win" : "You will lose") << endl;
  return 0;
}