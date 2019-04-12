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

int d[55][55];
int p[2500];

int main(){
  int n;
  cin >> n;
  REP(i, n) REP(j, n) cin >> d[i+1][j+1];
  int q;
  cin >> q;
  REP(i, q) cin >> p[i];
  REP(i, n) REP(j, n+1) d[i+1][j] += d[i][j];
  REP(i, n+1) REP(j, n) d[i][j+1] += d[i][j];
  REP(i, q){
    int res = 0;
    int y, tmp;
    for(int x=1; x<min(n, p[i])+1; x++){
      y=min(p[i]/x,n);
      REP(a, n-x+1) REP(b, n-y+1){
        tmp=d[a][b]+d[a+x][b+y]-d[a][b+y]-d[a+x][b];
        chmax(res, tmp);
      }
    }
    cout << res << endl;
  }
  return 0;
}