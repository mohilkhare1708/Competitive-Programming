#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define MOD 1000000009

using namespace std;

// for array {a, b, c, d} (SIZE IS EVEN)
// ans = XOR of XORs of 4*5/2 = 10 subarrays
// ans = (a) ^ (b) ^ (c) ^ (d) ^ (a^b) ^ (a^b^c) ^ (a^b^c^d) ^ (b^c) ^ (b^c^d) ^ (c^d)
// Occurence of a:
//      4 times
// Occurence of b:
//      6 times
// Occurence of c:
//      6 times
// Occurence of d:
//      4 times
// EVEN OCCURENCE OF ELEMENTS CANCEL EACH OTHER IN XOR SO FOR EVEN LENGTH ARRAY ANS ALWAYS = 0

// for array {a, b, c} (SIZE IS ODD)
// ans = XOR of XORs of 3*4/2 = 6 subarrays
// ans = (a) ^ (b) ^ (c) ^ (a^b) ^ (a^b^c) ^ (b^c)
// Occurence of a:
//      3 times
// Occurence of b:
//      4 times
// Occurence of c:
//      3 times
// b will cancel out (even occurence), 2 a's and 2 c's will cancel out
// ans = a ^ c i.e. elements on even indices
// same can be proven for {a, b, c, d, e} where ans = a ^ c ^ e i.e. (0, 2, 4) indices


int main() {
    ll t;
    cin >> t;
    for(ll qq = 0; qq < t; qq++) {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for(ll i = 0; i < n; i++)
            cin >> arr[i];
        if(n % 2 == 0)
            cout << "0" << endl;
        else {
            ll ans = arr[0];
            for(ll i = 2; i < n; i+=2)
                ans ^= arr[i];
            cout << ans << endl;
        }
    }
    return 0;
}