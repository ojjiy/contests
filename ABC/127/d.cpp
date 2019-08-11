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
  int n, m;
  cin >> n >> m;
  map<ll, int> mp;
  int tmp;
  REP(i, n) { cin >> tmp; if(mp.count(tmp)) mp[tmp]++; else mp[tmp]=1; }
  REP(i, m){
    int b, c;
    cin >> b >> c;
    if(mp.count(c)) mp[c]+=b; else mp[c]=b;
  }
  ll res = 0;
  tmp = 0;
  auto it = prev(mp.end());

  while(tmp<n){
    if(it->second < n-tmp) { res += it->first * it->second; tmp+=it->second; it = prev(it); }
    else { res += it->first * (n-tmp); break; }
  }
  cout << res << endl;
  return 0;
}