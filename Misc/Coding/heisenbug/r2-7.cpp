/*
Author : Mohil Khare
Created On: 08 September 2020, 00:01
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
const ll MAX = 10000001;

using namespace std;

ll factMod[MAX];

void precompute() {
    factMod[0] = 1;
    for(ll i = 1; i <= MAX; i++)
        factMod[i] = ((factMod[i-1] % mod) * i) % mod; 
}

int main() {
    fastIO;
    ll t; cin >> t;
    precompute();
    for(ll qq = 0; qq < t; qq++) {
        ll n; cin >> n;
        if(n == 0) cout << 0 << endl;
        else
            cout << (factMod[n-2] * (factMod[n] - 2)) % mod << endl; 
    }
    return 0;
}