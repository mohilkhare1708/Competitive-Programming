/*
Author : Mohil Khare
Created On: 24 October 2020, 16:49
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
const ll maxN = 100001;

using namespace std;
vvll arr(maxN);

int main() {
    fastIO;
    ll n, m; cin >> n >> m;
    vll p(n, -1);
    for(ll i = 0; i < m; i++) {
        ll a, b; cin >> a >> b;
        arr[a-1].pb(b-1);
        arr[b-1].pb(a-1);
    }
    queue<ll> keeper;
    keeper.push(0);
    p[0] = -2;
    while(keeper.size()) {
        ll fr = keeper.front(); keeper.pop();
        for(auto x : arr[fr]) {
            if(p[x] <= -1) {
                p[x] = fr;
                keeper.push(x);
            }
        }
    }
    vll ans;
    if(p[n-1] <= -1) cout << "IMPOSSIBLE";
    else {
        for(ll i = n-1; i > 0;) {
            ans.pb(i);
            i = p[i];
        }
        ans.pb(0);
        reverse(ans.begin(), ans.end());
        cout << ans.size() << endl; for(auto x : ans) cout << x+1 << " ";
    }
    return 0;
}