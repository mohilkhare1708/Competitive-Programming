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
#define endl "\n"
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
        ll n, m, x, y; cin >> n >> m >> x >> y;
        char a[n][m];
        for(ll i = 0; i < n; i++)
            for(ll j = 0; j < m; j++)
                cin >> a[i][j];
        ll twos = 0, ones = 0, oones = 0;
        for(ll i = 0; i < n; i++) {
            for(ll j = 0; j < m; j++) {
                if(j != m-1 && (a[i][j] == '.' && a[i][j+1] == '.')) {
                    twos++;
                    ones += 2;
                    j++;
                }
                else if(a[i][j] == '.') {
                    ones++;
                    oones++;
                }
            }
        }
        //cout << ones << " " << twos << " " << oones << endl;
        ll mini = min(2*x, y);
        if(mini == 2*x)
            cout << ones*x << endl;
        else if(mini == y)
            cout << twos*y + oones*x << endl;
    }
    
    return 0;
}