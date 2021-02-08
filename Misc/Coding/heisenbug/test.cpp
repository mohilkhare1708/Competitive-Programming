/*
Author : Mohil Khare
Created On: 04 September 2020, 19:21
*/

#include <bits/stdc++.h>
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>>
#define vpll vector<pair<long long int, long long int>>
#define mp make_pair
#define pb push_back
#define mod 1e9+7
#define endl "\n"
#define here std::cout << "here\n";
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

// program specific shorts (if any)
#define mod 1e9+7

using namespace std;


int main() {
    fastIO;
    ll t; cin >> t;
    for(ll qq = 0; qq < t; qq++) {
        ll n; cin >> n;
        ll a[n]; 
        for(int i = 0; i < n; i++) cin >> a[i];
        int ans = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                ans += (int)((string)a[i] + (string)a[j]);
            }
        }

    }
    return 0;
}