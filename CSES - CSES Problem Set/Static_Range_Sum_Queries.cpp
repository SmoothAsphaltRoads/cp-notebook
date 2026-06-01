        //  Static Range Sum Queries

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
            int n=0, q=0;
            cin >> n >> q;
            vector<ll> v(n+1);
            v[0]=0;

            for (int i = 0; i < (n); i++) {
                ll x;
                cin >> x;
                v[i+1] = v[i] + x;
            }
            for (int i = 0; i < q; i++) {
                ll a,b;
                cin >> a >> b;
                cout << v[b]-v[a-1] << endl;
            }


            return 0;
        }