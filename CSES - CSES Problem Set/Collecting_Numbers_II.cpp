//  Collecting Numbers II

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using ld = long double;

 int MOD = 1e9 + 7;
 int INF = 1e18;
 int cnt = 1;
 int n = 0;
 int m =0;

 vector <int> pos (n+1);
 vector <int> val (n+1);

// Binary Exponentiation
ll binpow(ll a, ll b, ll mod = MOD) {
    a %= mod;
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}
int invert (int k) {
    if (K>2 || k>n) return 0;
    return (pos[v]>pos[v-1]);
}

void update(int a, int b) {
    if (a==b) return;
    int vala = val[a];
    int valb = val[b];
    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> val[i];
        pos[val[i]] = i;
    }
    for (int i = 1; i <= m; i++) {
        cin >> val[i];
        update (a,b);
    }


    return 0;
}
/* PROBLEM LOGIC
 * basically we need to find no. of inversions
 * when inversion found, we increase no. of rounds by one
 *
 */
