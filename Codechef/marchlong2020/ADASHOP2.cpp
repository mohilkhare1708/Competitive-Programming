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
	for(int u = 0; u < t; u++) {
	    int r, c;
	    cin >> r >> c;
		if(r == 1 && c == 1)
			cout << "19\n8 8\n4 4\n7 1\n1 7\n3 5\n6 8\n1 3\n4 6\n8 2\n2 8\n3 7\n4 8\n1 5\n5 1\n4 2\n8 6\n3 1\n7 5\n8 4\n";
		else if((r != 1 && c != 1) && (r == c))
			cout << "20\n1 1\n8 8\n4 4\n7 1\n1 7\n3 5\n6 8\n1 3\n4 6\n8 2\n2 8\n3 7\n4 8\n1 5\n5 1\n4 2\n8 6\n3 1\n7 5\n8 4\n";
		else if(r > c) {
			int star = (r - c)/2;
			int r1 = r - star;
			int c1 = c + star;
			cout << "21\n" << r1 << " " << c1 << "\n1 1\n8 8\n4 4\n7 1\n1 7\n3 5\n6 8\n1 3\n4 6\n8 2\n2 8\n3 7\n4 8\n1 5\n5 1\n4 2\n8 6\n3 1\n7 5\n8 4\n";
		}
		else {
			int star = (c - r)/2;
			int r1 = r + star;
			int c1 = c - star;
			cout << "21\n" << r1 << " " << c1 << "\n1 1\n8 8\n4 4\n7 1\n1 7\n3 5\n6 8\n1 3\n4 6\n8 2\n2 8\n3 7\n4 8\n1 5\n5 1\n4 2\n8 6\n3 1\n7 5\n8 4\n";
		}
	}
	return 0;
}
