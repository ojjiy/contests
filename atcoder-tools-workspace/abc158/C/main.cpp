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


void solve(long long A, long long B){
  REP(i, 10000){
    if(int(i*0.08)==A && int(i*0.1)==B) { cout << i << endl; return; }
  }
  cout << -1 << endl;
}

int main(){
    long long A;
  scanf("%lld",&A);
  long long B;
  scanf("%lld",&B);
    solve(A, B);
    return 0;
}
