//Codechef: mohilllll Codeforces: mohilkhare Google: mohilkhare17
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
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)
#define maxSize 1e18

using namespace std;

vll preCompute() {
    vll ans;
    for(ll i = 1; i <= maxSize; i++) {
        bool hasNine = false;
        if(i > 0 && i % 9 != 0) {
            ll temp = i;
            while(temp != 0) {
                ll rem = temp % 10;
                if(rem == 9) {
                    hasNine = true;
                    break;
                }
                temp /= 10;
            }
            if(!hasNine)
                ans.pb(i);
        }
    }
    return ans;
}

int main() {
    fastIO;
    ll t; cin >> t;
    vll master = preCompute();
    for(ll q = 1; q <= t; q++) {
        cout << "Case #" << q << ": ";
        ll ans, l, r; cin >> l >> r;
        ll lUpper = upper_bound(master.begin(), master.end(), l) - master.begin();
        ll rLower = upper_bound(master.begin(), master.end(), r) - master.begin();
        cout << rLower - lUpper + 1 << endl;
    }
    return 0;
}