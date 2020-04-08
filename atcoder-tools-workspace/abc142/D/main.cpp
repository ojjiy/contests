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

ll gcd(ll a, ll b){
  return b ? gcd(b, a%b) : a;
}

bool isPrime(ll x){
  for(ll i=2; i<sqrt(x); i++){
    if(x%i==0) return false;
  }
  return true;
}

void solve(long long A, long long B){
  if(A<B) swap(A, B);
  ll g = gcd(A,B);
  set<ll> res;
  res.insert(1);
  for(ll i=2; i<=sqrt(A); i++){
    if(g%i==0) res.insert(i);
    while(g%i==0) g/=i;
  }
  if(isPrime(g)) res.insert(g);
  cout << res.size() << endl;
}

int main(){
  long long A;
  scanf("%lld",&A);
  long long B;
  scanf("%lld",&B);
  solve(A, B);
  return 0;
}
