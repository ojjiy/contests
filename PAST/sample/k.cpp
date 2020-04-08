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
  string s, t;
  cin >> s >> t;
  int pos = -1;
  ll res = 0;
  vector<int> target;
  vector<int> pl[26];
  REP(i, s.length()) pl[s[i]-'a'].push_back(i);
  REP(i, t.length()) if(pl[t[i]-'a'].size() == 0) { cout << -1 << endl; return 0; }
  REP(i, t.length()){
    target = pl[t[i]-'a'];
    auto it = lower_bound(ALL(target), pos+1);
    if(it!=target.end()){
      res += *it-pos;
      pos = *it;
      continue;
    }
    res += s.length()-pos+target[0];
    pos = target[0];
  }
  cout << res << endl;
  return 0;
}