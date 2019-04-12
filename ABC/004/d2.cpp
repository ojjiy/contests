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
int accum[2001];

int main(){
  int r,g,b;
  cin >> r >> g >> b;
  int res = INF;
  int tmp = 0;
  REP(i, 2001) accum[i]=abs(i-1000);
  REP(i, 2000) accum[i+1]+=accum[i];
  for(int i=-750;i<-99;i++) for(int j=-350;j<51;j++) for(int k=-50;k<351;k++){
    if(i+r>j || j+g>k) continue;
    tmp=accum[i+r+1099]-accum[i+1099]+accum[j+g+999]-accum[j+999]+accum[k+b+899]-accum[k+899];
    chmin(res, tmp);
  }
  cout << res << endl;
  return 0;
}