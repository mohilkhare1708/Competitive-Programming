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
	    double a1 = 0.0, a2 = 0.0;
	    for(ll i = 0; i < n; i++) {
	        double g, a, b; cin >> g >> a >> b;
	        a1 += g*b/(a+b);
	        a2 += g*a/(a+b);
	    }
	    cout << setprecision(8) << a1 << " " << a2 << endl;
	}
	return 0;
}
