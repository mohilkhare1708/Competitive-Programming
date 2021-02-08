// // @mohilkhare17
// //headers
// #include <bits/stdc++.h>
// #include <assert.h>
// //shorts
// #define ll long long int
// #define vll vector<long long int>
// #define vvll vector<vector<long long int>
// #define vpll vector<pair<long long int, long long int>>
// #define sll set<long long int>
// #define mp make_pair
// #define pb push_back
// #define endl "\n"
// #define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
// #define MOD 1000000007
// //program specific shorts (if any)

// using namespace std;

// ll fact(ll n) {
// 	ll ans = 1;
// 	for(ll i = 2; i <= n; i++)
// 		ans *= i;
// 	return ans;
// }

// int main() {
//     for(ll i = 10; i <= 20; i++) {
//         for(ll j = 1; j <= 20; j++)
//             cout << fixed << i << "^" << j << " = " << pow(i, j) << endl;
//         cout << endl;
//     }
// }


// --------------------------------------------------------------------------


// C++ code to find last digit of a^b 
// #include <bits/stdc++.h> 
// #include <string.h>
// using namespace std; 

// // Function to find b % a 
// int Modulo(int a, string b) 
// { 
// 	// Initialize result 
// 	int mod = 0; 

// 	// calculating mod of b with a to make 
// 	// b like 0 <= b < a 
// 	for (int i = 0; i < b.length(); i++) 
// 		mod = (mod * 10 + b[i] - '0') % a; 

// 	return mod; // return modulo 
// } 

// // function to find last digit of a^b 
// int LastDigit(string a, string b) 
// { 
// 	int len_a = a.length(), len_b = b.length(); 

// 	// if a and b both are 0 
// 	if (len_a == 1 && len_b == 1 && b[0] == '0' && a[0] == '0') 
// 		return 1; 

// 	// if exponent is 0 
// 	if (len_b == 1 && b[0] == '0') 
// 		return 1; 

// 	// if base is 0 
// 	if (len_a == 1 && a[0] == '0') 
// 		return 0; 

// 	// if exponent is divisible by 4 that means last 
// 	// digit will be pow(a, 4) % 10. 
// 	// if exponent is not divisible by 4 that means last 
// 	// digit will be pow(a, b%4) % 10 
// 	int exp = (Modulo(4, b) == 0) ? 4 : Modulo(4, b); 

// 	// Find last digit in 'a' and compute its exponent 
// 	int res = pow(a[len_a - 1] - '0', exp); 

// 	// Return last digit of result 
// 	return res % 10; 
// } 

// // Driver program to run test case 
// int main() 
// { 
// 	char a[] = "117", b[] = "3"; 
//     for(int i = 5; i <= 20; i++) {
//         for(int j = 1; j < 20; j++) {
//             string a = to_string(i);
//             string b = to_string(j);
// 	cout << i << "^" << j << " = " << LastDigit(a, b) << endl; 
//         }
//         cout << endl;
//     }
// 	return 0; 
// } 

// ----------------------------------------------------------------

// // C++ code to find last digit of a^b 
// #include <bits/stdc++.h> 
// using namespace std; 

// // Function to find b % a 
// int Modulo(int a, char b[]) 
// { 
// 	// Initialize result 
// 	int mod = 0; 

// 	// calculating mod of b with a to make 
// 	// b like 0 <= b < a 
// 	for (int i = 0; i < strlen(b); i++) 
// 		mod = (mod * 10 + b[i] - '0') % a; 

// 	return mod; // return modulo 
// } 

// // function to find last digit of a^b 
// int LastDigit(char a[], char b[]) 
// { 
// 	int len_a = strlen(a), len_b = strlen(b); 

// 	// if a and b both are 0 
// 	if (len_a == 1 && len_b == 1 && b[0] == '0' && a[0] == '0') 
// 		return 1; 

// 	// if exponent is 0 
// 	if (len_b == 1 && b[0] == '0') 
// 		return 1; 

// 	// if base is 0 
// 	if (len_a == 1 && a[0] == '0') 
// 		return 0; 

// 	// if exponent is divisible by 4 that means last 
// 	// digit will be pow(a, 4) % 10. 
// 	// if exponent is not divisible by 4 that means last 
// 	// digit will be pow(a, b%4) % 10 
// 	int exp = (Modulo(4, b) == 0) ? 4 : Modulo(4, b); 

// 	// Find last digit in 'a' and compute its exponent 
// 	int res = pow(a[len_a - 1] - '0', exp); 

// 	// Return last digit of result 
// 	return res % 10; 
// } 

// // Driver program to run test case 
// int main() 
// { 
// 	char a[] = "15", b[] = "2"; 
// 	cout << LastDigit(a, b); 
// 	return 0; 
// } 

// -----------------------------------------------------------------------------

// // CPP code to find the unit digit of x 
// // raised to power y. 
// #include<iostream> 
// #include<math.h> 
// using namespace std; 

// // find unit digit 
// int unitnumber(int x, int y) 
// { 
// 	// Get last digit of x 
// 	x = x % 10; 
		
// 	// Last cyclic modular value 
// 	if(y!=0) 
// 		y = y % 4 + 4; 

// 	// here we simply return the 
// 	// unit digit or the power 
// 	// of a number 
// 	return (((int)(pow(x, y))) % 10); 
// } 

// int main() 
// { 
//     for(int x = 5; x <= 20; x++) {
//         for(int y = 1; y <= 20; y++) {
	
// 	// get unit digit number here we pass 
// 	// the unit digit of x and the last 
// 	// cyclicity number that is y%4 
// 	cout << x << "^" << y << " = " << unitnumber(x, y) << endl; 
//         }}

// 	return 0; 
// } 


// ---------------------------------------------------------------------------


// @mohilkhare17
//headers
#include <bits/stdc++.h>
#include <assert.h>
//shorts
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>
#define vpll vector<pair<long long int, long long int>>
#define sll set<long long int>
#define mp make_pair
#define pb push_back
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)

using namespace std;

ll fact(ll n) {
	ll ans = 1;
	for(ll i = 2; i <= n; i++)
		ans *= i;
	return ans;
}

ll power(ll x, ll y, ll p)  {  
    ll res = 1;
    x = x % p;
    if (x == 0) return 0;
    while (y > 0) {  
        if (y & 1)  
            res = (res*x) % p; 
        y = y>>1;
        x = (x*x) % p;  
    }  
    return res;  
}

int main() {
    for(ll i = 5; i <= 20; i++) {
        for(ll j = 1; j <= 20; j++) {
            cout << i << "^" << j << "!" << " = " << i << "^" << fact(j) << " = " << power(i, fact(j), 10) << endl;
        }
        cout << endl;
    }
}



