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
        ll closingBrackets[s.length()] = {0};
        stack<ll> brackets;
        for(ll i = 0; i < s.length(); i++) {
            if(s[i] == '(')
                brackets.push(i);
            else if(s[i] == ')') {
                closingBrackets[i] = brackets.top();
                brackets.pop();
            }
        }
        for(ll i = 0; i < s.length(); i++)
            cout << closingBrackets[i] << " ";
        cout << endl;
    }
    return 0;
}