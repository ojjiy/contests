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

int cnt[26];

int main(){
  string s;

  cin >> s;
  char tmp = s[0];
  bool isfirst = false;
  if(s[0]==s[1] && s[2]==s[3] && s[0] != s[2])  { cout << "Yes" << endl; return 0; }
  if(s[0]==s[2] && s[1]==s[3] && s[0] != s[1]) { cout << "Yes" << endl; return 0; }
  if(s[0]==s[3] && s[1]==s[2] && s[0] != s[1]) { cout << "Yes" << endl; return 0;}
  cout << "No" << endl;
  return 0;
}