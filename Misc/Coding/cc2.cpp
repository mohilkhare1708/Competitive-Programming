//Codechef: mohilllll Codeforces: mohilllll Google: mohilkhare17
//headers
#include <bits/stdc++.h>
#include <assert.h>
//shorts
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>
#define vpll vector<pair<long long int, long long int>>
#define sll set<long long int>
#define mp make_pair
#define pb push_back
#define endl "\n"
#define here std::cout << "here\n";
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)

using namespace std;

int main() {
    fastIO;
    ll n; cin >> n;
    ll a[n][n];
    ll ans = 0;
    for(ll i = 0; i < n; i++) {
        ll s = 0;
        for(ll j = 0; j < n; j++) {
            cin >> a[i][j];
            if(i == j) continue;
            s |= a[i][j];
        }
        ans += s;
    }
    cout << ans;
    return 0;
}