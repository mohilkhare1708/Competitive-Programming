#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
using namespace std::chrono;


int main() {
    fastIO;
    // clock_t start, end;
    // start = clock();
    int t; cin >> t;
    for(int qq = 0; qq < t; qq++) {
        long int n, k;
        cin >> n >> k;
        long long int l[k+1], d[k+1];
        for(long int i = 1; i <= k; i++)
            cin >> l[i];
        for(long int i = 1; i <= k; i++)
            cin >> d[i];
        ll dp[k+1][n+1];
        memset(dp, 0, sizeof(dp));
        dp[0][0] = 1; // if you need to get 0 logs out of 0 types of bundles, only way is to DO NOTHING
        for(ll i = 1; i <= k; i++) {
            for(ll j = 0; j <= n; j++) {
                ll rem = min(d[i], j/l[i]);
                for(ll f = 0; f <= rem; f++)
                    dp[i][j] = (dp[i][j]%MOD + dp[i-1][j-l[i]*f]%MOD) %MOD;
            }
        }
        cout << dp[k][n]%MOD << endl;
    }
    // end = clock();
    // double time_taken = double(end - start) / double(CLOCKS_PER_SEC); 
    // cout << "Time taken by program is : " << fixed  
    //      << time_taken << setprecision(5); 
    // cout << " sec " << endl;
}