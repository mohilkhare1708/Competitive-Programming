#include <bits/stdc++.h>
#include <assert.h>
#include <iostream>
using namespace std;

int main() {
	int t; 
	cin >> t;
	for(int u = 0; u < t; u++) {
		int n, ctr = 0;
		cin >> n;
		string s[n];
		int a[n][10];
		for(int i = 0; i < n; i++) {
			cin >> s[i];
			if(i == 0)
    			for(int j = 0; j < 10; j++)
    			    a[i][j] = (s[i][j] - '0');
			if(i > 0) {
				for(int j = 0; j < 10; j++) {
					a[i][j] = (s[i][j] - '0');
					if(a[i][j] == 1 && a[i-1][j] == 1) {
						a[i][j] = 0;
					}
					else if(a[i][j] == 0 && a[i-1][j] == 1) {
						a[i][j] = 1;
					}
					//cout << a[i][j] << " ";
				}
				//cout << endl;
			}
			if(i == n-1) {
				for(int j = 0; j < 10; j++) {
					if(a[i][j] == 1)
						ctr++;
				}
			}
		}
		cout << ctr << endl;
	}
}