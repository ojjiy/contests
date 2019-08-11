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
  int n, m;
  cin >> n >> m;
  int l=0; int r=INF;
  int tl; int tr;
  REP(i, m){
    cin >> tl >> tr;
    chmax(l, tl);
    chmin(r, tr);
  }
  cout << (r-l+1>0 ? r-l+1 : 0) << endl;
  return 0;
}