//  Stick Lengths

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
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll sum = 0;
    ll mean = 0;
    sort (a.begin (), a.end ());
    if (n%2 == 0) {
        mean = (a[n/2]+a[n/2-1])/2;
    } else {
        mean = a[n/2];
    }
    ll cost = 0;
    for (ll i = 0; i < n; i++) {
        if (a[i]>mean) {
            cost+=a[i]-mean;

        }
        else if (a[i]<mean) {
            cost+=mean-a[i];
        }
        }
    cout << cost << endl;

    return 0;
}