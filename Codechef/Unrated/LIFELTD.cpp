#include <bits/stdc++.h>
#include <assert.h>
#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int u = 0; u < t; u++) {
	    char a[3][3];
	    for(int i = 0; i < 3; i++) {
	        for(int j = 0; j < 3; j++)
	            cin >> a[i][j];
	    }
	    int flag = 0;
	    for(int i = 0; i < 2; i++) {
	        for(int j = 0; j < 2; j++) {
	            if(a[i][j] == 'l' && a[i+1][j] == 'l' && a[i+1][j+1] == 'l') {
	                flag++;
	                cout << "yes" << endl;
	                break;
	            }
	        }
	        if(flag != 0)
	            break;
	    }
	    if(flag == 0)
	        cout << "no" << endl;
	}
	return 0;
}
