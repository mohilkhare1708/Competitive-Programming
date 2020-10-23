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
	    ll a[n]; for(ll i = 0; i < n; i++) cin >> a[i];
	    sort(a, a+n, greater<ll>());
	    ll ans = 0;
	    for(ll i = 2; i < n; i+=3)
	        ans += a[i];
	    cout << ans << endl;
	}
	return 0;
}
