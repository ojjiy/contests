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


void solve(long long N, long long A, long long B){
  ll res = (N / (A+B)) * A + min(N%(A+B), A);
  cout << res << endl;

}

int main(){
    long long N;
  scanf("%lld",&N);
  long long A;
  scanf("%lld",&A);
  long long B;
  scanf("%lld",&B);
    solve(N, A, B);
    return 0;
}
