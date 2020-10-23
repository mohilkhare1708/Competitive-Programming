//Codechef: mohilllll Codeforces: mohilkhare Google: mohilkhare17
//headers
#include <bits/stdc++.h>
#include <assert.h>
//shorts
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>
#define vpll vector<pair<long long int, long long int>>
#define sll set<long long int>
#define mp make_pair
#define pb push_back
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
using namespace std;
//program specific shorts (if any)

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll q = 0; q < t; q++) {
        ll n; cin >> n;
        ll a[n][n];
        bool safe = true;
        for(ll i = 0; i < n; i++) {
            for(ll j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
        for(ll i = 0; i < n; i++) {
            for(ll j = 0; j < n-1; j++) {
                if(a[i][j] == 1 && a[i][j+1] == 1) {
                    safe = false;
                    break;
                }
                if((i > 0 && a[i][j] == 1 && a[i-1][j] == 1) || (i < n-1 && a[i][j] == 1 && a[i+1][j] == 1)) {
                    safe = false;
                    break;
                }
            }
        }
        if(safe)
            cout << "SAFE" << endl;
        else 
            cout << "UNSAFE" << endl;
    }
    return 0;
}