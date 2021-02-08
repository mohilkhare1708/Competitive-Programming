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


ll sumOfAP(ll a, ll d, ll n) { 
    ll sum = 0; 
    for (ll i=0;i<n;i++) 
    { 
        sum = sum + a; 
        a = a + d; 
    } 
    return sum; 
} 

int main() {
    fastIO;
    string fix; ll lw, rw, pos; cin >> fix >> lw >> rw >> pos;
    ll ans = abs(lw - rw)/5;
    ll temp = (n*(n+1)*5)/2;
    if(lw > rw) {
        pos += temp;
    }
    else {
        pos -= temp;
    }
    ans = abs(pos - 35);
    cout << ans << endl;
    return 0;
}