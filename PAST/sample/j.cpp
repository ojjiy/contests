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

int a[1000];
bitset<12> c[1005];
int dp[9000];

int main(){
  int n, m;
  int ta, b;
  int tmp;
  cin >> n >> m;
  REP(i, pow(2,n)) dp[i] = INF;
  REP(i, m){
    cin >> ta >> b;
    a[i]=ta;
    REP(j, b){
      cin >> tmp;
      c[i].set(tmp-1);
    }
    for(int bit=c[i].to_ulong(); ; bit = (bit-1) & c[i].to_ulong()){
      chmin(dp[bit], a[i]);
      if(!bit) break;
    }
  }
  REP(i, m) REP(j, pow(2, n)){
    bitset<12> target(j);
    unsigned long before = target.to_ulong();
    target |= c[i];
    chmin(dp[target.to_ulong()], dp[before]+a[i]);
  }
  cout << (dp[int(pow(2, n))-1] == INF ? -1 : dp[int(pow(2, n))-1]) << endl;
  return 0;
}