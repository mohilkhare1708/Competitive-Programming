#include <bits/stdc++.h>
#include <assert.h>
#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int u = 0; u < t; u++) {
	    int n;
	    cin >> n;
	    int a[n];
	    for(int i = 0; i < n; i++)
	        cin >> a[i];
	    sort(a, a+n);
	    cout << a[0] << " " << a[n-1] << endl;
	}
	return 0;
}
