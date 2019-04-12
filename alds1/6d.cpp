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

struct UnionFind{
  vector<int> parent;
  UnionFind(int N) : parent(N, -1) {};
  int root(int n) { return parent[n] < 0 ? n : parent[n] = root(parent[n]); }
  bool merge(int x, int y){
    x=root(x); y=root(y);
    if(x==y) return false;
    if(parent[x]>parent[y]) swap(x, y);
    if(parent[x]==parent[y]) parent[x]--;
    parent[y] = x;
    return true;
  }
  bool judge(int a, int b){
    return root(a) == root(b);
  }
};

int binarySearch(int* target, int num, int l, int r){
  if(l==r) return l;
  int pivot=(l+r)/2;
  if (*(target+pivot)==num) return pivot;
  return *(target+pivot) > num ? binarySearch(target, num, l, pivot) : binarySearch(target, num, pivot+1, r);
}

int main(){
  int n;
  cin >> n;
  int a[n], org[n];
  int res = 0;
  UnionFind grp = UnionFind(n);
  REP(i, n) { cin >> a[i]; org[i] = a[i]; }
  sort(a, a+n);
  REP(i, n){
    int place = binarySearch(a, org[i], 0, n-1);
    grp.merge(i, place);
  }
  REP(i, n){
    if(grp.parent[i]==-1) continue;
    if(grp.parent[i]<0) {
      vector<int> target;
      REP(j, n) if(grp.judge(i,j)) target.push_back(a[j]);
      sort(target.begin(), target.end());
      if((target[0]-a[0]) * (target.size()-1) > 2 * (target[0]+a[0])){
        res += accumulate(target.begin(), target.end(), a[0] * (target.size()+1) + target[0]);
      } else {
        res += accumulate(target.begin(), target.end(), target[0] * (target.size()-2));
      }
    }
  }
  cout << res << endl;
  return 0;
}