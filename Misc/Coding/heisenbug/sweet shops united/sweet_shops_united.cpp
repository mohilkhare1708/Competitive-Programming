/*
Author : Mohil Khare
Created On: 07 September 2020, 11:25
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

vpll emp;

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll qq = 0; qq < t; qq++) {
        ll n, c; cin >> n >> c;
        map<pair<ll, ll>, vpll> keeper;
        ll xi, yi;
        for(ll i = 0; i < n; i++) {
            cin >> xi >> yi;
            if(keeper.find(mp(xi - yi, ((xi % c) + c) % c)) == keeper.end())
                keeper[mp(xi - yi, (( xi %c ) + c) % c)] = emp;
            keeper[mp(xi - yi, ((xi % c) + c) % c)].pb(mp(xi, yi));
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
        cout << chkpts << " " << moves << endl;
    }
    return 0;
}