// @mohilkhare17
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

ll q(ll a[], ll l, ll r) {
    ll ans = 0;
    //cout << "invoked" << endl;
    //cout << "for " << l << " " << r << endl;
    for(ll i = l; i <= r; i++) {
        ans += pow(-1, i-l)*a[i]*(i-l+1);
    }   
    cout << ans << endl;
    return ans;
}

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll qq = 1; qq <= t; qq++) {
        ll n, qqq; cin >> n >> qqq;
        ll a[n+1]; for(ll i = 1; i <= n; i++) cin >> a[i];
        ll qSum = 0, q1, q2;
        char mode; 
        for(ll i = 0; i < qqq; i++) {
            cin >> mode >> q1 >> q2;
            if(mode == 'Q') {
                ll temp = q(a, q1, q2);
                //cout << temp << endl;
                qSum += temp;
            }
            else 
                a[q1] = q2;
        }
        cout << "Case #" << q << ": " << qSum << endl;
    }
    return 0;
}