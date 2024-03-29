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
    for(ll q = 0; q < t; q++) {
        ll n; cin >> n;
        ll a[n]; for(ll i = 0; i < n; i++) cin >> a[i];
        ll best = LLONG_MAX;
        ll ans = 0;
        for(ll i = 0; i < n; i++) {
            if(a[i] <= best) {
                ans++;
                best = a[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}