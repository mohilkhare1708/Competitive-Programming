/*
Author : Mohil Khare
Created On: 24 October 2020, 18:58
*/

#include <bits/stdc++.h>
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>>
#define vpll vector<pair<long long int, long long int>>
#define mp make_pair
#define pb push_back
#define here std::cout << "here" << std::endl;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

// program specific shorts (if any)
const ll mod = 1000000007;

using namespace std;

// so basically, find a cycle in an undirected graph
const ll MAX = 1e5 + 1;
vll adj[MAX], ans;
bool vis[MAX];
ll p[MAX];

void dfs(ll i, ll parent) {
    p[i] = parent;
    vis[i] = true;
    for(auto x : adj[i]) {
        if(parent == x)
            continue;
        if(vis[x]) {
            ll st = i;
            while(i ^ x) {
                ans.pb(i);
                i = p[i];
            }
            ans.pb(x);
            ans.pb(st);
            cout << ans.size() << endl;
            for(auto y : ans) cout << y+1 << " ";
            exit(0);
        }
        else dfs(x, i);
    }
}

int main() {
    fastIO;
    ll n, m; cin >> n >> m;
    for(ll i = 0; i < m; i++) {
        ll a, b; cin >> a >> b;
        adj[a-1].pb(b-1);
        adj[b-1].pb(a-1);
    }
    memset(vis, false, sizeof(vis));
    for(ll i = 0; i < n; i++) {
        if(!vis[i])
            dfs(i, -1);
    }
    cout << "IMPOSSIBLE";
    return 0;
}