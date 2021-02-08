#include <bits/stdc++.h>
#include <assert.h>
#include <iostream>
#define ll long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >> t;
	for(int u = 0; u < t; u++) {
	    ll n; cin >> n;
	    vector<ll> digits(n);
        for(ll i = 0; i < n; i++) cin >> digits[i];
	    sort(digits.begin(), digits.end());
	    ll ans = 0;
	    do {
	        ll num = 0;
            for(auto x : digits) cout << x << " "; cout << endl;
	        for(ll i = 0; i < n; i++) {
	            num += (digits[i]*(ll)pow(10,n-i-1));
	        }
            cout << num << endl;
	        ans += num;
	    } while(next_permutation(digits.begin(), digits.end()));
	    cout << ans << endl;
	}
	return 0;
}