//Codechef: mohilllll Codeforces: mohilkhare Google: mohilkhare17
//headers
#include <bits/stdc++.h>
#include <assert.h>
//shorts
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>
#define sll stack<long long int>
#define pb push_back
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
//program specific shorts (if any)
//
//namespaces
using namespace std;
const ll MOD = 1000000007;
ll bigMod(ll  a, ll  b, ll c) {
    if (a == 0 || b == 0) {
        return 0;
    }
    if (a == 1) {
        return b;
    }
    if (b == 1) {
        return a;
    } 

    // Returns: (a * b/2) mod c
    ll a2 = bigMod(a, b / 2, c);

    // Even factor
    if ((b & 1) == 0) {
        // [((a * b/2) mod c) + ((a * b/2) mod c)] mod c
        return (a2 + a2) % c;
    } else {
        // Odd exponent
        // [(a mod c) + ((a * b/2) mod c) + ((a * b/2) mod c)] mod c
        return ((a % c) + (a2 + a2)) % c;
    }
}

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll q = 0; q < t; q++) {
        ll n, k, ans; cin >> n >> k;
        if(n == 0) {
            cout << bigMod(k, k-1, MOD)%MOD << endl;
        }
        else {
            if(k % 2 == 1) {
                ans = ((k-1)/2+n)*((k-1)/2+n+1)-n;
            }
            else {
                ans = (k/2+n-1)*(k/2+n)+n;
            }
            cout << ans%MOD<< endl;
        }
    }
    return 0;
}