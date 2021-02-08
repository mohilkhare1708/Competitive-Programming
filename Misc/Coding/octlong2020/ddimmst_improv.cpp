/*
Author : Mohil Khare
Created On: 09 October 2020, 19:07
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

using namespace std;

ll weight(vll a, vll b) {
    ll ans = 0;
    for(ll i = 0; i < a.size(); i++)
        ans += abs(a[i] - b[i]);
    return ans;
}

// I attribute this section of code to GFG, adapted from https://www.geeksforgeeks.org/prims-minimum-spanning-tree-mst-greedy-algo-5/

ll maxKey(vll key, vector<bool> visited) {
    ll maxx = LLONG_MIN, maxIn;
    for(ll i = 0; i < key.size(); i++)
        if(!visited[i] && key[i] > maxx)
            maxx = key[i], maxIn = i;
    return maxIn;
}

vll prims(vvll graph, ll n) {
    vll MST(n), key(n);
    vector<bool> visited(n, false);
    for(ll i = 0; i < n; i++) key[i] = LLONG_MIN;
    key[0] = 0, MST[0] = -1;
    for(ll i = 0; i < n-1; i++) {
        ll maxK = maxKey(key, visited);
        visited[maxK] = true;
        for(ll j = 0; j < n; j++)
            if(graph[maxK][j] != 0 && !visited[j] && graph[maxK][j] > key[j])
                MST[j] = maxK, key[j] = graph[maxK][j];
    }
    return MST;
}

// GFG adapted part ends here. I don't want a mail Codechef, ok?

int main() {
    fastIO;
    ll n, d, ele; cin >> n >> d;
    vvll keep(n, vll(d, 0));
    for(ll i = 0; i < n; i++)
        for(ll j = 0; j < d; j++) 
            cin >> keep[i][j];
    vvll graph(n, vll(n, 0));
    for(ll i = 0; i < n; i++) {
        for(ll j = i+1; j < n; j++) {
            ll wt = weight(keep[i], keep[j]);
            graph[i][j] = wt;
            graph[j][i] = wt;
        }
    }
    vll MST = prims(graph, n);
    ll ans = 0;
    for(ll i = 1; i < n; i++)
        ans += graph[MST[i]][i];
    cout << ans << endl;
    return 0;
}