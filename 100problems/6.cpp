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
  string s;
  cin >> n >> s;
  int res = 0;
  REP(i, 1000){
    int digits[3] = {i/100, (i%100)/10, i%10};
    int chk = 0;
    for(int j=0; j<s.length(); j++){
      if(digits[chk]==s[j]-'0') chk++;
      if(chk==3) { res++; break; }
    }
  }
  cout << res << endl;
  return 0;
}