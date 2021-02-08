//Codechef: mohilllll Codeforces: mohilkhare Google: mohilkhare17
//headers
#include <bits/stdc++.h>
#include <assert.h>
//shorts
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>>
#define vpll vector<pair<long long int, long long int>>
#define sll set<long long int>
#define mp make_pair
#define pb push_back
#define endl "\n"
#define here std::cout << "here\n";
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)

using namespace std;
// using namespace std::chrono;
// auto start = high_resolution_clock::now();
// auto stop = high_resolution_clock::now();
// auto duration = duration_cast<microseconds>(stop - start);
// cout << "Time taken by function: " << duration.count() << " microseconds" << endl;

const ll inf = LLONG_MAX;

ll dpSolve(vvll query, ll n) {
    ll dp[n+1][n+1];
    memset(dp, inf, sizeof(dp));
    for(ll i = n-1; i >= 0; i--) {
        ll x = query[i-1][1];
        vll y = query[i];
        vll z = y;
        for(ll )
    }
}

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll qq = 0; qq < t; qq++) {
        ll m, n; cin >> m >> n;
        vvll query;
        for(ll i = 0; i < n; i++) {
            vll q(2);
            cin >> q[0] >> q[1];
            query.pb(q);
        }
    }
    dpSolve(query, n);
    return 0;
}