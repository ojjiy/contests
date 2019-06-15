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

pair<int, vector<pair<int, int>>> node[100000];
int res[100000];

int main(){
  int n;
  int u,v,w;
  memset(res, -1, sizeof(res));
  cin >> n;
  REP(i, n-1){
    cin >> u >> v >> w;
    node[u-1].first=u-1;
    node[u-1].second.push_back(make_pair(v-1, w));
    node[v-1].first=v-1;
    node[v-1].second.push_back(make_pair(u-1, w));
  }
  stack<pair<int, vector<pair<int,int>>>> st;
  st.push(node[0]);
  res[0]=0;
  while(!st.empty()){
    auto target = st.top();
    st.pop();
    REP(i, target.second.size()){
      if(res[target.second[i].first]!=-1) continue;
      res[target.second[i].first] = (target.second[i].second%2 ? abs(res[target.first]-1) : res[target.first]);
      st.push(node[target.second[i].first]);
    }
  }
  REP(i, n) cout << res[i] << endl;
  return 0;
}