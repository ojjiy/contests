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
  int r,g,b;
  cin >> r >> g >> b;
  int res = 0;
  int r_min = -100-r/2;
  int r_max = -100+(r-1)/2;
  int g_max = (g-1)/2;
  int g_min = -g/2;
  int b_min = 100-(b-1)/2;
  int b_max = 100+b/2;
  res += (1+(-100-r_min))*(-100-r_min)/2;
  res += (1+(r_max+100))*(r_max+100)/2;
  res += (1+(-g_min))*(-g_min)/2;
  res += (1+(g_max))*(g_max)/2;
  res += (1+(100-b_min))*(100-b_min)/2;
  res += (1+(b_max-100))*(b_max-100)/2;
  cout << res << endl;
  return 0;
}