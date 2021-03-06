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

bool know[12][12];

int main(){
  int n, m, x, y;
  cin >> n >> m;
  REP(i, m) {
    cin >> x >> y;
    x--; y--;
    know[x][y] = know[y][x] = true;
  }
  int res = 0;
  REP(i, 1<<12){
    bitset<12> status(i);
    bool tmp=true;
    REP(j, 12) REP(k, j) if(status[j] && status[k] && !know[j][k]) tmp = false;
    if(tmp) chmax(res, int(status.count()));
  }
  cout << res << endl;
  return 0;
}