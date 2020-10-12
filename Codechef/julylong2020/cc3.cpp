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
        ll n, x; cin >> n >> x;
        vector<pair<ll, bool>> a;
        for(ll i = 0; i < n; i++) {
            ll xx; cin >> xx; a.pb(mp(xx, false));
        }
        //ll a[n]; for(ll i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        if(x >= a[n-1].first) {
            cout << n << endl;
            continue;
        }
        // bool cured[n];
        // memset(cured, false, sizeof(cured));
        ll ans = 0;
        ll i = lower_bound(a.begin(), a.end(), pair<ll, bool>(x, false)) - a.begin();
        ll keep = i;
        //cout << keep << endl;
        while(a[i].first != LLONG_MAX && i < n && !a[i].second) {
            if(x < a[i].first) {
                ll ele = a[i].first;
                ll temp = ele;
                while(ele > 0) {
                    cout << ele << " " << x << endl;
                    if(ele - x <= 0) {
                        x = ele*2;
                        break;
                    }
                    ele -= x;
                    x *= 2;
                    if(ele*2 > temp) ele = temp;
                    else ele *= 2;
                    ans++;
                }
                //x = temp*2;
                ans++;
                a[i].second = true;
                a[i].first = LLONG_MAX;
            }
            else {
                //here;
                ans++;
                a[i].second = true;
                x = a[i].first*2;
                a[i].first = LLONG_MAX;
            }
            sort(a.begin(), a.end());
            i = lower_bound(a.begin(), a.end(), pair<ll, bool>(x, false)) - a.begin();
            for(auto x : a) cout << x.first << " " << x.second << endl;
            cout << endl;
            //i++;
        }
        ans += keep;
        cout << ans << endl;
    }
    return 0;
}

// 12  5  9  12  25  34

// 12  5  9   0  25  34
// 24  5  9   0   1  34
// 48  5  9   0   1   0
// 68