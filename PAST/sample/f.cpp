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

vector<vector<int>> cnt;

int main(){
  int n;
  cin >> n;
  ll res = 0;
  REP(i, n){
    string tmp;
    cin >> tmp;
    vector<int> tv(26);
    REP(j, 10) tv[tmp[j]-'a']++;
    cnt.push_back(tv);
  }
  sort(ALL(cnt));
  ll num = 1;
  REP(i, n-1) {
    bool match = true;
    REP(j, 26) if(cnt[i][j]!=cnt[i+1][j]) match=false;
    if(match) num++;
    else if(num>1) { res += num * (num-1) / 2; num = 1;}
  }
  res += num * (num-1) / 2;
  cout << res << endl;
  return 0;
}