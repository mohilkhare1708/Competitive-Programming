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
#define endl "\n"
#define here std::cout << "here\n";
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

// program specific shorts (if any)
const ll mod = 1000000007;

using namespace std;

// so basically, find a cycle in an undirected graph

int main() {
    fastIO;
    ll n, m; cin >> n >> m;
    vvll adj(n);
    for(ll i = 0; i < m; i++) {
        ll a, b; cin >> a >> b;
        adj[a-1].pb(b-1);
        adj[b-1].pb(a-1);
    }
    
    return 0;
}