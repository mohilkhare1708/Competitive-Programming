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
    for(ll w = 0; w < t; w++) {
        ll n, q; cin >> n >> q;
        string s; cin >> s;
        string alpha = "abcdefghijklmnopqrstuvwxyz";
        ll keeper[27] = {0};
        for(ll i = 0; i < s.length(); i++) {
            keeper[(ll)(s[i]-96)]++;
        }
        vector<pair<char, ll>> diseaseCount; 
        for(ll i = 1; i <= 26; i++)
            if(keeper[i] != 0)
                diseaseCount.pb(mp(alpha[i-1], keeper[i]));
        for(ll qq = 0; qq < q; qq++) {
            ll c, ans = 0; cin >> c;
            for(auto x : diseaseCount) {
                if(x.second > c)
                    ans += (x.second-c);
            }
            cout << ans << endl;
        }
    }
    return 0;
}