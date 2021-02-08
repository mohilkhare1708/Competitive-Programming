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

// DONE!

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll q = 0; q < t; q++) {
        ll n, x, ele; cin >> n >> x;
        for(ll i = 0; i < n; i++) cin >> ele;
        ll ans = 0, temp = ele;
        while(ele > 0) {
            ele -= x;
            x *= 2;
            if(ele*2 > temp) ele = temp;
            else ele *= 2;
            ans++;
        }
        ans += (n-1);
        cout << ans << endl;
    }
    return 0;
}