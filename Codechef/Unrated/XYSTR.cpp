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
        string s; cin >> s;
        ll ans = 0;
        for(ll i = 0; i < s.length()-1; i++) {
            if((s[i] == 'x' && s[i+1] == 'y') || (s[i] == 'y' && s[i+1] == 'x')) {
                ans++;
                i++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

        