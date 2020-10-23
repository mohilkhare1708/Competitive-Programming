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
	    ll n;
	    cin >> n;
	    ll a[n], b[n];
	    for(ll i = 0; i < n; i++)
	        cin >> a[i];
	    for(ll i = 0; i < n; i++)
	        cin >> b[i];
	    sort(a, a+n);
	    sort(b, b+n);
	    if(a[n-1] != b[n-1])
	        cout << "YES" << endl;
	    else
	        cout << "NO" << endl;
	}
	return 0;
}
