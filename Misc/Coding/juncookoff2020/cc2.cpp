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

vpll emp;

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll q = 0; q < t; q++) {
        ll n, c; cin >> n >> c;
        map<pair<ll, ll>, vpll> keeper;
        ll xi, yi;
        for(ll i = 0; i < n; i++) {
            cin >> xi >> yi;
            // cout << xi - yi << endl;
            if(keeper.find(mp(xi-yi, ((xi%c)+c)%c)) == keeper.end())
                keeper[mp(xi-yi, ((xi%c)+c)%c)] = emp;
            keeper[mp(xi-yi, ((xi%c)+c)%c)].pb(mp(xi, yi));
        }
        ll chkpts = keeper.size();
        ll moves = 0;
        for(auto x : keeper) {
            vpll temp = x.second;
            sort(temp.begin(), temp.end());
            pair<ll, ll> mid = temp[temp.size()/2];
            for(auto i : temp)
                moves += abs(i.first - mid.first)/c;
        }
        cout << chkpts-1 << " " << moves << endl;
    }
    return 0;
}