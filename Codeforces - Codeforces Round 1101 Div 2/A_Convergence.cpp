//  A. Convergence

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using ld = long double;

const int MOD = 1e9 + 7;
const ll INF = 1e18;

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

int main() {
    int t, n;
    if (cin >> t) {
        while (t--) {
            cin >> n;
            vector<int> a(n);
            for (int& x : a) cin >> x;

            int m = n;
            for (int x : a) {
                int l = 0, g = 0;
                for (int y : a) {
                    if (y < x) l+   +;
                    if (y > x) g++;
                }
                if (max(l, g) < m) m = max(l, g);
            }
            cout << m << "\n";
        }
    }
}






