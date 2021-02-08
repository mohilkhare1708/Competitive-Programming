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
    for(ll q = 0; q < t; q++) {
        ll n; cin >> n;
        ll a[n]; for(ll i = 0; i < n; i++) cin >> a[i];
        vll gaps, cluster;
        for(ll i = 0; i < n-1; i++)
            gaps.pb(a[i+1] - a[i]);
        //for(ll i = 0; i < gaps.size(); i++) cout << gaps[i] << " ";
        ll ctr = 1;
        for(ll i = 0; i < gaps.size(); i++) {
            if(gaps[i] <= 2)
                ctr++;
            else {
                cluster.pb(ctr);
                ctr = 1;
            }
            if(i == gaps.size()-1)
                cluster.pb(ctr);
        }
        //for(auto a : cluster) cout << a << " ";
        sort(cluster.begin(), cluster.end());
        cout << cluster[0] << " " << cluster[cluster.size()-1] << endl;
        //cout << endl;
    }
    return 0;
}