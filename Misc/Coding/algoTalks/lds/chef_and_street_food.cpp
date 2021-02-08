#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define here std::cout << "here\n";
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main() {
    fastIO;
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll s[n], p[n], v[n], ans = LLONG_MIN;
        for(ll i = 0; i < n; i++) {
            cin >> s[i] >> p[i] >> v[i];
            ans = max(ans, (p[i]/(s[i]+1))*v[i]);
        }
        cout << ans << endl;
    }
    return 0;
}
