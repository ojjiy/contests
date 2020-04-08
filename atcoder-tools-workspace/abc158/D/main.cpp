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
    string s;
    char res[500000];
    int q;
    cin >> s >> q;
    REP(i, s.length()) res[i+200000] = s[i];
    int prev = 199999;
    int next = 200000+s.length();
    bool rev = false;
    REP(i, q){
        int t;
        cin >> t;
        if(t==1) { rev = !rev; continue; }
        int f;
        char c;
        cin >> f >> c;
        if((!rev && f == 2) || (rev && f == 1)) { res[next] = c; next++; }
        else {res[prev] = c; prev--;}
    }
    if (!rev) {for(int i=prev+1; i<next; i++) cout << res[i]; cout<< endl;}
    else{for(int i=next-1; i>prev; i--) cout << res[i]; cout << endl;}
    return 0;
}
