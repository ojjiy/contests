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
  int q;
  cin >> q;
  ll cst = 0;
  multiset<int> curve;
  REP(period, q){
    int op, ta, tb;
    cin >> op;
    if(op==1) {
      cin >> ta >> tb; cst += tb;
      curve.insert(ta);
    } else {
      auto it = curve.begin();
      ll res = 0;
      REP(i, curve.size()/2) { res -= *it; it++; }
      if(curve.size()%2==0) it--;
      cout << *it << " ";
      it++;
      while(it!=curve.end()) { res += *it; it++; }
      cout << res+cst << endl;
    }
  }
  return 0;
}