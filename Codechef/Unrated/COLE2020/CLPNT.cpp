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
    for(ll qqq = 0; qqq < t; qqq++) {
        ll n; cin >> n;
        ll a[n]; for(ll i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        ll q; cin >> q;
        //for(auto x : a) cout << x << " "; cout << endl;
        for(ll qq = 0; qq < q; qq++) {
            ll x, y; cin >> x >> y;
            if(a[lower_bound(a, a+n, x+y) - a] == x+y) {
                cout << "-1" << endl;
            }
            else {
                //here;
                cout << lower_bound(a, a+n, x+y) - a << endl;
            }
        }
    }
    return 0;
}