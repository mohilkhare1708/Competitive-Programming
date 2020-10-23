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
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)

using namespace std;
// using namespace std::chrono;
// auto start = high_resolution_clock::now();
// auto stop = high_resolution_clock::now();
// auto duration = duration_cast<microseconds>(stop - start);
// cout << "Time taken by function: " << duration.count() << " microseconds" << endl;

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll q = 0; q < t; q++) {
        ll n; cin >> n;
        ll a[n];
        bool poss = true;
        for(ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        vpll keeper;
        for(ll i = 0; i < n; i++) {
            ll x = i+1;
            while(x < n) {
                if(a[x] != a[i]) {
                    keeper.pb(mp(a[i], x-i));
                    i = x-1;
                    break;
                }
                x++;
            }
            if(x == n) {
                keeper.pb(mp(a[i], x-i));
                break;
            }
        }
        set<ll> keep;
        set<ll> keep1;
        for(auto a : keeper) {
            if(keep.find(a.first) == keep.end())
                keep.insert(a.first);
            else {
                poss = false;
                break;
            }
            if(keep1.find(a.second) == keep1.end())
                keep1.insert(a.second);
            else {
                poss = false;
                break;
            }
        }
        if(poss)
            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }
        
    }
    return 0;
}
