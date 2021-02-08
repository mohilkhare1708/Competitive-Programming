/*
Author : Mohil Khare
Created On: 04 September 2020, 11:22
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
#define mod 1e9+7

using namespace std;

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll qq = 0; qq < t; qq++) {
        ll n, m, x, y; cin >> n >> m >> x >> y;
        char a[n][m];
        for(ll i = 0; i < n; i++)
            for(ll j = 0; j < m; j++)
                cin >> a[i][j];
        ll twos = 0, ones = 0, oones = 0;
        for(ll j = 0; j < m; j++) {
            for(ll i = 0; i < n; i++) {
                if(i != n-1 && a[i][j] == '+' && a[i+1][j] == '+') {
                    ones += 2;
                    twos++;
                    i++;
                }
                else if(a[i][j] == '+') {
                    ones++;
                    oones++;
                }
            }
        }
        ll mini = min(2*x, y);
        if(mini == 2*x)
            cout << ones*x << endl;
        else if(mini == y)
            cout << twos*y + oones*x << endl;
    }
    return 0;
}