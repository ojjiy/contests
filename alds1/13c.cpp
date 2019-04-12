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

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

struct board{
  int b[16];
  int c;
  int m;
  int bl;
  int prev;
  board(int *v, int c, int m, int bl, int p): c(c), m(m), bl(bl), prev(p){ REP(i,16) b[i]=v[i]; }
};

bool operator< (board b1, board b2){
    return ((b1.c+b1.m > b2.c+b2.m) ? true : false);
}

int dist(int a, int b){
  return abs(a%4-b%4)+abs(a/4-b/4);
}

int main(){
  int org[16];
  int blank = 0;
  int cost = 0;
  priority_queue<board> pq;
  REP(i, 16) { cin >> org[i]; org[i]--; if(org[i]==-1) { org[i]=15; blank=i; } else cost+=dist(org[i],i); }
  pq.push(board(org, cost, 0, blank, 100));
  int res = 100;
  board target = pq.top();
  while(true){
    target = pq.top();
    pq.pop();
    if(target.c==0) {res = target.m+target.c; break;}
    REP(i, 4){
      if(abs(target.prev-i)==2) continue;
      int c_x = target.bl%4+dx[i]; int c_y = target.bl/4+dy[i];
      if(c_x<0 || c_x>3 || c_y<0 || c_y>3 ) continue;
      int cand = c_x+4*c_y;
      int d = dist(target.b[cand], target.bl) - dist(target.b[cand], cand);
      if(d>1) continue;
      if(target.c+d+target.m+1>45) continue;
      swap(target.b[cand], target.b[target.bl]);
      pq.push(board(target.b, target.c+d, target.m+1, cand, i));
      swap(target.b[cand], target.b[target.bl]);
    }
  }
  cout << res << endl;
  return 0;
}
