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
	int arr[t], dp[t];
	for(int u = 0; u < t; u++) {
	    cin >> arr[u];
	    if(u < 3)
	        dp[u] = arr[u];
	}
	if(t == 1)
	    cout << arr[0] << endl;
	else if(t == 2)
	    cout << min(arr[0], arr[1]) << endl;
	else if(t == 3)
	    cout << min(arr[0], min(arr[1], arr[2])) << endl;
	else {
    	for(int i = 3; i < t; i++)
	        dp[i] = min(dp[i-1], min(dp[i-2], dp[i-3])) + arr[i];
	    //for(auto x : dp) cout << x << " "; cout << endl;
	    //cout << dp[t-1] << " " << dp[t-2] << " " << dp[t-3] << endl;
	    cout << min(dp[t-1], min(dp[t-2], dp[t-3])) << endl;
	}
	return 0;
}
