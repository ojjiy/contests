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
  int n;
  cin >> n;
  int a[n];
  int ans = 0;
  int neg = 0;
  int pos = 0;
  REP(i, n) { cin >> a[i]; if(a[i]<0) neg++; if(a[i]>0) pos++; }
  sort(a, a+n);
  REP(i, n) ans+=abs(a[i]);
  if(a[0]>=0) ans-=2*a[0];
  if(a[n-1]<=0) ans+=2*a[n-1];
  cout << ans << endl;
  int l=0;
  int r=n-1;

  if(n==2) { cout << a[r] << " " << a[l] << endl; return 0; }
  while(a[l]>=0 && pos>1){ cout << a[l] << " " << a[r] << endl; if(a[l]!=0) pos--; a[l]-=a[r]; r--; pos--; if(a[l]!=a[r]) neg++; }
  while(a[r]<=0 && neg>1){ cout << a[r] << " " << a[l] << endl; if(a[r]!=0) neg--; a[r]-=a[l]; l++; neg--; if(a[l]!=a[r]) pos++; }
  while(pos>1) { cout << a[l] << " " << a[r] << endl; a[l]-=a[r]; r--; pos--; }
  while(l<r) { cout << a[r] << " " << a[l] << endl; a[r]-=a[l]; l++; }
  return 0;
}