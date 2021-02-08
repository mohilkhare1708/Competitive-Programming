#include <bits/stdc++.h>
#define ll long long int
#define MOD 100000007
using namespace std;

int main() {
    ll t; cin >> t;
    for(ll qq = 0; qq < t; qq++) {
        ll n, k;
        cin >> n >> k;
        ll l[k+1], d[k+1];
        for(ll i = 1; i <= k; i++)
            cin >> l[i];
        for(ll i = 1; i <= k; i++)
            cin >> d[i];
        ll dp[k+1][n+1];
        memset(dp, 0, sizeof(dp));
        dp[0][0] = 1; // if you need to get 0 logs out of 0 types of bundles, only way is to DO NOTHING
        for(ll i = 1; i <= k; i++) {
            for(ll j = 0; j <= n; j++) {
                ll rem = min(d[i], j/l[i]);
                for(ll f = 0; f <= rem; f++)
                    dp[i][j] = (dp[i][j] + dp[i-1][j-l[i]*f]) % MOD;
            }
        }
        cout << dp[k][n] << endl;
    }
}