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
        vll ones;
        for(ll i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] == 1)
                ones.pb(i);
        }
        if(ones.size() == 0) {
            cout << "0" << endl;
            continue;
        }
        else if(ones.size() == 1) {
            cout << "-1" << endl;
            continue;
        }
        else {
            cout << ones[ones.size()-1] - ones[0] << endl;
            continue;
        }
    }
    return 0;
}