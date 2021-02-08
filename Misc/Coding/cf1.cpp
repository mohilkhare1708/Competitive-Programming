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
#define MOD 1000000007
//program specific shorts (if any)
//
//namespaces
using namespace std;

ll countDivisibles(ll A, ll B, ll M) { 
    if (A % M == 0) 
        return (B / M) - (A / M) + 1;
    return (B / M) - (A / M); 
} 

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll u = 0; u < t; u++) {
        ll a, b, q; cin >> a >> b >> q;
        for(ll i = 0; i < q; i++) {
            ll l, r; cin >> l >> r;
            if(max(a,b) % min(a,b) == 0)
                cout << "0" << endl;
            else {
                ll divs = countDivisibles(l, r, a*b);
                ll ans = 0;
                if(l < max(a,b))
                    ans = max(a, b) - l; //, cout << "1 " << ans << endl;
                if(r%(a*b) >= max(a,b))
                    ans += max(a,b)*divs; //, cout << "2 " << ans << endl;
                else 
                    ans += max(a,b)*(divs-1) + r%(a*b) + 1; //, cout << "3 " << ans << endl;
                cout << r-l+1-ans << endl;
            }
        }
    }
    return 0;
}