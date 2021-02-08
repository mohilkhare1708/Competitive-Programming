/*
Author : Mohil Khare
Created On: 03 September 2020, 22:17
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

//program specific shorts (if any)
ll MOD = 1000000007;

using namespace std;

ll mulmod(ll a, double b, ll m) {
    ll res = 0;
    a = a % m;
    while (b > 0) {
        if ((ll)b % 2 == 1)
            res = (res + a) % m;
        a = (a * 2) % m;
        b /= 2;
    }
    return res % m;
}

ll solve(string s) {
    ll ans = 0;
    for(ll i = s.length()-1, k = 0; i >= 0; i--, k++)
        ans = ((ans % MOD) + mulmod((ll)(s[i] - 'A' + 1), pow(26, k), MOD)) % MOD;
    return ans;
}

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll qq = 0; qq < t; qq++) {
        string s; cin >> s;
        cout << solve(s) << endl;
    }
    return 0;
}