//  B. Permutation Printing

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
        if (n == 3) {
            cout << "1 2 3" << endl;
        }
        //when n>4, get 2 pointers, i and j
        //i = 0; j =n
        // alternatively print both i and j for even
        else {
            ll i =1;
            ll  j = n;
                for (ll k = 1; k <= n; k++) {
                    if (k % 2 == 1) {
                        cout << i << " ";
                        i = i+2;
                    }
                    else {
                        cout << j << " ";
                        j = j-2;
                    }
                }
            cout << endl;
            }
        }
    }   
