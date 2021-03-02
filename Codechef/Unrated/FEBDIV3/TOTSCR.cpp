#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        ll n, k; cin >> n >> k;
        ll a[k]; for(ll i = 0; i < k; i++) cin >> a[i];
        while(n--) {
            string s; cin >> s;
            ll ans = 0;
            for(ll i = 0; i < k; i++)
                if(s[i] == '1') ans += a[i];
            cout << ans << "\n";
        }
    }
    return 0;
}