/*
Author : Mohil Khare
Created On: 15 November 2020, 11:30
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
        ll n, k, s; cin >> n >> k >> s;
        cout << "Case #" << qq << ": ";
        cout << min((k + n), (k - 1 + k - s + n - s + 1)) << endl;
    }
    return 0;
}