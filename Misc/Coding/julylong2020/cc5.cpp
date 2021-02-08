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

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll q = 0; q < t; q++) {
        ll n, x; cin >> n >> x;
        ll a[n]; for(ll i = 0; i < n; i++) cin >> a[i];
        ll aa = a[0], ans = 1;
        map<ll, ll> keeper;
        for(ll i = 0; i < n; i++) {
            for(ll j = i; j < n; j++) {
                ll sum = 0;
                //cout << powMod(x, i-k) << endl;
                keeper[j-i]++;
                for(ll k = i; k <= j; k++) {
                    /*cout << i << " " << j << " " << k << " " << k-1 << endl;
                    cout << powMod(x, k-i) << endl;*/
                    sum += ((powMod(x, k-i))%mod);
                }
                sum = (aa%mod * sum%mod)%mod;
                sum = powMod(sum, 2);
                //cout << sum << endl;
                ans = ((ans%mod) * (sum%mod))%mod;
            }
        }
        cout << ans << endl;
        for(auto x : keeper) cout << x.first << "\t" << x.second << endl;
    }
    return 0;
}