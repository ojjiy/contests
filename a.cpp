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

int divis[100000];
map<pair<int, int>, ll> comb;

ll dfs(int total, int divs){
  if(divs==2) return total+1;
  if(total==0) return 1;
  auto it = comb.find(make_pair(total, divs));
  if(it!=comb.end()) return it->second;
  ll res = 0;
  REP(i, total+1) res += dfs(total-i, divs-1);
  comb.insert(make_pair(make_pair(total, divs), res%(INF+7)));
  return res%(INF+7);
}

int main(){
  int n, m;
  cin >> n >> m;
  for(int i=2; i<(int)(sqrt(m))+1; i++) while(m%i==0) { m/=i; divis[i]++; }
  REP(i, 100000) if(divis[i]!=0) cout << i << ", " << divis[i] << endl;
  REP(i, 100000) if(divis[i]!=0) dfs(n, divis[i]);
  REP(i, 100000) if(divis[i]!=0) cout << i << ", " << comb.find(make_pair(divis[i], n))->second << endl;
  ll res = 1;
  // REP(i, 100000) if(comb[i]!=0) {res *= comb[i]; res %= (INF+7);}
  cout << res << endl;
  return 0;
}