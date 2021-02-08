//Codechef: mohilllll Codeforces: mohilkhare Google: mohilkhare17
//headers
#include <bits/stdc++.h>
#include <assert.h>
//shorts
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>
#define sll stack<long long int>
#define pb push_back
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)
//
//namespaces
using namespace std;


ll _lis( ll arr[], ll n, ll *max_ref) 
{ 
	/* Base case */
	if (n == 1) 
		return 1; 

	// 'max_ending_here' is length of LIS ending with arr[n-1] 
	ll res, max_ending_here = 1; 

	/* Recursively get all LIS ending with arr[0], arr[1] ... 
	arr[n-2]. If arr[i-1] is smaller than arr[n-1], and 
	max ending with arr[n-1] needs to be updated, then 
	update it */
	for (ll i = 1; i < n; i++) 
	{ 
		res = _lis(arr, i, max_ref); 
		if (arr[i-1] < arr[n-1] && res + 1 > max_ending_here) 
			max_ending_here = res + 1; 
	} 

	// Compare max_ending_here with the overall max. And 
	// update the overall max if needed 
	if (*max_ref < max_ending_here) 
	*max_ref = max_ending_here; 

	// Return length of LIS ending with arr[n-1] 
	return max_ending_here; 
} 

// The wrapper function for _lis() 
ll lis(ll arr[], ll n) 
{ 
	// The max variable holds the result 
	ll max = 1; 

	// The function _lis() stores its result in max 
	_lis( arr, n, &max ); 

	// returns max 
	return max; 
} 

void fill(ll a[], ll ans[], ll n, ll m) {
    ll x = 0;
    for(ll i = 0; i < m; i++) {
        for(ll j = 0; i < n; j++)
            ans[x] = a[j];
    }
}

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll q = 0; q < t; q++) {
        ll n; cin >> n;
        ll one[n]; for(ll i = 0; i < n; i++) cin >> one[i];
        ll ones = lis(one, n);
        
    }
    return 0;
}