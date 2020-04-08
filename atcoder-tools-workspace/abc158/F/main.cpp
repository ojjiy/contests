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

const long long MOD = 998244353;

void dfs(int id, std::vector<pair<ll, ll>>){
  int res = 0;
  REP()
}

void solve(long long N, std::vector<long long> X, std::vector<long long> D){
  sort(ALL(X));
  sort(ALL(D));
  vector<pair<ll, ll>> xp, dp, cp, tmp;
  REP(i, N){
    xp.push_back(make_pair(X[i], N+i));
    dp.push_back(make_pair(D[i], i));
  }
  merge(xp.begin(), xp.end(), dp.begin(), dp.end(), back_inserter(tmp));
  REP(i, tmp.size()){
    cp.push_back(make_pair(lower_bound(tmp.begin(), tmp.end(), tmp[i])-tmp.begin(), tmp[i].second));
  }
  REP(i, cp.size()){
    if(i==0) continue;
    if(cp[i].second>=N) cp[i].first=cp[i-1].first+1;
    else cp[i].first = cp[i-1].first;
  }
  int res = 0;
  REP(i, N) {res += dfs(i, std::move(cp));}
}

int main(){
    long long N;
  scanf("%lld",&N);
  std::vector<long long> X(N);
  std::vector<long long> D(N);
  for(int i = 0 ; i < N ; i++){
    scanf("%lld",&X[i]);
    scanf("%lld",&D[i]);
    D[i]+=X[i];
  }
    solve(N, std::move(X), std::move(D));
    return 0;
}
