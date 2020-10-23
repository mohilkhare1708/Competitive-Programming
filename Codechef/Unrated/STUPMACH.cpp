#include <bits/stdc++.h>
#include <assert.h>
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >> t;
	for(int u = 0; u < t; u++) {
	    int n;
	    cin >> n;
	    long int min = INT_MAX, a[n], score = 0;
	    for(int i = 0; i < n; i++) {
	        cin >> a[i];
	        if(min > a[i]){
	            //score += a[i];
	            min = a[i];
	        }
	        score += min;
	    }
	    cout << score << endl;
	}
	return 0;
}
