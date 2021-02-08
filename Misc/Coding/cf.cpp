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
#define here std::cout << "here" << endl;
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
        ll n, m, k; cin >> n >> m >> k;
        if(m == 0) {
            cout << "0" << endl;
            continue;
        }
        ll p = n/k;
        if(m <= p) {
            cout << m << endl;
            //here;
            continue;
        }
        else if(m > p) {
            //here;
            ll rem = m-p;
            //cout << rem << " " << p << endl;
            if(rem != 0 && rem / (k-1) == 0) {
                cout << p - 1 << endl;
                continue;
            }
            else if(rem >= p*(k-1)) {
                //here;
                cout << "0" << endl;
                continue;
            }
            ll dist;
            if(rem % (k-1) == 0)
                dist = rem / (k-1);
            else 
                dist = (rem / (k-1)) + 1;
            //cout << rem << " " << k-1 << " " << endl;
            cout << p - dist << endl;
        } 
    }
    return 0;
}