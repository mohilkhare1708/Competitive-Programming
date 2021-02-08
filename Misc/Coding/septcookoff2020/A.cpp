/*
Author : Mohil Khare
Created On: 20 September 2020, 21:22
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
    ll t; cin >> t;
    for(ll qq = 0; qq < t; qq++) {
        ll n, k, l; cin >> n >> k >> l;
        if((k == 1 && n > 1) || (n*l < k))
            cout << -1 << endl;
        else {
            for(int i = 0; i < n; i++)
                cout << (i % k) +1 << " ";
            cout << endl;
        }
    }
    return 0;
}