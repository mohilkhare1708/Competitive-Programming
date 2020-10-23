#include <bits/stdc++.h>
#include <assert.h>
#include <iostream>
using namespace std;

int decToBinary(int n) 
{ 
    int ctr = 0;
    int i = 0; 
    while (n > 0) { 
        if(n % 2 == 0) 
            ctr++;
        n = n / 2; 
        i++; 
    } 
    return ctr;
} 

int main() {
	int t, ans;
	cin >> t;
	for(int u = 0; u < t; u++) {
	    int n;
	    cin >> n;
	    ans = decToBinary(n);
	    cout << ans << endl;
	}
	return 0;
}
