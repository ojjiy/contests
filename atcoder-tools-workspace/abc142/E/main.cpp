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

int a[100005];
bitset<12> c[100005];
int cost[100005][4100];

int main(){
    int n, m;
    cin >> n >> m;
    REP(i, m) REP(j, 4096) cost[i][j] = INF;
    REP(i, m){
        int b;
        cin >> a[i] >> b;
        REP(j, b){
            int tmp;
            cin >> tmp;
            c[i].set(tmp);
        }
        
    }
    return 0;
}
