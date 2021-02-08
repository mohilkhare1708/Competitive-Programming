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

using namespace std;

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll qq = 1; qq <= t; qq++) {
        cout << "Case #" << qq << ": ";
        ll k; cin >> k;
        ll a[k]; for(ll i = 0; i < k; i++) cin >> a[i];
        ll fAns = LLONG_MAX;
        for(ll i = 0; i < 4; i++) {
            ll notes[4];
            notes[i] = a[0];
            ll curr = i;
            ll ans = 0, prev = a[0];
            for(ll j = 1; j < k; j++) {
                if(a[j] > prev) {
                    curr++;
                    if(curr >= 4) {
                        ans++;
                        curr = 0;
                        notes[curr] = a[j];
                    }
                    else notes[curr] = a[j];
                }
                else if(a[j] < prev) {
                    curr--;
                    if(curr < 0) {
                        ans++;
                        curr = 3;
                        notes[curr] = a[j];
                    }
                    else {
                        notes[curr] = a[j];
                    }
                }
                else {
                    continue;
                }
                prev = a[j];
            }
            //for(auto x : notes) cout << x << " "; cout << endl << ans << endl;
            fAns = min(fAns, ans);
        }
        cout << fAns << endl;
    }
    return 0;
}