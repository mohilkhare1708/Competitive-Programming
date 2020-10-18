/*
Author : Mohil Khare
Created On: 18 October 2020, 18:36
*/

#include <bits/stdc++.h>
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>>
#define vpll vector<pair<long long int, long long int>>
#define mp make_pair
#define pb push_back
#define endl "\n"
#define here std::cout << "here\n";
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

// program specific shorts (if any)
const ll mod = 1000000007;

using namespace std;

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll qq = 1; qq <= t; qq++) {
        ll w, n, ele; cin >> w >> n;
        vll a(w); for(ll i = 0; i < w; i++) cin >> a[i];
        ll ans = LLONG_MAX;
        for(ll i = 1; i <= 1000; i++) {
            ll ctr = 0;
            for(auto x : a) {
                ctr += min(abs(x - i), min(abs(x + n - i), abs(n - x + i)));
            }
            ans = min(ans, ctr);
        }
        cout << "Case #" << qq << ": " << ans << endl;
    }
    return 0;
}