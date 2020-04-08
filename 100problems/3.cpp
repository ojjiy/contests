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
int ok[15];

int main(){
  string s;
  cin >> s;
  REP(i, s.length()) ok[i]=((s[i]=='A' || s[i] == 'G' || s[i] == 'C' || s[i] == 'T') ? 1 : 0);
  int res = 0;
  if(s.length()==1) { cout << ok[0] << endl; return 0; }
  REP(i, s.length()-1) { ok[i+1]=ok[i]*ok[i+1]+ok[i+1]; chmax(res, ok[i+1]); }
  cout << res << endl;
  return 0;
}