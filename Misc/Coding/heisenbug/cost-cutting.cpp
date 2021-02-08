/*
Author : Mohil Khare
Created On: 08 September 2020, 10:41
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
        ll a[n], gcd; 
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(i == 0)
                gcd = a[i];
            else 
                gcd = __gcd(gcd, a[i]);
        }
        for(int i = 0; i < n; i++)
            cout << a[i] / gcd << " ";
        cout << endl;
    }
    return 0;
}