//  C. Yet Another Card Deck

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
    ll n=0, q=0;
    cin >> n >> q;
    vector<ll> a(51,-1);
    for(ll i=1;i<=n;i++) {
        ll x;
        cin >> x;
        if (a[x] == -1) {
            a[x] = i;
        }
    }
    for (ll j=1;j<=q;j++) {
        ll x;
        cin >> x;
        cout << a[x] << " ";
        for (ll i=1;i<=50;i++) {
            if (a[i] != -1 && a[i]<a[x]) {
                ++a[i];
            }

        }
        a[x]=1;
    }



}