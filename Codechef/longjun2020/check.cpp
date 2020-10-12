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
    for(ll t = 1; t <= 100; t++) {
        cout << "For " << t << endl;
        if
    for(ll q = 1; q <= t; q++) {
        ll tempq = q;
        ll tempt = t;
        while(tempq % 2 == 0 && tempt % 2 == 0) {
            tempq /= 2;
            tempt /= 2;
        }
        if(tempq % 2 == 0 && tempt % 2 != 0)
        cout << q << " ";
    }
    cout << endl;
    }
    return 0;
}