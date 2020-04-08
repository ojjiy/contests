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

vector<tuple<int, int, int>> rec;
int order[100005];
pair<int, int> res[100005];

int main(){
  int n, m;
  cin >> n >> m;
  int tp, ty;
  REP(i, m){
    cin >> tp >> ty;
    rec.emplace_back(ty, tp, i);
  }
  sort(ALL(rec));
  int ti;
  REP(i, m){
    tp = get<1>(rec[i]);
    ti = get<2>(rec[i]);
    order[tp]++;
    res[ti] = make_pair(tp, order[tp]);
  }
  cout << setfill('0');
  REP(i, m){
    cout << setw(6) << res[i].first;
    cout << setw(6) << res[i].second << endl;
  }
  return 0;
}