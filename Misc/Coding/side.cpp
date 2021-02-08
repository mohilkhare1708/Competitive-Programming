#include <bits/stdc++.h> 
#define ll long long int
using namespace std; 

void SieveOfEratosthenes(int n) 
{ 
	// Create a boolean array "prime[0..n]" and initialize 
	// all entries it as true. A value in prime[i] will 
	// finally be false if i is Not a prime, else true. 
	bool prime[n+1]; 
	memset(prime, true, sizeof(prime)); 

	for (int p=2; p*p<=n; p++) 
	{ 
		// If prime[p] is not changed, then it is a prime 
		if (prime[p] == true) 
		{ 
			// Update all multiples of p greater than or 
			// equal to the square of it 
			// numbers which are multiple of p and are 
			// less than p^2 are already been marked. 
			for (int i=p*p; i<=n; i += p) 
				prime[i] = false; 
		} 
	} 
	cout << "{";
	// Print all prime numbers 
	for (int p=1; p<=n; p++) 
		cout << prime[p] << ", "; 
    cout << "};";
} 
ll countDigit(ll n) { 
    return floor(log10(n) + 1); 
} 
// Driver Program to test above function 
int main() 
{ 
	for(ll i = 0; i < 100; i++) {
        ll a = 1LL<<i;
        ll b = a - 1;
        cout << countDigit(a) << " " << countDigit(b) << endl;
    }
} 
