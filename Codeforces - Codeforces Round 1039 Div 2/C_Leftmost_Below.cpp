//  C. Leftmost Below

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
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n,0);
        for (ll i = 0; i <n; i++) {
            cin >> a[i];
        }
        ll m = a[0];
        bool win = true;
        for (ll i = 1; i <n; i++) {
            if (a[i]>=2*m){
                cout << "NO" << endl;
                win = false;
                break;
        }
            else {
                m = min(a[i],m);
            }
        }

        if (win) { cout << "YES" << endl; }
    }
    

    return 0;
}