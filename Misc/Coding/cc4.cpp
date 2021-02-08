#include <bits/stdc++.h>
#include <assert.h>
//shorts
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>>
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

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll q = 0; q < t; q++) {
        ll n; cin >> n;
        ll g[n], a[n], b[n]; for(ll i = 0; i < n; i++) cin >> g[i] >> a[i] >> b[i];
        if(n == 1) {
            double x = (double)g[0]*(double)(a[0]*b[0])/(double)(a[0]+b[0]);
            cout << x/(double)a[0] << " " << x/(double)b[0] << endl;
        }
        else {
            
        }
    }
    return 0;
}