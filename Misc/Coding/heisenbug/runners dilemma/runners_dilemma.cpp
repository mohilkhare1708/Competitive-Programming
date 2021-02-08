/*
Author : Mohil Khare
Created On: 04 September 2020, 00:02
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

ll solve(vector<ll> nums) {
    multiset<ll> s;
    for(ll x : nums) {
        auto it = lower_bound(s.begin(), s.end(), x);
        if(it!=s.begin()) {
        auto floored = prev(it);
            s.erase(floored);
        }
        s.insert(x);
    }
    return s.size();
}

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll qq = 0; qq < t; qq++) {
        ll n; cin >> n;
        vector<ll> nums(n);
        for(ll i = 0; i < n; i++) cin >> nums[i];
        cout << solve(nums) << endl;
    }
    return 0;
}