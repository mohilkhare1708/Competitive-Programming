//Codechef: mohilllll Codeforces: mohilllll Google: mohilkhare17
//headers
#include <bits/stdc++.h>
#include <assert.h>
//shorts
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>>
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

int main() {
    fastIO;
    string s; cin >> s;
    ll maxi = LLONG_MIN;
    for(ll i = 0; i < s.length(); i++) {
        ll x = i+1;
        ll rep = 1;
        while(s[i] == s[x] && x < s.length()) {
            rep++;
            x++;
        }
        i = x-1;
        maxi = max(maxi, rep);
    }
    cout << maxi;
    return 0;
}