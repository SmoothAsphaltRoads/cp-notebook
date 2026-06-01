//  Counting Characters 

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
    for (int i = 1; i <= t; i++) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int a = 0;
        int b = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'a') {
                a++;
            }
            if (s[i] == 'b') {
                b++;
            }
        }
        cout << a << ' ' << b << '\n';
    }

    return 0;
}