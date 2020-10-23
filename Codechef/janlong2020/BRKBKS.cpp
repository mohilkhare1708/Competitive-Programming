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
	    int s, w1, w2, w3;
	    cin >> s >> w1 >> w2 >> w3;
	    int sum = w1 + w2 + w3, ans = 0;
	    int firstTwo = w1 + w2, lastTwo = w2 + w3;
	    if(s >= sum)
	        ans = 1;
	    else if(firstTwo <= s || lastTwo <= s)
	        ans = 2;
	    else
	        ans = 3;
	    cout << ans << endl;
	}
	return 0;
}
