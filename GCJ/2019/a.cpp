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
  int T;
  string n;
  cin >> T;
  REP(t, T){
    cin >> n;
    vector<int> res_a, res_b;
    REP(i, n.length()){
      int tmp=n[i]-'0';
      if(tmp==4){
        res_a.push_back(1);
        res_b.push_back(3);
      } else {
        res_a.push_back(tmp);
        res_b.push_back(0);
      }
    }
    cout << "Case #" << t+1 << ": ";
    REP(i, n.length()) cout << res_a[i];
    cout << " ";
    bool mark = false;
    REP(i, n.length()) {
      if(res_b[i]==0 and !mark) continue;
      mark = true;
      cout << res_b[i];
    }
    cout << endl;
  }
  return 0;
}