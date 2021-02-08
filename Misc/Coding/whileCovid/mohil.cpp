#include <bits/stdc++.h>
#define ll long long int
#define mxm 200000
using namespace std;

ll keep[mxm+1] = {0}, ctr[mxm+1] = {0};

void place() {
    for(ll i = 1; i <= mxm; i++) {
        for(ll j = 1; j <= mxm; j+=i)
            keep[i] += ctr[j];
    }
}

int main() {
	ll n, ele; cin >> n; 
    map<ll, ll> keeper;
    ll maxi = LLONG_MIN;
	for(ll i = 0; i < n; i++) {
		cin >> ele;
        ctr[ele]++;
	}
    place();
	ll t; cin >> t;
	for(ll qq = 0; qq < t; qq++) {
		ll p, q; cin >> p >> q;
		ll lcm = (p*q) / __gcd(p, q);
		if(lcm > mxm)
            ans = keep[p] + keep[q] - keep[lcm];
        else 
            ans = keep[p] + keep[q];
        cout << ans << endl;
	}
}

