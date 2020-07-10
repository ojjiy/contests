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
  cin >> n;
  int perm[n], p[n], q[n];
  REP(i, n) perm[i]=i+1;
  REP(i, n) cin >> p[i];
  REP(i, n) cin >> q[i];
  int p_pl = -1;
  int q_pl = -1;
  int cnt = 0;
  do {
    if(p_pl == -1){
      bool tmp = true;
      REP(i, n) if(perm[i] != p[i]) tmp = false;
      if(tmp) p_pl = cnt;
    }
    if(q_pl == -1){
      bool tmp = true;
      REP(i, n) if(perm[i] != q[i]) tmp = false;
      if(tmp) q_pl = cnt;
    }
    if(p_pl != -1 && q_pl != -1) break;
    cnt++;
  } while (next_permutation(perm, perm+n));
  cout << abs(p_pl-q_pl) << endl;
  return 0;
}