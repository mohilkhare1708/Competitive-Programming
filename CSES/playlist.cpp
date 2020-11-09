/*
Author : Mohil Khare
Created On: 30 October 2020, 21:38
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
    ll n, ele, ans = 0, len = 0; cin >> n;
    map<ll, ll> keeper;
    ll a[n+1];
    for(ll i = 1; i <= n; i++) {
        cin >> a[i];
        // cout << a[i] << endl;
        if(keeper[a[i]]) {
            // here;
            len = i - keeper[a[i]] - 1;
            keeper[a[i]] = i;
        }
        else {
            keeper[a[i]] = i;
            len++;
        }
        ans = max(ans, len);
        // cout << "\t" << ans << " " << len << endl;
    }
    cout << ans << endl;
    return 0;
}