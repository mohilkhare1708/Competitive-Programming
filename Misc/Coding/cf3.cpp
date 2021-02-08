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
        ll h, c, t; cin >> h >> c >> t;
        ll del = h - c;
        double eve = (double)(c) + (double)(del)/(double)(2);
        double delta = abs((double)eve - (double)t);
        if(delta == 0.0) {
            cout << "2" << endl;
            continue;
        }
        //cout << eve << " " << delta << endl << endl;
        ll ans = 2;
        double prev = 9999999999999, xdell;
        for(ll i = 1; i <= 2000; i += 2) {
            double x = (double)c + del*(double)(i/2 + 1)/(double)i;
            double xdel = abs(x - (double)t);
            //cout << xdel << endl; 
            if(prev <= xdel) {
                ans = i-2;
                break;
            }
            prev = xdel;
            xdell = xdel;
        }
        if(delta <= xdell && ans != 1)
            cout << "2" << endl;
        else if(delta == xdell && ans == 1)
            cout << "1" << endl;
        else
            cout << ans << endl;
    }
    return 0;
}