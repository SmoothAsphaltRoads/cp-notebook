//  B. Serval and Final MEX

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
ll mex (vector<ll> b, ll n) {
    for (ll i = 0; i<(n-3); i++) {
        binsearch(b[i],b[i+1],MOD);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> b(n-3);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        if (n>4) {
            for (ll i = 0; i < (n-3); i++) {
                cin >> b[i];
            }

        }

    }


    return 0;
}