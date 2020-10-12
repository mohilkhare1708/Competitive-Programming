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

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll q = 0; q < t; q++) {
        ll n, x; cin >> n >> x;
        ll a[n]; for(ll i = 0; i < n; i++) cin >> a[i];
        ll pow[n], sum[n];
        pow[0] = 1; sum[0] = 1;
        for(ll i = 1; i < n; i++) {
            pow[i] = powMod(x, i);
            sum[i] = sum[i-1]+ pow[i];
        }
        ll ans = 1;
        for(ll i = 0; i < n; i++) {
            for(ll j = i; j < n; j++) {
                ll summ = moduloMultiplication(a[0], sum[j-i]);
                summ = powMod(summ, 2);
                ans = moduloMultiplication(ans, summ);
            }
        }
        cout << ans << endl;
    }
    return 0;
}

