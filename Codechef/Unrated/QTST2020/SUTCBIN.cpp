//Codechef: mohilllll Codeforces: mohilkhare Google: mohilkhare17
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
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
using namespace std;
//program specific shorts (if any)

ll findIndex(vll a, ll k) {
    for(ll i = 0; i < a.size(); i++)
        if(k == a[i])
            return i;
    return -1;
}

int main() {
    fastIO;
        ll n; cin >> n;
        ll keep[2001] = {0}, a[n];
        vll order;
        vpll table;
        sll keeper;
        for(ll i = 0; i < n; i++) {
            cin >> a[i];
            if(keeper.find(a[i]) == keeper.end()) {
                keeper.insert(a[i]);
                order.pb(a[i]);
                table.pb(mp(a[i], 1));
            }
            else
                table[findIndex(order, a[i])].second++;
        }
        for(ll x = 0; x < table.size(); x++) {
            cout << table[x].first+table[x].second << " ";
        }
    return 0;
}