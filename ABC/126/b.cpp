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
  string str;
  int f, l;
  cin >> str;
  f = stoi(str.substr(0,2));
  l = stoi(str.substr(2,2));
  if(f<=12 and f>=1) cout << ((l<=12 and l>=1) ? "AMBIGUOUS" : "MMYY");
  else cout << ((l<=12 and l>=1) ? "YYMM" : "NA");
  cout << endl;
  return 0;
}