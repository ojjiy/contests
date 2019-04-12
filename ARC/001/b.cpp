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
  int a, b;
  cin >> a >> b;
  int res=0;
  int tmp = abs(a-b);
  while(tmp>=10){ res++; tmp-=10; }
  if(tmp>5) cout << min(res+1+(tmp-5), res+1+(10-tmp)) << endl;
  else if(tmp==5) cout << res+1 << endl;
  else cout << min(res+tmp, res+1+(5-tmp)) << endl;
  return 0;
}