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
	    ll n, ele, sum = 0; cin >> n;
	    for(ll i = 0; i < n; i++) {cin >> ele; sum += ele;}
	    if(sum % n != 0) cout << "No" << endl;
	    else cout << "Yes" << endl;
	}
	return 0;
}
