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

int cnt[10000];
int rem[200005];

void solve(long long N, long long P, string S){
  if(P==2 || P==5){
    int res = 0;
    REP(i, N) res += (((S[i]-'0')%P == 0) ? i+1 : 0);
    cout << res << endl;
    return;
  }
  REP(i, N) rem[i+1]=(rem[i]+(S[N-i-1]-'0'))%P;
  REP(i, N+1) cnt[rem[i]]++;
  int res = 0;
  REP(i, N+1) res += cnt[i]*(cnt[i]-1)/2;
  cout << res << endl;
  return;
}

int main(){
  long long N;
  scanf("%lld",&N);
  long long P;
  scanf("%lld",&P);
  string S;
  cin >> S;
  solve(N, P, S);
  return 0;
}
