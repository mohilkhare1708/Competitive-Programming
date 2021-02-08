//Codechef: mohilllll Codeforces: mohilllll Google: mohilkhare17
#include <bits/stdc++.h>
//shorts
#define ll long long int 
#define vll vector<long long int>
#define vvll vector<vector<long long int>>
#define vpll vector<pair<long long int, long long int>>
#define mp make_pair
#define pb push_back
#define endl "\n"
#define here std::cout << "here\n";
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

//program specific shorts (if any)
#define mod 1e9+7

using namespace std;

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll q = 1; q <= t; q++) {
        ll n; cin >> n;
        ll a[n];
        for(ll i = 0; i < n; i++) cin >> a[i];
        ll ans = LLONG_MIN;
        for(ll i = 1; i < n; i++) {
            ll diff = a[i] - a[i-1];
            ll x = i+1, ctr = 2;
            while(x < n && a[x] - a[x-1] == diff) {
                ctr++;
                x++;
            }
            i = x-1;
            ans = max(ans, ctr);
        }
        cout << "Case #" << q << ": " <<  ans << endl;
    }
    return 0;
}