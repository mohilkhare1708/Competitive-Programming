/*
Author : Mohil Khare
Created On: 06 September 2020, 23:41
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
        ll n; cin >> n;
        if(n % 3 == 0 || n % 7 == 0)
            cout << "Elite" << endl;
        else if(n > 12 || n == 10)
            cout << "Legendary" << endl;
        else 
            cout << "Subordinate" << endl;
    }
    return 0;
}