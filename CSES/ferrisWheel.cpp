/*
Author : Mohil Khare
Created On: 18 September 2020, 00:50
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

int main() {
    fastIO;
    ll n, x; cin >> n >> x;
    ll wt[n]; for(ll i = 0; i < n; i++) cin >> wt[i];
    sort(wt, wt+n);
    bool vis[n];
    memset(vis, false, sizeof(vis));
    ll ans = 0;
    for(ll i = 0; i < n, !vis[i]; i++)
    return 0;
}