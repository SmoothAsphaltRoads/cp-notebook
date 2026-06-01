//  Missing Coin Sum

 #include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ull = unsigned long long;
using ld = long double;

const int MOD = 1e9 + 7;
const ll INF =  1e18;

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
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll sum =1;
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    sum = 0;
    bool ac=false;
    for (ll i = 0; i < n; i++) {
        if (v[i]> (sum+1)) {
            cout << (sum+1) << endl;
            ac = true;
            return 0;
        }
        else {
            sum += v[i];
        }
    }
    cout << (sum+1) << endl;

}