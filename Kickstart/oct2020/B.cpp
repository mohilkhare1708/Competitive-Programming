/*
Author : Mohil Khare
Created On: 18 October 2020, 17:39
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
        ll n; cin >> n;
        ll a[n][n];
        for(ll i = 0; i < n; i++)
            for(ll j = 0; j < n; j++)
                cin >> a[i][j];
        ll ans = LLONG_MIN;
        for(ll i = 0; i < n; i++) {
            ll x = i, j = 0, sum = 0;
            while(x < n && j < n) {
                sum += a[j][x];
                x++;
                j++;
            }
            ans = max(ans, sum);
        }
        for(ll i = 0; i < n; i++) {
            ll x = i, j = 0, sum = 0;
            while(x < n && j < n) {
                sum += a[x][j];
                x++;
                j++;
            }
            ans = max(ans, sum);
        }
        cout << "Case #" << qq << ": " << ans << endl;
    }
    return 0;
}