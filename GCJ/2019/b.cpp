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
  int T;
  string p;
  int n;
  cin >> T;
  REP(t, T){
    cin >> n;
    cin >> p;
    cout << "Case #" << t+1 << ": ";
    REP(i, p.length()) cout << (p[i]=='S'? 'E' :'S');
    cout << endl;
  }
  return 0;
}