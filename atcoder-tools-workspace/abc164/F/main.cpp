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


void solve(long long N, std::vector<long long> S, std::vector<long long> T, std::vector<long long> U, std::vector<long long> V){

}

int main(){
    long long N;
  scanf("%lld",&N);
  std::vector<long long> S(N);
  for(int i = 0 ; i < N ; i++){
    scanf("%lld",&S[i]);
  }
  std::vector<long long> T(N);
  for(int i = 0 ; i < N ; i++){
    scanf("%lld",&T[i]);
  }
  std::vector<long long> U(N);
  for(int i = 0 ; i < N ; i++){
    scanf("%lld",&U[i]);
  }
  std::vector<long long> V(N);
  for(int i = 0 ; i < N ; i++){
    scanf("%lld",&V[i]);
  }
    solve(N, std::move(S), std::move(T), std::move(U), std::move(V));
    return 0;
}
