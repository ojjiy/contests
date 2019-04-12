#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

int p[100000];
pii pp[100000];

int main(){
  int n, m;
  cin >> n >> m;
  for(int i=0; i<n; i++)
    cin >> p[i];
  for(int i=0; i<m; i++){
    int x, y;
    cin >> x >> y;
    pp[m] = make_pair(x, y);
  }
}