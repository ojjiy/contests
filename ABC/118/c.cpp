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

int a[100005];

int main(){
  int n;
  cin >> n;
  REP(i, n) cin >> a[i];
  sort(a, a+n);
  REP(i, n-1) a[i+1] %= a[0];
  int m1=a[0];
  sort(a, a+n);
  int idx=0;
  while(a[idx]==0) idx++;
  int m2=a[idx];
  while(m1 > 0 and m2 > 0){
    m2 %= m1;
    if(m1>m2) swap(m1, m2);
  }
  cout << m2 << endl;
  return 0;
}