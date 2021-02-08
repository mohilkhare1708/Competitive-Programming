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
        ll freq1[26] = {0}, freq2[26] = {0}, sz = s.length();
        for(ll i = 0; i < sz/2; i++) 
            freq1[s[i] - 'a']++;
        for(ll i = ((sz & 1) ? sz/2 + 1 : sz/2); i < sz; i++)
            freq2[s[i] - 'a']++;
        bool ok = true;
        for(ll i = 0; i < 26; i++) {
            if(freq2[i] != freq1[i]) {
                ok = false;
                break;
            }
        }
        if(ok)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
}

