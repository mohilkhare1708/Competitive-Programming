/*
Author : Mohil Khare
Created On: 24 October 2020, 17:35
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
const ll MAX = 1e5+1;
using namespace std;

vvll adj(MAX);

int main() {
    fastIO;
    ll n, m; cin >> n >> m;
    for(ll i = 0; i < m; i++) {
        ll a, b; cin >> a >> b;
        adj[a-1].pb(b-1);
        adj[b-1].pb(a-1);
    }
    cout << "the graph" << endl;
    for(ll i = 0; i < n; i++) {
        for(auto x : adj[i])
            cout << x << " ";
        cout << endl;
    }
    cout << endl;
    vector<bool> vis(n, false);
    vll ans(n, -1);
    bool poss = true;
    for(ll i = 0; i < n; i++) {
        if(vis[i])
            continue;
        else {
            vis[i] = true;
            ans[i] = 1;
            for(auto x : adj[i]) {
                if(ans[x] == 1) {
                    poss = false;
                    break;
                }
                else {
                    ans[x] = 2;
                    vis[x] = true;
                }
            }
            if(!poss) break;
        }
        cout << "visiting " << i << endl;
        for(auto x : vis) cout << x << " "; cout << endl;
        for(auto x : ans) cout << x << " "; cout << endl;
    }
    if(!poss) cout << "IMPOSSIBLE";
    else for(auto x : ans) cout << x << " ";
    return 0;
}