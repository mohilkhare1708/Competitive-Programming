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
	     ll a, b, c, d, max, min;
	     cin >> a >> b >> c >> d;
	     if(a == b && c == d) {
	         cout << "YES" << endl;
	         continue;
	     }
	     if(c > d) {
	         max = c;
	         min = d;
	     }
	     else if(d > c) {
	         max = d;
	         min = c;
	     }
	     else {
	         cout << "NO" << endl;
	         continue;
	     }
	     double ans = ((double)min * (double)abs(b-a))/(double)abs(d-c);
	     //cout << min << " " << abs(b-a) << " " << abs(c-d) << " " << ans << endl;
	     if(abs(b-a)%abs(c-d) == 0)
	        cout << "YES" << endl;
	     else
	        cout << "NO" << endl;
	}
	return 0;
}
