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

int p[100005];
int y[100005];
vector<int> order[100005];

int main(){
  int n, m;
  cin >> n >> m;
  REP(i, m) { cin >> p[i]; cin >> y[i]; order[p[i]-1].push_back(y[i]); }
  REP(i, n) sort(ALL(order[i]));
  REP(i, m) { printf("%06d", p[i]); printf("%06d", lower_bound(ALL(order[p[i]-1]), y[i])-order[p[i]-1].begin()+1); printf("\n"); }
  return 0;
}