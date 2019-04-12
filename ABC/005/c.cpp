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

int a[100];
int b[100];

int main(){
  int t, n, m;
  cin >> t >> n;
  REP(i, n) cin >> a[i];
  cin >> m;
  REP(i, m) cin >> b[i];
  int tmp=0;
  REP(i, m){
    while(tmp<n&&a[tmp]<b[i]-t) tmp++;
    if(tmp>n-1||a[tmp]>b[i]){cout << "no" << endl; return 0;}
    tmp++;
  }
  cout << "yes" << endl;
  return 0;
}