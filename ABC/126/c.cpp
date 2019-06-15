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

float prob[100005];

int main(){
  int n, k;
  cin >> n >> k;
  double res = 0;
  for(int i=1; i<=n; i++){
    int tmp = i;
    double t_res = 1.0/n;
    while(tmp < k){
      t_res *= 0.5;
      tmp *= 2;
    }
    res += t_res;
  }
  cout << setprecision(15) << res << endl;
  return 0;
}