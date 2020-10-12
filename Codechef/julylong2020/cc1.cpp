#include <bits/stdc++.h>
#define ll long long int
using namespace std;

// DONE!

int main() {
    ll t; cin >> t;
    while(t--) {
        map<ll, ll> xKeep;
        map<ll, ll> yKeep;
        ll n, x, y; cin >> n;
        for(ll i = 0; i < 4*n - 1; i++) {
            cin >> x >> y;
            xKeep[x]++;
            yKeep[y]++;
        }
        ll ansx, ansy;
        for(auto x : xKeep) {
            if(x.second & 1) {
                ansx = x.first;
                break;
            }
        }
        for(auto x : yKeep) {
            if(x.second & 1) {
                ansy = x.first;
                break;
            }
        }
        cout << ansx << " " << ansy << endl;
    }
}