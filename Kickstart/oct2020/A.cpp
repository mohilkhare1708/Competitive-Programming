/*
Author : Mohil Khare
Created On: 18 October 2020, 17:26
*/

#include <bits/stdc++.h>
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>>
#define vpll vector<pair<long long int, long long int>>
#define mp make_pair
#define pb push_back
#define endl "\n"
#define here std::cout << "here\n";
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

// program specific shorts (if any)
const ll mod = 1000000007;

using namespace std;

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll qq = 1; qq <= t; qq++) {
        string s; cin >> s;
        ll ans = 0, ctr = 0;
        for(ll i = 0; i < s.length(); i++) {
            if(s.substr(i, 4) == "KICK")
                ctr++;
            if(s.substr(i, 5) == "START")
                ans += ctr;
        }
        cout << "Case #" << qq << ": " << ans << endl;
    }
    return 0;
}