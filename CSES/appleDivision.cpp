/*
Author : Mohil Khare
Created On: 21 September 2020, 18:56
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
    ll n, arrSum = 0; cin >> n;
    ll arr[n], ans = LLONG_MAX; for(ll i = 0; i < n; i++) cin >> arr[i], arrSum += arr[i];
    for(ll i = 0; i < (1LL<<n); i++) {
        ll keep = 0;
        for(ll j = 0; j < n; j++)
            if(1<<j & i) keep += arr[j];
        ans = min(ans, abs(arrSum - 2*keep));
    }
    cout << ans;
    return 0;
}