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

bool comp(ll a, ll b) { 
    return (a < b); 
} 

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll q = 0; q < t; q++) {
        ll a[3], b[3];
        cin >> a[0] >> a[1] >> a[2] >> b[0] >> b[1] >> b[2];
        ll ans = 0;
        vll checkList = {   }
        while(a[0] != b[0] && a[1] != b[1] && a[2] != b[2]) {
            if(b[0]/a[0] == 0 && b[1]/a[1] == 0 && b[2]/a[2] == 0) {
                ll diff0 = b[0]-a[0];
                ll diff1 = b[1]-a[1];
                ll diff2 = b[2]-b[2];
                ll mini = min({diffa, diffb, diffc}, comp);
                if(a[0] != b[0]) a[0] += mini;
                if(a[1] != b[1]) a[1] += mini;
                if(a[2] != b[2]) a[2] += mini;
                ans++;
            }
            else {
                ll r0 = b[0]/a[0];
                ll r1 = b[1]/a[1];
                ll r2 = b[2]/a[2];

            }
        }

    }
    return 0;
}S