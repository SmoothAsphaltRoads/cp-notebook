//  C. A TRUE Battle

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using ld = long double;

const ll MOD = 1e9 + 7;
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
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll o = 0;
        ll z = 0;
        string s;
        cin >> s;
        vector<ll> v(n);
        for(int i = 0; i < n; i++) {
            if(s[i]=='1') v[i]=1;
        }
        if (v[0] == 1 || v[n-1] == 1)
            o = 1;
        else {
            for (ll i = 1; i<n; i++) {
                if (v[i]&& v[i-1])
                    o++;
            }
        }
        if (o >= 1) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }

        }

    return 0;
}