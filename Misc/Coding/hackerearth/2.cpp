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

using namespace std; 

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

ll modFact(ll n, ll p) { 
    if (n >= p) 
        return 0; 
    ll result = 1; 
    for(ll i = 1; i <= n; i++) 
        result = (result * i) % p; 
    return result; 
} 

int main() {
	ll x, n; cin >> x >> n;
	vll pattern(5);
	for(ll i = 1; i <= 4; i++)
		pattern[i] = power(x, i, 10);
    for(auto m : pattern) cout << m << " "; cout << endl;
    cout << fact(10) << endl;
	ll nFactMod10 = modFact(n, 4);
    cout << nFactMod10 << endl;
	if(nFactMod10 == 0)
		cout << pattern[4] << endl;
	else 
		cout << pattern[nFactMod10] << endl;
	return 0;	
}