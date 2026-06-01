//  Maximum Subarray Sum

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
        if (b & 1) {
            res = (res * a) % mod;
            a = (a * a) % mod;
            b >>= 1;
        }
        return res;
    }
}

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        ll n;
        cin >> n;
        vector <ll> a(n);
        for (int i = 0;i < n; i++)
            cin >> a[i];
    ll ans = a[0];
    ll best = a[0];
    for (ll i = 1; i < n; i++) {
        best = max(best + a[i], a[i]);
        ans = max(ans, best);
    }
    cout << ans << '\n';
    }
