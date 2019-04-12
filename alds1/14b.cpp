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

int t[10005];

void make_table(string w){
  t[0] = -1;
  int j = -1;
  for (int i = 0; i < w.size(); i++) {
    while (j >= 0 && w[i] != w[j]) j = t[j];
    j++;
    w[i+1] = j;
  }
  return;
}

int main(){
  string a, b;
  cin >> a >> b;
  memset(t, -1, sizeof(t));
  make_table(b);
  int m=0;
  int n=0;
  while(m+n<a.size()){
    if(a[m+n]==b[n]) {
      n++;
      if(n==b.size()) { cout << m << endl; }
    }
    else {
      m = m+n-t[n];
      if(n>0) n=t[n];
    }
  }
  return 0;
}
