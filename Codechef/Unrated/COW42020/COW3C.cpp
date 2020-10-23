//Codechef: mohilllll Codeforces: mohilkhare Google: mohilkhare17
//headers
#include <bits/stdc++.h>
#include <assert.h>
//shorts
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>
#define sll stack<long long int>
#define pb push_back
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)
//
//namespaces
using namespace std;

int main() {
    fastIO;
    ll t , ans = 0; cin >> t;
    for(ll q = 0; q < t; q++) {
        ll b, d; cin >> b >> d;
        ans += (max(b,d)-min(b,d)+1);
    }
    cout << ans%MOD << endl;
    return 0;
}