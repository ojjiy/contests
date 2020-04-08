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

const string YES = "YES";
const string NO = "NO";

string cand[4] = {"maerd", "remaerd", "esare", "resare"};

void solve(std::string S){
  reverse(S.begin(), S.end());
  bool flag = true;
  REP(i, S.length()){
    if(!flag) break;
    if(i>S.length()-5) flag = false;
    if(S.substr(i, 5) == cand[0]) { i+=4; continue; }
    if(S.substr(i, 5) == cand[2]) { i+=4; continue; }
    if(i>S.length()-6) flag = false;
    if(S.substr(i, 6) == cand[3]) { i+=5; continue; }
    if(i>S.length()-7) flag = false;
    if(S.substr(i, 7) == cand[1]) { i+=6; continue; }
    flag = false;
  }
  cout << (flag ? YES : NO) << endl;
}

int main(){
    std::string S;
    std::cin >> S;
    solve(S);
    return 0;
}
