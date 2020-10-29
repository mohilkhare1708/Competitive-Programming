/*
Author : Mohil Khare
Created On: 29 October 2020, 15:03
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

const ll MAX = 1e5 + 1;
vll adj[MAX];
ll n, m, ans[MAX];

void dfs(ll i, ll cur = 0) {
    if(~ans[i]) {
        if(ans[i] ^ cur) {
            cout << "IMPOSSIBLE";
            exit(0);
        }
        return;
    }
    ans[i] = cur;
    for(auto x : adj[i])
        dfs(x, cur ^ 1);
}

int main() {
    fastIO;
    cin >> n >> m;
    for(ll i = 0; i < m; i++) {
        ll a, b; cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    memset(ans, -1, sizeof(ans));
    for(ll i = 1; i <= n; i++) {
        if(ans[i] < 0) {
            dfs(i);
        } 
    }
    for(ll i = 1; i <= n; i++) cout << ans[i]+1 << " ";
    return 0;
}