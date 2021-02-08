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
    ll n, k; cin >> n >> k;
    vll alice, bob, both;
    for(ll i = 0; i < n; i++) {
        ll t, a, b; cin >> t >> a >> b;
        if(a == 1 && b == 0)
            alice.pb(t);
        else if(b == 1 && a == 0)
            bob.pb(t);
        else both.pb(t);
    }
    if(alice.size() + both.size() > k || bob.size() + both.size() > k)
        cout << -1 << endl;
    else {
        sort(alice.begin(), alice.end());
        sort(bob.begin(), bob.end());
        sort(both.begin(), both.end());
        
    }
    return 0;
}