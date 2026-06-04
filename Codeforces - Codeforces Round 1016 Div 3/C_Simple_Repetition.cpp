    // C. Simple Repetition

    #include <bits/stdc++.h>
    using namespace std;

    using ll = long long;
    using ull = unsigned long long;
    using ld = long double;

    const int MOD = 1e9 + 7;
    const ll INF = 1e18;

    // Binary Exponentiation
    ll binpow(ll a, ll b, ll mod = MOD)
    {
        a %= mod;
        ll res = 1;
        while (b > 0)
        {
            if (b & 1)
                res = (res * a) % mod;
            a = (a * a) % mod;
            b >>= 1;
        }
        return res;
    }
    bool isPrime(ll n)
    {
        if (n <= 1)
            return false;
        for (ll i = 2; i * i <= n; i++)
            if (n % i == 0)
                return false;
        return true;
    }

    int main()
    {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        ll t = 0;
        cin >> t;
        while (t--)
        {
            ll k;
            ll x;
            cin >> x >> k;
            bool ans = false;
            if (k==1 && x!=1)
                ans = isPrime(x);
            if (k==1 && x==2)
                ans = true;
            if (k==2 && x==1)
                ans = true;
            if (ans)
            {
                cout <<"YES" << endl;
            }
            else
                cout <<"NO" << endl;
        }
        return 0;
    }
