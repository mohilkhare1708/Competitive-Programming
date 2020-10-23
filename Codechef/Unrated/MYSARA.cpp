#include <bits/stdc++.h>
#include <assert.h>
#include <iostream>
#define ll long long int
using namespace std;

const int MOD = 1e9+7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >> t;
	for(int u = 0; u < t; u++) {
	    ll n;
	    cin >> n;
	    ll b[n];
	    for(ll i = 0; i < n; i++)
	        cin >> b[i];
	    int flag = 0;
	    for(ll i = 0; i+1 < n; i++) {
	        if((b[i] & b[i+1]) != b[i]) {
	            cout << "0" << endl;
	            flag = 1;
	            break;
	        }
	    }
	    if(flag != 1) {
    	    ll x = 0;
    	    for(int i = 0; i < n-1; i++)
    	        x += __builtin_popcount(b[i]);
    	    ll ans = 1;
    	    for(ll i = 0; i < x; i++)
    	        ans = ans * 2 % MOD;
    	    cout << ans << endl;;
	    }
	}
	return 0;
}
