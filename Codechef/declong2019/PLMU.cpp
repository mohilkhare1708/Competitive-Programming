#include <bits/stdc++.h>
#include <assert.h>
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t, n, twoCount, zeroCount;
	cin >> t;
	for(int u = 0; u < t; u++) {
	    twoCount = zeroCount = 0;
	    cin >> n;
	    long int a, sum = 0;
	    for(int i = 0; i < n; i++) {
	        cin >> a;
	        if(a == 2) {
	            ++twoCount;
	        }
	        else if(a == 0)
	            ++zeroCount;
	    }
	    if(twoCount <= 1 && zeroCount <= 1)
	        cout << "0" << endl;
	    else { 
	        for(int i = 1; i < twoCount; i++)
	            sum += i;
	        for(int i = 1; i < zeroCount; i++)
	            sum += i;
	        cout << sum << endl;
	    }
	}
	return 0;
}
