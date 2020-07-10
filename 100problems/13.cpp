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

bool status[10][10000];
bool tmp[10][10000];

int main(){
  int r, c;
  cin >> r >> c;
  REP(i, r) REP(j, c) cin >> status[i][j];
  int res = 0;
  REP(i, 1<<r){
    bitset<10> flag(i);
    REP(i, r) REP(j, c) tmp[i][j] = status[i][j];
    REP(j, r) if(flag[j]) REP(k, c) tmp[j][k] = !tmp[j][k];
    int tmpres = 0;
    REP(j, c){
      int cnt = 0;
      REP(k, r) if(tmp[k][j]) cnt++;
      tmpres += max(cnt, r-cnt);
    }
    chmax(res, tmpres);
  }
  cout << res << endl;
  return 0;
}