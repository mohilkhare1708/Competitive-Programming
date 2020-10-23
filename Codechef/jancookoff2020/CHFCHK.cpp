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
	    int nums[n];
	    for(int i = 0; i < n; i++) {
	        cin >> nums[i];
	    }
	    sort(nums, nums+n);
	    cout << nums[0] << endl;
	}
	return 0;
}
