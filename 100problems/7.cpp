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

pii point[5000];

int main(){
  int n;
  cin >> n;
  int tx, ty;
  REP(i, n) { cin >> tx >> ty; point[i]=make_pair(tx,ty); }
  sort(point, point+n);
  int res = 0;
  REP(i, n) for(int j=i+1; j<n; j++){
    if(point[i].second > point[j].second) continue;
    pii vect = make_pair(point[j].first-point[i].first, point[j].second-point[i].second);
    if(binary_search(point, point+n, make_pair(point[i].first-vect.second, point[i].second+vect.first)) and binary_search(point, point+n, make_pair(point[i].first-vect.second+vect.first, point[i].second+vect.first+vect.second))){
      chmax(res, vect.first*vect.first+vect.second*vect.second);
    }
  }
  cout << res << endl;

  return 0;
}