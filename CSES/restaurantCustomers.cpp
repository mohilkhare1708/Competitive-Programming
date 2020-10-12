/*
Author : Mohil Khare
Created On: 01 October 2020, 10:17
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
    ll n, ele1, ele2; cin >> n;
    vector<pair<ll, bool>> keeper(2*n);
    for(ll i = 0; i < 2*n; i+=2) {
        cin >> ele1 >> ele2;
        keeper[i] = mp(ele1, true);
        keeper[i+1] = mp(ele2, false);
    }
    sort(keeper.begin(), keeper.end());
    ll ans = LLONG_MIN, curr = 0; 
    for(auto x : keeper) {
        if(x.second) curr++;
        else curr--;
        ans = max(ans, curr);
    }
    cout << ans;
    return 0;
}