//Codechef: mohilllll Codeforces: mohilkhare Google: mohilkhare17
//headers
#include <bits/stdc++.h>
#include <assert.h>
//shorts
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>>
#define sll stack<long long int>
#define pb push_back
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)

//namespaces
using namespace std;

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll q = 0; q < t; q++) {
        string s, r; cin >> s >> r;
        vll gapBetweenUnequals;
        bool strEqual = true;
        ll k = 0, gap = 0, unequals = 0;
        for(ll i = 0; i < s.length(); i++) {
            if(s[i] == r[i]) {
                if(!strEqual)
                    gap++;
            }
            else {
                if(strEqual)
                    k++;
                strEqual = false;
                unequals++;
                if(gap != 0) {
                    k++;
                    gapBetweenUnequals.pb(gap);
                    gap = 0;
                }
            }
            //cout << unequals << " " << gap << " " << k << endl;
        }
        ll ans = unequals*k; //if we replace all one by one, may not be effective
        sort(gapBetweenUnequals.begin(), gapBetweenUnequals.end());
        for(auto a : gapBetweenUnequals) {
            unequals += a;
            --k;
            ans = min(ans, k*unequals);
        }
        cout << ans << endl;
    }
    return 0;
}