/*
Author : Mohil Khare
Created On: 06 October 2020, 17:56
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
    ll n; cin >> n;
    ll a[n]; for(ll i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    ll median = a[n/2];
    ll ans = 0;
    for(auto x : a)
        ans += abs(x - median);
    cout << ans << endl;
    return 0;
}