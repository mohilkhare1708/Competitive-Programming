#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007

using namespace std;

ll sumOfGP(ll members, ll kidSlices, ll r) {
    if(r == 1)
        return members*kidSlices;
    double ans = (kidSlices*(1 - pow(r, members)))/(1 - r);
    return ans;
}

int main() {
    ll t; cin >> t;
    ll extra = 0, shortBy = 0;
    for(ll i = 0; i < t; i++) {
        ll slices, members, kidSlices, r;
        cin >> slices >> members >> kidSlices >> r;
        ll reqiuredAtLeast = sumOfGP(members, kidSlices, r);
        if(slices >= reqiuredAtLeast) {
            ll remaining = slices - reqiuredAtLeast;
            cout << "POSSIBLE " << remaining << endl;
            extra += remaining;
        }
        else {
            ll required = reqiuredAtLeast - slices;
            cout << "IMPOSSIBLE " << required << endl;
            shortBy += required;
        }
    }
    if(extra >= shortBy)
        cout << "POSSIBLE" << endl;
    else 
        cout << "IMPOSSIBLE" << endl;
    return 0;
}