#include <bits/stdc++.h>
#include <assert.h>
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t, n, max, temp;
	cin >> t;
	for(int u = 0; u < t; u++) {
        max = -1;
        int numCount[101] = {0};
        cin >> n;
        for(int i = 0; i < n; i++) {
            cin >> temp;
            numCount[temp]++;
            if(numCount[temp] > max)
                max = numCount[temp];
        }
        cout << n-max << endl;
    }
    return 0;
}

