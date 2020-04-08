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

int mp[2000][2000];
int l[2000][2000];
int r[2000][2000];
int u[2000][2000];
int d[2000][2000];

int main(){
  int h, w;
  cin >> h >> w;
  string stmp;
  REP(i, h) { cin >> stmp; REP(j, w) mp[i][j] = (stmp[j] == '#' ? -1 : 0); }
  int tmp = 1;
  int res = 0;
  REP(i, h) { tmp = 1; REP(j, w) if(mp[i][j]!=-1) { l[i][j] = tmp; tmp++; } else { l[i][j] = 0; tmp=1; } }
  REP(i, h) { tmp = 1; REP(j, w) if(mp[i][w-j-1]!=-1) { r[i][w-j-1] = tmp; tmp++; } else { r[i][w-j-1] = 0; tmp=1; } }
  REP(i, w) { tmp = 1; REP(j, h) if(mp[j][i]!=-1) { u[j][i] = tmp; tmp++; } else { u[j][i] = 0; tmp=1; } }
  REP(i, w) { tmp = 1; REP(j, h) if(mp[h-j-1][i]!=-1) { d[h-j-1][i] = tmp; tmp++; } else { d[h-j-1][i] = 0; tmp=1; } }
  REP(i, h) REP(j, w) chmax(res, l[i][j] + r[i][j] + u[i][j] + d[i][j] - 3);
  cout << res << endl;
  return 0;
}