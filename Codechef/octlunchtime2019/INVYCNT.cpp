#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int u = 0; u < t; u++) {
	    int n, k;
	    cin >> n >> k;
	    long int a[n];
	    for(int i = 0; i < n; i++)
	        cin >> a[i];
	    long int sumItself = 0, sumWhole = 0;
	    for(int i = 0; i < n; i++) {
	        for(int j = 0; j < n; j++) {
	            if(a[i] > a[j])
	                sumWhole++;
	        }
	        for(int j = i+1; j < n; j++) {
	            if(a[i] > a[j])
	                sumItself++;
	        }
	    }
	    long int sum = 0;
	    for(int i = 0; i < k; i++) {
	        sum += (sumItself + (k-i-1)*sumWhole);
	    }
	    cout << sum << endl;
	}
	return 0;
}
