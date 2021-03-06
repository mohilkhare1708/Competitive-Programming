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
#define maxExpo 12
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

// decToBinary() and countBits() referred from GFG

ll solve(ll a, ll b, ll newZ) {
    ll ans = (a & newZ)*(b & newZ);
    return ans;
}

ll zForZeroL(ll x, ll y, ll r, ll l, ll OR) {
    ll oar = OR&r;
    ll orAns = solve(x, y, OR);
    vll rArray = decToBinary(r);
    vll oarArray = decToBinary(oar);
    vll orArray = decToBinary(OR);
    ll zAns = solve(x, y, l), z = l;
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
            if(newZ <= r && newZ >= l) {
                if((newZAns > zAns && newZ < r) || (newZAns >= zAns && newZ < z)) {
                    z = newZ;
                    zAns = newZAns;
                }
            }
        }
    }
    if(zAns == 0)
        return 0;
    else 
        return z;
}

ll zForLGreaterThanOR(ll x, ll y, ll r, ll l, ll OR) {
    ll oar = OR&r;
    ll orAns = solve(x, y, OR);
    vll rArray = decToBinary(r);
    vll oarArray = decToBinary(oar);
    vll orArray = decToBinary(OR);
    vll lArray = decToBinary(l);
    ll zAns = solve(x, y, r), z = r; //long max
    for(ll i = 0; i < maxExpo; i++) {
        //cout << i << endl;
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
            vll newZArray = decToBinary(newZ);
            // for(auto a : newZArray) cout << a << " "; cout << "newZArray" << endl;
            // for(auto a : lArray) cout << a << " "; cout << "lZArray" << endl; 
            //cout << newZ << " " << newZAns << endl;
            if(newZ < l) {
                for(ll j = maxExpo-1; j >= 0; j--) {
                    if(lArray[j] == 1 && newZArray[j] == 0) {
                        ll power = 1LL<<j;
                        newZArray[j] = 1;
                        newZ += power;
                    }
                    if(lArray[j] == 0 && newZArray[j] == 1)
                        break;
                } 
                newZAns = solve(x, y, newZ);
            }
            //cout << newZ << " " << newZAns << endl;
            if(newZ > r) {
                for(ll j = maxExpo-1; j >= 0; j--) {
                    if(newZArray[j] == 1 && rArray[j] == 0) {
                        newZArray[j] = 0;
                        ll power = 1LL<<j;
                        newZ -= power;
                    }
                }
                newZAns = solve(x, y, newZ);
            }
            //cout << newZ << " " << newZAns << endl;
            if(newZ <= r && newZ >= l) {
                if((newZAns > zAns && newZ < r) || (newZAns >= zAns && newZ < z)) {
                    z = newZ;
                    zAns = newZAns;
                }
            }
        }
    }
    if(zAns == 0)
        return l;
    else 
        return z;
}

ll zForRLesserThanOR(ll x, ll y, ll r, ll l, ll OR) {
    //cout << "I came here" << endl;
    ll oar = OR&r;
    ll orAns = solve(x, y, OR);
    vll rArray = decToBinary(r);
    vll oarArray = decToBinary(oar);
    vll orArray = decToBinary(OR);
    vll lArray = decToBinary(l);
    ll zAns = solve(x, y, r), z = r;
    for(ll i = 0; i < maxExpo; i++) {
        // cout << i << endl;
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
            vll newZArray = decToBinary(newZ);
            // cout << newZ << " " << newZAns << endl;
            // for(auto a : newZArray) cout << a << " "; cout << "newZArray" << endl;
            // for(auto a : lArray) cout << a << " "; cout << "lZArray" << endl; 
            if(newZ < l) {
                for(ll j = maxExpo-1; j >= 0; j--) {
                    if(lArray[j] == 1 && newZArray[j] == 0 && newZ <= r) {
                        newZArray[j] = 1;
                        ll power = 1LL<<j;
                        newZ += power;
                    }
                    if((lArray[j] == 0 && newZArray[j] == 1) || newZ > r)
                        break;
                } 
                newZAns = solve(x, y, newZ);
            }
            // cout << newZ << " " << newZAns << endl;
            // for(auto a : newZArray) cout << a << " "; cout << "newZArray" << endl;
            // for(auto a : rArray) cout << a << " "; cout << "rZArray" << endl; 
            if(newZ > r) {
                for(ll j = maxExpo-1; j >= 0; j--) {
                    if(rArray[j] == 0 && newZArray[j] == 1) {
                        ll power = 1LL<<j;
                        if(newZ - power >= l) {
                            newZArray[j] = 0;
                            newZ -= power;
                        }
                    }
                    if(rArray[j] == 1 && newZArray[j] == 0)
                        break;
                }
                newZAns = solve(x, y, newZ);
            }
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
        return l;
    else 
        return z;
}

int main() {
    fastIO;
    ll t;
    cin >> t;
    for(ll q = 0; q < t; q++) {
        ll x, y, l, r; 
        cin >> x >> y >> l >> r;
        ll ans;
        ll OR = x | y;
        if(min(x, y) == 0)
            ans = 0;
        else if(l <= OR && r >= OR)
            ans = OR;
        else if(l == 0)
            ans = zForZeroL(x, y, r, l, OR);
        else if( l > OR) 
            ans = zForLGreaterThanOR(x, y, r, l, OR);
        else if(r < OR)
            ans = zForRLesserThanOR(x, y, l, r, OR);
        cout << ans << endl;
    }
    return 0;
}