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
  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;
  int res = 0;
  if(a%10) chmax(res, 10-a%10);
  if(b%10) chmax(res, 10-b%10);
  if(c%10) chmax(res, 10-c%10);
  if(d%10) chmax(res, 10-d%10);
  if(e%10) chmax(res, 10-e%10);
  cout << ((a+9)/10+(b+9)/10+(c+9)/10+(d+9)/10+(e+9)/10)*10-res << endl;
  return 0;
}