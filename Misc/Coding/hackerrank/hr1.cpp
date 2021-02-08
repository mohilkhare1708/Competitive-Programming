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

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll q = 0; q < t; q++) {
        double s, v, kp, kd; cin >> s >> v >> kp >> kd;
        double err = s - v;
        double le = 0;
        double reach = err;
        ll ctr = 0;
        double curr = v;
        while(curr != s) {
            if(ctr == 0) {
                curr += kp*reach - kd*reach;
                le = reach;
                reach = s - curr;
                ctr++;
            }
            else {
                curr += kp*reach + kd*(le - reach);
                le = reach;
                reach = s- curr;
                ctr++;
            }
        }
        cout << ctr << endl;
    }
    return 0;
}