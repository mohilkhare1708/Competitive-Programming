// @mohilkhare17
//headers
#include <bits/stdc++.h>
#include <assert.h>
//shorts
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>
#define vpll vector<pair<long long int, long long int>>
#define sll set<long long int>
#define mp make_pair
#define pb push_back
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)

using namespace std;

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll q = 1; q <= t; q++) {
        ll n, k, ans = 0; cin >> n >> k;
        ll a[n]; for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) {
            if(a[i] == k) {
                bool here = true;
                for(ll j = i, x = 0; j < i+k && j < n; j++, x++) {
                    if(i+k-1 >= n) {
                        here = false;
                        break;
                    }
                    if(a[j] != k-x) {
                        here = false;
                        i = j-1;
                        break;
                    }
                }
                if(here)
                    ans++;
            }
        }
        cout << "Case #" << q << ": " << ans << endl;
    }
    return 0;
}