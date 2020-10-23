#include <bits/stdc++.h>
#include <assert.h>
#include <iostream>
#define ll long long int
#define MOD 1000000007
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >> t;
	for(int u = 0; u < t; u++) {
	    ll n, temp;
	    cin >> n;
	    vector<ll> p;
	    for(ll i = 0; i < n; i++) {
	        cin >> temp;
	        if(temp != 0)
	            p.push_back(temp);
	    }
	    ll sum = 0;
	    sort(p.begin(), p.end(), greater<ll>());
	    for(ll i = 0; i < p.size(); i++) {
	        ll price = (p[i] - i);
	        if(price > 0)
	            sum += price%MOD;
	    }
	    cout << sum%MOD << endl;
	}
	return 0;
}
