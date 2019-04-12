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
  int n, k;
  cin >> n >> k;
  set<int> d;
  REP(i, k) { int tmp; cin >> tmp; d.insert(tmp); }
  int res = 0;
  for(int target=n; ;target++){
    if(res!=0) break;
    int tmpres=target;
    while(target>0){
      int tmp=target%10;
      auto it = d.find(tmp);
      if(it!=d.end()) break;
      target /= 10;
      if(target==0) res=tmpres;
    }
    target=tmpres;
  }
  cout << res << endl;
  return 0;
}