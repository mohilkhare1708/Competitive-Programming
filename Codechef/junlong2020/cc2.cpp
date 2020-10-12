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
#define here std::cout << "here\n";
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)

using namespace std;
// using namespace std::chrono;
// auto start = high_resolution_clock::now();
// auto stop = high_resolution_clock::now();
// auto duration = duration_cast<microseconds>(stop - start);
// cout << "Time taken by function: " << duration.count() << " microseconds" << endl;

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll q = 0; q < t; q++) {
        ll n, p; cin >> n >> p;
        ll a[n+1][n+1] = {0};
        for(ll i = 1; i <= n; i++) {
            for(ll j = 1; j <= n; j++) {
                ll resp;
                cout << "1 " << i << " " << j << " " << i << " " << j << endl;
                cin >> resp;
                if(resp == 1)
                    a[i][j] = 1;
            }
        }
        cout << "2" << endl;
        for(ll i = 1; i <= n; i++) {
            for(ll j = 1; j <= n; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
        ll x; cin >> x;
        if(x == -1)
            break;
    }
    return 0;
}