//  Playlist

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
int a (vector<int> v, int n) {
    int ans = 0;
    map <int, int> mp;
    for (int i = 0, j=0; i < n; i++) {
        j = max(mp[v[i]], j);
        ans = max(ans, i-j+1);
        mp[v[i]] = i+1;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 0;
    cin >> n;
    vector<int> v(n);
    for (ll i = 0; i <n; i++) {
        cin >> v[i];
    }
    a(v, n);
    cout << (a(v, n)   ) << endl;
}