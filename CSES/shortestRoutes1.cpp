/*
Author : Mohil Khare
Created On: 31 October 2020, 10:32
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
ll n, m;

int main() {
    fastIO;
    cin >> n >> m;
    ll g[n+1][n+1];
    memset(g, -1, sizeof(g));
    for(ll i = 0; i < m; i++) {
        ll a, b, c; cin >> a >> b >> c;
        g[a][b] = c;
    }
    vll ans; 
    ans.pb(0);
    for(ll i = 2; i < n+1; i++) {
        
    }
    return 0;
}