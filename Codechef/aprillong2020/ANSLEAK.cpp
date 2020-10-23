#include <bits/stdc++.h>
#include <assert.h>
#include <iostream>
#define ll long long int
#define vll vector<long long int>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

ll find(ll keep[], ll m) {
    ll ans = 0;
    for(ll i = 1; i <= m-1; i++)
        if(keep[i] > keep[ans])
            ans = i;
    return ans;
}

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll q = 0; q < t; q++) {
        ll n, m, k;
        cin >> n >> m >> k;
        ll arr[n][k];
        for(ll i = 0; i < n; i++) 
            for(ll j = 0; j < k; j++) 
                cin >> arr[i][j];
        ll freqArray[k] = {0};
        for(ll i = 0; i < n; i++) {
            ll keep[m] = {0};
            ll least = *min_element(freqArray, freqArray+n);
            for(ll j = 0; j < k; j++)
                if(least == freqArray[j])
                    keep[arr[i][j]-1]++;
            ll maxin = find(keep, m) + 1;
            cout << maxin << " ";
            for(ll j = 0; j < k; j++)
                if(maxin == arr[i][j])
                    freqArray[j]++;
        }
        cout << endl;
    }
    return 0;
}