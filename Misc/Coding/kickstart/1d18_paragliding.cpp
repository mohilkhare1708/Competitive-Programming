//Codechef: mohilllll Codeforces: mohilkhare Google: mohilkhare17
//headers
#include <bits/stdc++.h>
#include <assert.h>
//shorts
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>
#define vpll vector<pair<long long int, long long int>>
#define vbool vector<bool>
#define sll set<long long int>
#define mp make_pair
#define pb push_back
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)

using namespace std;
using namespace std::chrono;

bool getDesc(const pair<ll, ll> &a, const pair<ll, ll> &b) { 
    return (a.second > b.second); 
} 

// getRelevantTowers(vpll shrines, vbool relevant) {
//     for(ll i = 0; i < shrines.size()-1; i++) {   
//         ll low = i, high = shrines.size()-1;
//         while(low < high) {
//             ll mid = floor((low + high)/2);
//             if(relevant[mid] && shrines[mid].second <= shrines[i].second + abs(shrines[i].first-shrines[mid].first))
//                 relevant[mid] = false;
//             else 
//                 high = mid - 1;
//         }
//     }
// }

int main() {
    fastIO;
    auto start = high_resolution_clock::now();
    ll t; cin >> t;
    for(ll q = 0; q < t; q++) {
        ll n, k; cin >> n >> k;
        ll a[4], b[4], c[4], m[4];
        vll p(n+1, 0), h(n+1, 0), x(k+1, 0), y(k+1, 0), len(n+1, 0);
        cin >> p[1] >> p[2] >> a[0] >> b[0] >> c[0] >> m[0];
        cin >> h[1] >> h[2] >> a[1] >> b[1] >> c[1] >> m[1];
        cin >> x[1] >> x[2] >> a[2] >> b[2] >> c[2] >> m[2];
        cin >> y[1] >> y[2] >> a[3] >> b[3] >> c[3] >> m[3];
        vpll shrines;
        shrines.pb(mp(LLONG_MAX, LLONG_MAX));
        shrines.pb(mp(p[1], h[1]));
        shrines.pb(mp(p[2], h[2]));
        for(ll i = 3; i <= max(n, k); i++) {
            if(i <= n) {
                ll pi = (a[0]*p[i-1] + b[0]*p[i-2] + c[0]) % m[0] + 1;
                ll hi = (a[1]*h[i-1] + b[1]*h[i-2] + c[1]) % m[1] + 1;
                p[i] = pi; h[i] = hi;
                shrines.pb(mp(pi, hi));
            }
            if(i <= k) {
                ll xi = (a[2]*x[i-1] + b[2]*x[i-2] + c[2]) % m[2] + 1;
                ll yi = (a[3]*y[i-1] + b[3]*y[i-2] + c[3]) % m[3] + 1;
                x[i] = xi; y[i] = yi;
            } 
        }
        // coordinates generation completed
        sort(shrines.begin(), shrines.end(), getDesc);
        // vbool relevant(n+1, true);
        // getRelevantTowers(shrines, relevant);
        // for(auto b : relevant) cout << b << " "; cout << endl;
        for(ll i = 1; i <= n; i++) cout << shrines[i].first << " " << shrines[i].second << endl;
        cout << "shrines:  "; for(auto b : shrines) cout << "(" << b.first << ", " << b.second << ")  "; cout << endl;
        cout << "balloons: "; for(ll i = 1; i <= k; i++) cout << "(" << x[i] << ", " << y[i] << ")  "; cout << endl;
        ll towersChecked = 0, balloonsCaptured = 0;
        for(ll i = 1; i <= k; i++) {
            cout << "for balloon (" << x[i] << ", " << y[i] << ")" << endl;
            ll low = 1, high = n;
            while(low <= high) {
                ll mid = floor((high + low)/2);
                // cout << "high: " << high << " low: " << low << endl;
                cout << "mid shrine (" << shrines[mid].first << ", " << shrines[mid].second << ")" << " " << mid << endl;
                if(shrines[mid].second >= y[i] + abs(x[i] - shrines[mid].first)) {
                    cout << "\tthis shrine will capture" << endl;
                    balloonsCaptured++;
                    break;
                }
                else 
                    high = mid-1        ;
            }
        }
        // while(towersChecked == n || balloonsCaptured == k || w <= n) {
        //     for(ll i = 1; i <= k; i++) {
        //         if(!gotBalloon[i] && h[w] >= y[i] + abs(x[i] - p[w])) {
        //             balloonsCaptured++;
        //             gotBalloon[i] = true;
        //         }
        //     }
        //     // cout << w << " " << balloonsCaptured << endl;
        //     w++;
        // }
        cout << "Case #" << q+1 << ": " << balloonsCaptured << endl;
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by function: " << duration.count() << " microseconds" << endl; 
    return 0;
}