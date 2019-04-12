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

int num[4];

int main(){
  int n;
  cin >> n;
  string s;
  cin >> s;
  REP(i, n){
    num[s[i]-'1']++;
  }
  cout << *max_element(num, num+4) << " " << *min_element(num , num+4) << endl;
  return 0;
}