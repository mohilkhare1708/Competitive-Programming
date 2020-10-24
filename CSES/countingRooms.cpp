/*
Author : Mohil Khare
Created On: 23 October 2020, 21:37
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

void dfs(vector<vector<bool>> vis, vector<vector<char>> a, ll i, ll j, ll n, ll m) {
    if(i >= n || j >= m || i <= -1 || j <= -1 | vis[i][j] || a[i][j] == '#')
        return;
    vis[i][j] = true;
    if(i+1 < n && !vis[i+1][j] && a[i+1][j] == '.')
        dfs(vis, a, i+1, j, n, m);
    if(i-1 >= 0 && !vis[i-1][j] && a[i-1][j] == '.')
        dfs(vis, a, i-1, j, n, m);
    if(j+1 < m && !vis[i][j+1] && a[i][j+1] == '.')
        dfs(vis, a, i, j+1, n, m);
    if(j-1 >= 0 && !vis[i][j-1] && a[i][j-1] == '.')
        dfs(vis, a, i, j-1, n, m);
    return;
}

int main() {
    fastIO;
    ll n, m; cin >> n >> m;
    vector<vector<char>> a(n, vector<char>(m, 0));
    vector<vector<bool>> vis(n, vector<bool>(m, false));
    for(ll i = 0; i < n; i++)
        for(ll j = 0; j < m; j++)
            cin >> a[i][j];
    ll ans = 0;
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < m; j++) {
            if(!vis[i][j] && a[i][j] == '.') {
                ans++;
                dfs(vis, a, i, j, n, m);
            }
        }
    }
    cout << ans;
    return 0;
}