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

int food[35];

int main(){
  int n, m, k;
  cin >> n >> m;
  REP(i, n){
    cin >> k;
    REP(j, k){
      int tmp;
      cin >> tmp;
      food[tmp-1]++;
    }
  }
  int res=0;
  REP(i, m) if(food[i]==n) res++;
  cout << res << endl;
  return 0;
}