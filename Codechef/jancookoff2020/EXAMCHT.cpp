#include <bits/stdc++.h>
#include <assert.h>
#include <iostream>
using namespace std;

int find (long int arr[], int n) 
{ 
	sort(arr, arr + n); 
	int num = 0;
	int d = arr[n-1] - arr[0]; 
	vector <int> v; 
	for (int i=1; i*i<=d; i++) 
	{ 
		if (d%i == 0) 
		{ 
			v.push_back(i); 
			if (i != d/i) 
				v.push_back(d/i); 
		} 
	} 
	for (int i=0; i<v.size(); i++) 
	{ 
		int temp = arr[0]%v[i]; 
		int j; 
		for (j=1; j<n; j++) 
			if (arr[j] % v[i] != temp) 
				break; 
		if (j == n) 
			num++;
	} 
	return num;
} 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >> t;
	for(int u = 0; u < t; u++) {
	    long int a[2];
	    cin >> a[0] >> a[1];
	    int ans = find(a, 2);
	    cout << ans << endl;
	}
	return 0;
}
