#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int u = 0; u < t; u++) {
	    int n;
	    int flag = 0;
	    cin >> n;
	    int a[n];
	    for(int i = 0; i < n; i++)
	        cin >> a[i];
	    int nByFour = (n/4);
	    sort(a, a+n);
	    int x, y, z;
	    if(a[n-nByFour] == a[n-nByFour-1]) {
	        flag = 1;
	        //cout << "-1" << endl;
	    }
	    else
	        z = a[n-nByFour];
	    if(a[n-(2*nByFour)] == a[n-(2*nByFour)-1]) {
	        flag = 1;
	        //cout << "-1" << endl;
	    }
	    else
	        y = a[n-(2*nByFour)];
        if(a[nByFour] == a[nByFour-1]) {
	        flag = 1;
	        //cout << "-1" << endl;
	    }
	    else	   
	        x = a[nByFour];
	    if(flag == 0)
	        cout << x << " " << y << " " << z << endl;
	    else
	        cout << "-1" << endl;
	 }
	 return 0;
}