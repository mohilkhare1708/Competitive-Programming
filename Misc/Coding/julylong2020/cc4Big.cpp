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

bool poss = true;
stack<ll> keeper;

void solve(ll height[], ll taste[], ll n, ll b, ll c, bool poss) {
    if(b == c) {
        ll tot = 0;
        while(!keeper.empty()) {
            ll tp = keeper.top;
            tot += tp;
            keeper.pop();
        }
        if()
    }
    if(b < c) {

    }
}

int main() {
    fastIO;
    ll n, q; cin >> n >> q;
    ll height[n+1], taste[n+1];
    for(ll i = 1; i <= n; i++) cin >> height[i];
    for(ll i = 1; i <= n; i++) cin >> taste[i];
    for(ll qq = 0; qq < q; qq++) {
        ll qt, b, c; cin >> qt >> b >> c;
        if(qt == 1)
            taste[b] = c;
        else {
            ll ans = 0;
            if(b == c) {
                ans = taste[b];
                cout << ans << endl;
            }
            else
                solve(height, taste, n, b, c, poss);
        }
    return 0;
}