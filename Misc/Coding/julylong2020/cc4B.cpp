//Codechef: mohilllll Codeforces: mohilllll Google: mohilkhare17
//headers
#include <bits/stdc++.h>
#include <assert.h>
//shorts
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>>
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
    ll n, q; cin >> n >> q;
    ll height[n], taste[n];
    for(ll i = 0; i < n; i++) cin >> height[i];
    for(ll i = 0; i < n; i++) cin >> taste[i];
    ll dp[n][n] = {0};
    dp[0][0] = taste[0];
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < n; j++) {
            if(height[i] == height[j]) {
                dp[i][j] = taste[i];
                continue;
            }
            if((j != 0 && dp[i][j-1] == -1) || (height[i] < height[j])) {
                dp[i][j] = -1;
                continue;
            }
            else 
                dp[i][j] = taste[i] + taste[j];
        }
    }
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < n; j++) {
            cout << dp[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}