#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main() {
	ll t; cin >> t;
	for(ll qq = 0; qq < t; qq++) {
		ll n; cin >> n;
		ll a[n][n];
		for(ll i = 0; i < n; i++)
			for(ll j = 0; j < n; j++)
				cin >> a[i][j];
		ll ans = 0;
		for(ll i = 0; i < n; i++) {
			for(ll j = 0; j < n; j++) {
				for(ll k = i; k < n; k++) {
					for(ll l = j; l < n; l++) {
                        //cout << "a[" << i << "][" << j << "] = " << a[i][j] << "\na[" << k << "][" << l << "] = " << a[k][l] << endl;
						if(a[i][j] > a[k][l])
							ans++;
                    }
                }
            }
        }
		cout << ans << endl;
	}
}


// 0111
// 1001