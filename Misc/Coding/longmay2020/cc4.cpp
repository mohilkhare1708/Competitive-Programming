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
#define ull unsigned long long int
#define maxExpo 63
using namespace std;

ll countBits(ll number) {
    return (ll)log2(number)+1; 
}

vll decToBinary(ll n) { 
    vll v(maxExpo, 0);
    for(ll i = 0; i <= countBits(n)-1; i++) { 
        ll k = n >> i; 
        if (k & 1) 
            v[i] = 1;
        else
            v[i] = 0;
    } 
    return v;
}

ll solve(ll a, ll b, ll newZ) {
    ll ans = (a & newZ)*(b & newZ);
    return ans;
}

int main() {
    fastIO;
    ll t;
    cin >> t;
    ll correctCtr = 0, incorrectCtr = 0;
    for(ll q = 0; q < t; q++) {
        ll x, y, l, r; 
        cin >> x >> y >> l >> r;
        ll OR = x | y;
        ll oar = OR&r;
        ll orAns = solve(x, y, OR);
        vll rArray = decToBinary(r);
        vll oarArray = decToBinary(oar);
        vll orArray = decToBinary(OR);
        for(auto a : orArray) cout << a << " "; cout << endl;
        ll ans;
        if(min(x, y) == 0)
            ans = 0;
        else if(l <= OR && r >= OR)
            ans = OR;
        else {
            ll zAns = solve(x, y, r), z = r;
            for(ll i = 0; i < maxExpo; i++) {
                ll newZ = 0;
                if(rArray[i] == 1) {
                    for(ll j = 0; j < i; j++) {
                        if(orArray[j] == 1) {
                            ll power = 1LL<<j;
                            newZ += power;
                        }
                    }
                    for(ll j = i+1; j < maxExpo; j++) {
                        if(oarArray[j] == 1) {
                            ll power = 1LL<<j;
                            newZ += power;
                        }
                    }
                    ll newZAns = solve(x, y, newZ);
                    cout << newZ << " " << newZAns << endl;
                    if(newZ <= r && newZ >= l) {
                        if((newZAns > zAns && newZ < r) || (newZAns >= zAns && newZ < z)) {
                            z = newZ;
                            zAns = newZAns;
                        }
                    }
                }
            }
            if(zAns == 0)
                ans = 0;
            else 
                ans = z;
            cout << ans << endl;
            if(ans < l) {
                vll lArray = decToBinary(l);
                vll zArray = decToBinary(ans); 
                ll temp = ans, maybeZ = r, total = -1;
                for(ll i = 0; i < maxExpo; i++) {
                    // cout << i << endl;
                    if(zArray[i] == 0 && lArray[i] == 1) {
                        ll power = 1LL<<i;
                        temp += power;
                        ll tempAns = solve(x, y, temp);
                        // cout << temp << " " << tempAns << endl;
                        if(temp >= l && temp <= r && ((tempAns > total) || (tempAns >= total && temp < maybeZ))) {
                            maybeZ = temp;
                            total = tempAns;
                        }
                    }
                }
                if(total == 0)
                    ans = 0;
                else 
                    ans = maybeZ;
            }
        }
        // else {
        //     vll lArray = decToBinary(l);
        //     ll zAns = solve(x, y, r), z = r;
        //     for(ll i = 0; i < maxExpo; i++) {
        //         ll newZ = 0;
        //         if(rArray[i] == 1) {
        //             for(ll j = 0; j < i; j++) {
        //                 if(orArray[j] == 1) {
        //                     ll power = 1LL<<j;
        //                     newZ += power;
        //                 }
        //             }
        //             for(ll j = i+1; j < maxExpo; j++) {
        //                 if(oarArray[j] == 1) {
        //                     ll power = 1LL<<j;
        //                     newZ += power;
        //                 }
        //             }
        //             ll newZAns = solve(x, y, newZ);
        //             cout << newZ << " " << newZAns << endl;
        //             if(newZ <= r && newZ >= l) {
        //                 if((newZAns > zAns && newZ < r) || (newZAns >= zAns && newZ < z)) {
        //                     z = newZ;
        //                     zAns = newZAns;
        //                 }
        //             }
        //         }
        //     }
        //     cout << z << endl;
            // ll total = -1;
            // ll maybeZ = r;
            // if(z < l) {
            //     cout << "here" << endl;
            //     vll zArray = decToBinary(z); 
            //     ll temp = z;
            //     for(ll i = 0; i < maxExpo; i++) {
            //         cout << i << endl;
            //         if(zArray[i] == 0 && lArray[i] == 1) {
            //             ll power = 1LL<<i;
            //             temp += power;
            //             ll tempAns = solve(x, y, temp);
            //             cout << temp << " " << tempAns << endl;
            //             if(temp >= l && temp <= r && ((tempAns > total) || (tempAns >= total && temp < maybeZ))) {
            //                 maybeZ = temp;
            //                 total = tempAns;
            //             }
            //         }
            //     }
            // }
            // if(z > l) {
            //     if(total == 0)
            //         ans = 0;
            //     else 
            //         ans = maybeZ;
            // }
            // else {
            //     if(zAns == 0)
            //         ans = 0;
            //     else 
            //         ans = z;
            // }
        
        cout << ans << endl;
    }
    return 0;
}