#include <bits/stdc++.h>
#include <assert.h>
#include <iostream>
#define ll long long int
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	for (int u = 0; u < t; u++) {
		int n, q, p, arrEve = 0, arrOdd = 0;
		cin >> n >> q;
		int a[n], setBits[n] = {0};
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			setBits[i] = __builtin_popcount(a[i]);
			if(setBits[i] % 2 == 0)
				arrEve++;
			else 
				arrOdd++;
		}
		for(int i = 0; i < q; i++) {
			int even = 0, odd = 0;
			cin >> p;
			int pSet = __builtin_popcount(p);
			if(pSet % 2 == 0) {
				even = arrEve;
				odd = arrOdd;
			}
			else {
				even = arrOdd;
				odd = arrEve;
			}
			cout << even << " " << odd << "\n";
		}	
	}
	return 0;
}