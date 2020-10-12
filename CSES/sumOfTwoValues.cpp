/*
Author : Mohil Khare
Created On: 06 October 2020, 17:37
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
    ll n, x, ele; cin >> n >> x;
    map<ll, ll> keeper;
    bool ok = false;
    for(ll i = 1; i <= n; i++) {
        cin >> ele;
        if(keeper.find(x - ele) != keeper.end()) {
            cout << keeper[x-ele] << " " << i << endl;
            ok = true;
        }
        keeper[ele] = i;
    }
    if(!ok) cout << "IMPOSSIBLE" << endl;
    return 0;
}