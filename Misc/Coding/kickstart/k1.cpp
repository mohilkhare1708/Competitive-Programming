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
        ll n; cin >> n;
        ll a[n], maxi = LLONG_MIN, ans = 0;
        for(ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(ll i = 0; i < n; i++) {
            if(i != n-1) {
                if(maxi != a[i] && max(a[i], maxi) == a[i] && a[i+1] < a[i]) {
                    //cout << a[i] << endl;
                    ans++;
                }
            }
            else if(maxi != a[i] && max(a[i], maxi) == a[i]) {
                //cout << a[i] << endl;
                ans++;
            }
            maxi = max(a[i], maxi);
        }
        cout << ans << endl;
    }
    return 0;
}