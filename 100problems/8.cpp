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

int a[30];
int b[30];
int cand[60];

int main(){
  int n;
  cin >> n;
  REP(i, n) { cin >> a[i] >> b[i]; cand[2*i]=a[i]; cand[2*i+1]=b[i]; }
  ll minim = (1LL<<63)-1;
  REP(i, 2*n) REP(j, 2*n){
    ll tmp = 0;
    int fr = cand[i];
    int to = cand[j];
    REP(k, n) tmp += min(abs(fr-a[k])+abs(to-b[k]), abs(fr-b[k])+abs(to-a[k]))+abs(a[k]-b[k]);
    chmin(minim, tmp);
  }
  cout << minim << endl;
  return 0;
}