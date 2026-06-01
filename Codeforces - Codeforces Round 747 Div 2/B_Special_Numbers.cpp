//  B. Special Numbers

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
string bin(int n) {
    if (n == 0) return "0";
    string binaryStr = "";
    while (n > 0) {
        binaryStr += (n % 2 == 0 ? '0' : '1');
        n /= 2;
    }
    reverse(binaryStr.begin(), binaryStr.end());
    return binaryStr;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll n,k;
        ll p =1;
        ll ans = 0;
        cin >> n >> k;
        while (k > 0) {
            if (k % 2 == 1) {
                ans = (ans + p) % MOD;
            }
            p = (p * n) % MOD;
            k /= 2;
        }
        cout << ans << endl;
    }
    return 0;
}