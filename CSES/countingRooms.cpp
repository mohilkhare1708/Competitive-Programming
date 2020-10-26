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

ll n, m;
bool vis[1001][1001];
char a[1001][1001];
void issok(ll i, ll j);
void dfs(ll i, ll j);

int main() {
    fastIO;
    cin >> n >> m;
    for(ll i = 0; i < n; i++)
        for(ll j = 0; j < m; j++)
            cin >> a[i][j];
    ll ans = 0;
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < m; j++) {
            if(!vis[i][j] && a[i][j] == '.') {
                ans++;
                dfs(i, j);
            }
        }
    }
    cout << ans;
    return 0;
}

void issok(ll i, ll j) {
    if(i < 0 || i > n-1 || j < 0 || j > m-1)
        return;
    if(vis[i][j] || a[i][j] == '#')
        return;
    dfs(i, j);
}

void dfs(ll i, ll j) {
    vis[i][j] = true;
    issok(i-1, j);
    issok(i, j+1);
    issok(i+1, j);
    issok(i, j-1);
}