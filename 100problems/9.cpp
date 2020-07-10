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

typedef pair<int, int> pii;

pii target[200];
pii cand[1000];

int main(){
  int m, n;
  int tx, ty;
  cin >> m;
  REP(i, m) { cin >> tx >> ty; target[i]=make_pair(tx, ty); }
  sort(target, target+m);
  pii origin = target[0];
  REP(i, m) { target[i] = make_pair(target[i].first - origin.first, target[i].second - origin.second); }
  cin >> n;
  REP(i, n) { cin >> tx >> ty; cand[i]=make_pair(tx, ty); }
  sort(cand, cand+n);
  REP(i, n) {
    bool flag = true;
    REP(j, m) {
      if(!binary_search(cand, cand+n, make_pair(target[j].first+cand[i].first, target[j].second+cand[i].second))) flag = false;
      if(!flag) break;
    }
    if(flag) { cout << -origin.first+cand[i].first << " " << -origin.second+cand[i].second << endl; break; }
  }
  return 0;
}