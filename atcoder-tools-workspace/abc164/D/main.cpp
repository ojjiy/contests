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

int dp[200005];

void solve(string S){
  dp[0] = S[0]-'0'
  REP(i, S.length()){
    dp[i+1] = dp[i];
    dp[i+1] = (dp[i]*10+S[S.length()-1-i]-'0')%2019;
  }
}

int main(){
    string S;
    cin >> S;
    solve(S);
    return 0;
}
