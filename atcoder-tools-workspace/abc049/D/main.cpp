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


void solve(long long N, long long K, long long L, std::vector<long long> p, std::vector<long long> q, std::vector<long long> r, std::vector<long long> s){

}

int main(){
    long long N;
  scanf("%lld",&N);
  long long K;
  scanf("%lld",&K);
  long long L;
  scanf("%lld",&L);
  std::vector<long long> p(K);
  std::vector<long long> q(K);
  for(int i = 0 ; i < K ; i++){
    scanf("%lld",&p[i]);
    scanf("%lld",&q[i]);
  }
  std::vector<long long> r(L);
  std::vector<long long> s(L);
  for(int i = 0 ; i < L ; i++){
    scanf("%lld",&r[i]);
    scanf("%lld",&s[i]);
  }
    solve(N, K, L, std::move(p), std::move(q), std::move(r), std::move(s));
    return 0;
}
