/*
Author : Mohil Khare
Created On: 30 October 2020, 23:04
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
    ll n, ans = 0; cin >> n;
    bool vis[n]; ll a[n];
    for(ll i = 0; i < n; i++) cin >> a[i];
    memset(vis, false, sizeof(false));
    for(ll i = 0; i < n; i++) {
        if(vis[i]) continue;
        else {
            ll x = i+1, cur = a[i];
            ans++;
            while(x < n) {
                if(a[x] < cur) {
                    vis[x] = true;
                    cur = a[x];
                }
                x++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}