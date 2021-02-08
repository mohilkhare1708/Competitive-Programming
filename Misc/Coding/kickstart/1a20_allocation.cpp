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
        ll n, b; cin >> n >> b;
        ll a[n]; for(ll i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        ll remain = b, ctr = 0;
        for(ll i = 0; i < n; i++) {
            if(a[i] <= remain) {
                ctr++;
                remain -= a[i];
            }
        }
        cout << "Case #" << q+1 << ": " << ctr << endl;
    }
    return 0;
}