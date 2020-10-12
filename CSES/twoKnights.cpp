/*
Author : Mohil Khare
Created On: 01 October 2020, 20:47
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
    ll n; cin >> n;
    for(ll i = 1; i <= n; i++) {
        ll totWays = ((i*i)*(i*i - 1))/2;
        ll rectWays = 4*(i-1)*(i-2);
        cout << totWays - rectWays << endl;
    }
    return 0;
}