//  Collecting Numbers

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
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin >> n >> m;
    vector <pair<ll, ll>> v(n);
    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        v[i].first = x;
        v[i].second = i;
    }
    sort(v.begin(), v.end());
    while (m--) {
        int a,b;
        cin >> a >> b;
        ll it = 0;
        ll r = 1;
        for (ll i = 0; i < n; i++) {
            if (v[i].second < it) {
                r ++;
                it = v[i].second;
            }
            else if (v[i].second > it) {
                it = v[i].second;
            }
        }
        cout << (r) << endl;
    }
    return 0;
}