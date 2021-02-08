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
using namespace std::chrono;

ll sumOfMultiples(ll a, ll N) {  
	ll m = N / a; 
	ll sum = m * (m + 1) / 2; 
	ll ans = a * sum; 
	return ans; 
} 


int main() {
    ll t; cin >> t;
    for(ll qq = 0; qq < t; qq++) {
        ll n, k; cin >> n >> k;
        auto start = high_resolution_clock::now();
        if(k > n) cout << n*(n+1)/2 << endl;
        else {
            map<ll, ll> keeper;
            ll ans = (n*(n+1)/2) - sumOfMultiples(k, n);
            for(ll i = k; i <= n; i+=k) {
                ll rem = i / k;
                while(true) {
                    if(rem % k == 0) {
                        rem /= k;
                    }
                    else if(keeper.find(rem) != keeper.end()) {
                        ans += keeper[rem];
                        keeper[i] = keeper[rem];
                        break;
                    }
                    else {
                        ans += rem;
                        keeper[i] = rem;
                        break;
                    }
                }
            }
            cout << ans << endl;
        }
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        cout << "Time taken by function: " << duration.count() << " microseconds" << endl;
    }
}