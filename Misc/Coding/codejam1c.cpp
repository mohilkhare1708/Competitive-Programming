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
using namespace std;
//program specific shorts (if any)

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll q = 1; q <= t; q++) {
        ll slices, diners; cin >> slices >> diners;
        ll angles[slices]; for(ll i = 0; i < slices; i++) cin >> angles[i];
        sort(angles, angles+slices);
        vpll table;
        ll ans = -1, maxCtr = -1, in = -1, req = -1;
        cout << "Case #" << q << ": ";
        for(ll i = 0; i < slices; i++) {
            ll ctr = 1;
            while(true) {
                if(i < slices && angles[i] == angles[++i])
                    ctr++;
                else {
                    in++;
                    table.pb(mp(angles[i-1], ctr));
                    if(ctr >= diners)
                        ans = 0;
                    if(ctr > maxCtr) {
                        maxCtr = ctr;
                        req = in;
                    }
                    ctr = 1;
                    i--;
                    break;
                }
            }
        }
        if(ans != -1)
            cout << ans << endl;
        else {
            ll best = angles[req].first;
            ll needed = diners - ctr;
            for(auto x : a) {
                if(x >= 2*best)
                    needed -= floor(x/best);
            }
            if(needed <= 0)
        }
        //for(auto x:table) cout << x.first << " " << x.second << endl;
    }
    return 0;
}