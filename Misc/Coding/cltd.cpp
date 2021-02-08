#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void stableSelectionSort(vector<pair<ll, ll>> a, ll n) { 
    for (ll i = 0; i < n - 1; i++) { 
        ll min = i; 
        for (ll j = i + 1; j < n; j++) 
            if (a[min].first > a[j].first) 
                min = j; 
        ll key = a[min].first; 
        while (min > i) { 
            a[min] = a[min - 1]; 
            min--; 
        } 
        a[i].first = key; 
    } 
} 

int main() {
    ll t, q = 1; cin >> t;
    while(q <= t) {
        ll n, x; cin >> n >> x;
        ll a[n], donezo = 0;
        vector<ll> ans;
        vector<pair<ll, ll>> keeper;
        for(ll i = 0; i < n; i++) {
            cin >> a[i];
            keeper.push_back(make_pair(ceil((double)a[i]/(double)x), i+1));
        }
        //for(auto x : keeper) cout << x.first << " " << x.second << " " << endl;
        stable_sort(keeper.begin(), keeper.end());
        cout << "Case #" << q << ": ";
        for(auto x : keeper) cout << x.second << " ";
        cout << endl;
        q++;
    }
}