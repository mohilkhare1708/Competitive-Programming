//Codechef: mohilllll Codeforces: mohilkhare Google: mohilkhare17
//headers
#include <bits/stdc++.h>
#include <assert.h>
//shorts
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>
#define sll stack<long long int>
#define pb push_back
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)
//
//namespaces
using namespace std;

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll q = 0; q < t; q++) {
        ll n, m; cin >> n;
        ll a[n]; for(ll i = 0; i < n; i++) cin >> a[i];
        cin >> m; 
        ll b[m]; 
        set<ll> keep;
        for(ll i = 0; i < m; i++) {
            cin >> b[i];
            keep.insert(b[i]);
        }
        ll segCount = 0;
        for(ll i = 0; i < n; i++) {
            bool isContinuous = true;
            if(keep.find(a[i]) != keep.end()) {
                while(isContinuous) {
                    if(keep.find(a[++i]) == keep.end()) {
                        segCount++;
                        isContinuous = false;
                        --i;
                    }
                }
            }
        }
        cout << segCount << endl;
    }
    return 0;
}