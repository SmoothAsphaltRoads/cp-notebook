//  C. Monocarp's String

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
        string s;
        cin >> s;
        ll a = 1, b = 1;
        vector<ll> a1;
        vector<ll> b1;
        ll asum = 0;
        ll bsum = 0;
        ll ac = 0;
        ll bc = 0;
        //first check if both elements are same
        // if yes then check if a or b
        // if a or b, do a++ or b++
        // if its not check if a || b > 1; then store in a or b vector by checking prev element.
        for (int i = 0; i < n; i++) {
            if (s[i]==s[i-1]) {
                if (s[i]=='a') {
                    ++a;
                    b=1;
                    ac++;
                }
                else if (s[i]=='b') {
                    ++b;
                    a=1;
                    bc++;
                }
            }
            else if (s[i]!= s[i-1]) {
                if (a>1 || b>1) {
                    if (a>1) {
                        a1.push_back(a);
                        asum+=a;
                        a=1;
                        b=1;
                        if (s[i]=='a') {
                            ac++;
                        }
                        else if (s[i]=='b') {
                            bc++;
                        }
                    }
                    if (b>1) {
                        b1.push_back(b);
                        bsum+=b;
                        b=1;
                        a=1;
                        if (s[i]=='a') {
                            ac++;
                        }
                        else if (s[i]=='b') {
                            bc++;
                        }
                    }
                }
            }
        }
        ll ans=0;
        ll d;
        if (ac>bc) {
            d = ac-bc;
            if (d>asum)
                cout << "-1" << endl;
            else
                cout << (asum-d) << endl;
        }
        else {
            d = bc-ac;
            if (d>bsum)
                cout << "-1" << endl;
            else
                cout << (bsum-d) << endl;
        }
    }
    return 0;
}