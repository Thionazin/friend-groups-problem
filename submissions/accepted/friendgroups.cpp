#include <bits/stdc++.h>

using namespace::std;

std::vector<int> par, rk;

int find(int a) {
    if(a == par[a]) return a;
    else return par[a] = find(par[a]);
}

void join(int a, int b) {
    a = find(a);
    b = find(b);
    
    if(a == b) return;
    if (rk[a] < rk[b]) swap(a, b);
    if (rk[b] == rk[a]) rk[a]++;
    
    par[b] = a;
}

void fast() {
        std::ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
}

int main() {
        fast();
        int n;
        int k;
        cin >> n >> k;
        par = vector<int>(10001);
        rk = vector<int>(10001);
        iota(par.begin(), par.end(), 0);
        fill(rk.begin(), rk.end(), 0);
        for(int i = 0; i < n; i++) {
          int t1;
          int t2;
          cin >> t1 >> t2;
          join(t1, t2);
        }
        bool can = true;
        for(int i = 0; i < k; i++) {
          int t1;
          int t2;
          cin >> t1 >> t2;
          if(find(t1) == find(t2)) can = false;
        }
        if(can) {
          cout << "No" << endl;
        } else {
          cout << "Yes" << endl;
        }
}
