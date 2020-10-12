//Codechef: mohilllll Codeforces: mohilllll Google: mohilkhare17
//headers
#include <bits/stdc++.h>
#include <assert.h>
//shorts
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>>
#define vpll vector<pair<long long int, long long int>>
#define sll set<long long int>
#define mp make_pair
#define pb push_back
#define endl "\n"
#define here std::cout << "here\n";
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)
#define mod 998244353
using namespace std;

ll powMod(ll x, ll y)  {  
    ll res = 1;
    x = x % mod;
    if (x == 0) return 0;
    while (y > 0) {   
        if (y & 1)  
            res = (res*x) % mod;  
        y = y>>1;
        x = (x*x) % mod;  
    }  
    return res;  
}

ll moduloMultiplication(ll a, ll b) { 
    ll res = 0;
    a %= mod; 
    while (b) { 
        if (b & 1) 
            res = (res + a) % mod; 
        a = (2 * a) % mod; 
        b >>= 1; 
    } 
    return res; 
} 

/*
So,
an doesnt matter
ans depends on x and n
*/

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll q = 0; q < t; q++) {
        ll n, x; cin >> n >> x;
        ll a[n]; for(ll i = 0; i < n; i++) cin >> a[i];
        ll pow[n], sum[n];
        pow[0] = a[0]; sum[0] = a[0];
        for(ll i = 1; i < n; i++) {
            pow[i] = moduloMultiplication(powMod(x, i), a[0]);
            sum[i] = powMod(sum[i-1]+ pow[i], 2);
        }
         for(auto x : pow) cout << x << " "; cout << endl;
         for(auto x : sum) cout << x << " "; cout << endl;
        ll ans = 1;
        for(ll i = 0; i < n; i++) {
            for(ll j = i; j < n; j++) {
                ll summ = sum[j-i];
                ans = moduloMultiplication(ans, summ);
            }
        }
        // for(ll i = 0; i < n; i++) {
        //     //cout << n-i-1 << endl;
        //     ans = moduloMultiplication(ans, powMod(sum[i], n-i-1));
        // }
        cout << ans << endl;
    }
    return 0;
}

