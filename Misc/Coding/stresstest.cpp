/*
Author : Mohil Khare
Created On: 15 September 2020, 18:52
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

ll powMod(ll x, ll y, ll m) {
    ll res = 1;
    x = x % m;
    if (x == 0) return 0;
    while (y > 0) {
        if (y & 1)
            res = (res*x) % m;
        y = y>>1;
        x = (x*x) % m;
    }
    return res;
}

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll qq = 0; qq < t; qq++) {

    }
    return 0;
}