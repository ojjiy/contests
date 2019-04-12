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

int num[9]={2, 5, 5, 4, 5, 6, 3, 7, 6};
int cand[6];
int result[10000];

int main(){
  int n, m;
  cin >> n >> m;
  int tmp;
  int minim = 8;
  REP(i, m) { cin >> tmp; cand[num[tmp-1]-2] = max(cand[num[tmp-1]-2], tmp); minim = min(num[tmp-1], minim); }
  int dig = n/minim;
  int res = n%minim;
  REP(i, dig) result[i] = cand[minim-2];
  cout << minim << ", " << dig << ", " << res << endl;
  REP(i, 6) cout << cand[i] << ",";
  cout << endl;
  int beg=0;
  int en=dig-1;
  while(res>0){
    cout << res << endl;
    int aft=0;
    REP(i, res) aft=max(aft, cand[minim+i-1]);
    cout << aft << endl;
    if(aft>cand[minim-2]) { result[beg]=aft; beg++; }
    else { result[en]=aft; en--; }
    cout << "hoge:" << num[aft-1] << endl;
    res-=num[aft-1]-num[cand[minim-2]-1];
  }
  REP(i, dig) cout << result[i];
  cout << endl;
  return 0;
}