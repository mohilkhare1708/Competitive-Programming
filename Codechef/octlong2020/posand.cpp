/*
Author : Mohil Khare
Created On: 02 October 2020, 15:53
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
const ll MAX = 100001;

using namespace std;

ll ans[MAX];

void precompute() {
    ans[0] = -1;
    ans[1] = 2;
    ans[2] = 3;
    ans[3] = 1;
    for(ll i = 4; i < MAX; i++) {
        if((i & (i-1)) == 0) {
            ans[i] = i+1;
            ans[i+1] = i;
            i++;
        }
        else ans[i] = i;
    }
}

int main() {
    fastIO;
    ll t, mo = 0; cin >> t;
    precompute();
    for(ll qq = 0; qq < t; qq++) {
        ll n; cin >> n;
        if(n == 1) {cout << 1 << endl; continue;}
        if((n & (n-1)) == 0) {mo++; cout << -1 << endl;}
        else {
            for(ll i = 1; i <= n; i++)
                cout << ans[i] << " ";
            cout << endl;
        }
    }
    return 0;
}