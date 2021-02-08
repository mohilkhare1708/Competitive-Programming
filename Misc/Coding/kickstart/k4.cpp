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
        ll n, q; cin >> n >> q;
        ll a[n-1]; 
        for(ll i = 0; i < n-1; i++)
            cin >> a[i];
        vpll doors(n);
        map<ll, ll> keeper;
        for(ll i = 0; i < n; i++) {
            if(i == 0) {
                doors[i] = mp(a[i], i+1);
                keeper[a[i]]++;
            }
            if(i == n-1) {
                doors[i] = mp(a[n-2], i+1);
                keeper[a[i]]++;
            }
            if(i > 0 && i < n-1) {
                doors[i] = mp(min(a[i-1], a[i]), i+1);
                keeper[min(a[i-1], a[i])]++;
            }
        }
        sort(doors.begin(), doors.end());
        for(auto x : doors) cout << x.first << " " << x.second << endl;
        ll inKeep[n];
        for(ll i = 0; i < n; i++)
            inKeep[i] = doors[i].second;
        for(auto x : inKeep) cout << x << " "; cout << endl;
        for(ll x = 0; x < q; x++) {
            ll s, k; cin >> s >> k;
            if(k == 1) {
                cout << s << endl;
                continue;
            }
            ll start = 0;
            for(ll i = 0; i < n; i++) {
                if(inKeep[i] == s) {
                    start = i;
                    break;
                }
            }
            k = k % n;
            if(k < start) {
                cout << inKeep[k-1];
            }
            else cout << inKeep[k-1] << endl;
        }
    }
    return 0;
}