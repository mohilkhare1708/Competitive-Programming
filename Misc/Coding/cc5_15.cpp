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
#define debug(a) for(auto x : a) cout << x << " "; cout << endl;
#define here std::cout << "here\n";
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)
#define mod 998244353
using namespace std;

ll power(ll x, ll y, ll p) {  
    ll res = 1; 
    x = x % p;
    if (x == 0) return 0;
    while (y > 0) {
        if (y & 1)  
            res = (res*x) % p;
        y = y >> 1; 
        x = (x*x) % p;  
    }  
    return res;  
}  

ll wij2(ll i, ll j, ll a, ll x) {
    ll ans = 0;
    for(ll q = i; q <= j; q++) {
        ans += power(x, q-i, mod);
        //cout << ans << endl;
    }
    ll f = (ans%mod * ans%mod) % mod;
    return f;
}

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll q = 0; q < t; q++) {
        ll n, x; cin >> n >> x;
        ll a[n+1]; for(ll i = 1; i <= n; i++) cin >> a[i];
        ll ans = 1;
        for(ll i = 1; i <= n; i++) {
            for(ll j = i; j <= n; j++) {
                ans = (ans*(wij2(i, j, a[0], x)%mod))%mod;
            }
        }
        cout << ans << endl;
    }
    return 0;
}