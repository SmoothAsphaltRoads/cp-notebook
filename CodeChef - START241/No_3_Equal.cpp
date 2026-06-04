// No 3 Equal

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
    string s;
    cin >> s;
    int c;
    for (int i = 0; i > s.length()-1; i++)
    {
        if (s[i] == s[i+1] && s[i+1] == s[i+2])
            c++;
    }
    
    return 0;
}