/*
Author : Mohil Khare
Created On: 01 November 2020, 22:30
*/

#include <bits/stdc++.h>
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>>
#define vpll vector<pair<long long int, long long int>>
#define mp make_pair
#define pb push_back
#define here std::cout << "here\n";
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

// program specific shorts (if any)
const ll mod = 1000000007;

using namespace std;

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll qq = 0; qq < t; qq++) {
        ll n, q; cin >> n >> q;
        ll a[n]; for(ll i = 0; i < n; i++) cin >> a[i];
        ll ans = 1;
        for(ll i = 1; i < n; i++)
            if(a[i] != a[i-1])
                ans++;
        for(ll i = 0; i < q; i++) {
            ll x, y; cin >> x >> y;
            x--;
            if((a[x] == a[x-1]) && (a[x] == a[x+1])) {
                if(y != a[x]) ans += 2;
            }
            else if((a[x] != a[x-1]) && (a[x] == a[x+1])) {
                if(y != a[x]) ans ++;
                if(y == a[x-1]) ans --;
            }
            else if((a[x] == a[x-1]) && (a[x] != a[x+1])) {
                if(y != a[x]) ans ++;
                if(y == a[x+1]) ans --;
            }
            else {
                if(y == a[x-1]) ans --;
                if(y == a[x+1]) ans --;
            }
            a[x] = y;
            cout << ans-1 << "\n";
        }
    }
    return 0;
}