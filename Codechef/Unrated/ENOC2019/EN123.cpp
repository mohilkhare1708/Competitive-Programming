#include <bits/stdc++.h>
#include <assert.h>
#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int u = 0; u < t; u++) {
	    int n, k;
	    cin >> n >> k;
	    int temp;
	    for(int  i = 0; i < n; i++) {
	        cin >> temp;
	        k -= temp;
	    }
	    if(k < 0) {
	        cout << "NO" << endl;
	    }
	    else
	        cout << "YES" << endl;
	}
	return 0;
}
