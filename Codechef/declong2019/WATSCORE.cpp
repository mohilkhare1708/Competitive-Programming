#include <bits/stdc++.h>
#include <assert.h>
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t, n, index, score, final;
	cin >> t;
	for(int u = 0; u < t; u++) {
	    int scores[11] = {0};
	    final = 0;
	    cin >> n;
	    for(int i = 0; i < n; i++) {
	        cin >> index >> score;
	        index--;
	        if(index <= 7 && scores[index] < score) {
	            final += (score - scores[index]);
	            scores[index] = score;
	        }
	    }
	    cout << final << endl;
	}
	return 0;
}
