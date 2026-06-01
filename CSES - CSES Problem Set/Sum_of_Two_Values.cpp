#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long ll;
int main() {

    vector <pair<ll,ll>> v;
    ll n, x;
    cin >> n >> x;
    ll temp;
    vector <ll> t;
    for (int i = 0; i < n; i++){
        cin >> temp;
        v.push_back({temp, i});
    }
    int a = 0;
    int b = n-1;
    ll ans = 0;
    sort (v.begin(), v.end());
    ll f;
    // if sum is too high, decrease b;
    // if sum is too low, increase a;
    while (a!=b){
        if (v[a].first+v[b].first == x){
            ans = 1;
            cout << (v[a].second + 1) << " " << (v[b].second + 1);
            break;
        }
        else if (v[a].first+v[b].first > x){
            b--;
        }
        else {
            a++;
        }
    }
    if (ans!=1)
        cout << "IMPOSSIBLE";
}