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
        string s; cin >> s;
        ll ans = 0;
        for(ll i = 1; i < s.length()/2; i++) {
            string sub1 = s.substr(0, i);
            string sub2 = s.substr(i, i);
            string sub3 = s.substr(2*i, (s.length()-2*i)/2);
            string sub4 = s.substr(2*i + (s.length()-2*i)/2, (s.length()-2*i)/2);
            //cout << sub1 << " " << sub2 << " " << sub3 << " " << sub4 << endl;
            if(sub1 == sub2 && sub3 == sub4)
                ans++; 
        }
        cout << ans << endl;
    }
    return 0;
}