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
bitset<10> connect[10];
int flag[10];

int main(){
  int n, m, tmp;
  cin >> n >> m;
  REP(i, m){
    int k; cin >> k;
    REP(j, k) { cin >> tmp; connect[i].set(tmp-1); }
  }
  int res = 0;
  REP(i, m) cin >> flag[i];
  REP(i, 1<<n) {
    bitset<10> target(i);
    bool isok=true;
    REP(j, m) if((target&connect[j]).count()%2 != flag[j]){ isok=false; break; }
    if(isok) res++;
  }
  cout << res << endl;
  return 0;
}