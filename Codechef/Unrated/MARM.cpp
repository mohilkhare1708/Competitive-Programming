#include <bits/stdc++.h>
#include <assert.h>
using namespace std;

long int myXOR(long int x, long int y) 
{ 
   return (x | y) & (~x | ~y); 
} 

int main() {
    long int t, n, k;
    cin >> t;
    for(long int u = 0; u < t; u++) {
        cin >> n >> k;
        long int a[n];
        for(long int b = 0; b < n; b++)
            cin >> a[b];
        if(n % 2 == 0) {
            for(long int i = 0; i < k % (3*n); i++) {
                a[i%n] = myXOR(a[i%n], a[n-(i%n)-1]);
            }
        }
        else {
            for(long int i = 0; i < k % (3*n); i++) {
                a[i%n] = myXOR(a[i%n], a[n-(i%n)-1]);
            }
            if(k > n/2)
                a[n/2] = 0;
            
        }
        for(long int p = 0; p < n; p++)
                cout << a[p] << " ";
        cout << endl;
    }
}