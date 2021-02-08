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

ll big[26] = {0};

void precompute() {
    big[1] = 0;
    for(ll i = 1; i < 26; i++) {
        if(i % 2 == 0)
            big[i] = (2*big[i-1] + 1) % MOD;
        else 
            big[i] = (2*big[i-1]) % MOD;
    }
}

int main() {
    fastIO;
    ll t; cin >> t;
    precompute();
    for(ll q = 0; q < t; q++) {
        string s; cin >> s;
        cout << big[s.length()] << endl;
    }
    return 0;
}