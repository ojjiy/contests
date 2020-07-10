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


void solve(long long N, long long M, long long S, std::vector<long long> U, std::vector<long long> V, std::vector<long long> A, std::vector<long long> B, std::vector<long long> C, std::vector<long long> D){

}

int main(){
    long long N;
  scanf("%lld",&N);
  long long M;
  scanf("%lld",&M);
  long long S;
  scanf("%lld",&S);
  std::vector<long long> U(M);
  std::vector<long long> V(M);
  std::vector<long long> A(M);
  std::vector<long long> B(M);
  for(int i = 0 ; i < M ; i++){
    scanf("%lld",&U[i]);
    scanf("%lld",&V[i]);
    scanf("%lld",&A[i]);
    scanf("%lld",&B[i]);
  }
  std::vector<long long> C(N);
  std::vector<long long> D(N);
  for(int i = 0 ; i < N ; i++){
    scanf("%lld",&C[i]);
    scanf("%lld",&D[i]);
  }
    solve(N, M, S, std::move(U), std::move(V), std::move(A), std::move(B), std::move(C), std::move(D));
    return 0;
}
