/*
Author : Mohil Khare
Created On: 16 September 2020, 22:20
*/

#include <bits/stdc++.h>
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>>
#define vpll vector<pair<long long int, long long int>>
#define mp make_pair
#define pb push_back
#define endl "\n"
#define here std::cout << "here\n";
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

// program specific shorts (if any)
const ll mod = 1000000007;

using namespace std;

int main() {
    fastIO;
    string s, anss = ""; cin >> s;
    ll sz = s.length();
    map<char, int> keeper;
    for(auto c : s) keeper[c]++;
    ll ptr = 0, od = 0, ev = 0;
    char odd, ans[sz];
    for(auto x : keeper) {
        if(x.second & 1) {
            od++;
            odd = x.first;
            for(ll i = (sz/2) - (x.second/2); i < (sz/2) + x.second; i++) {
                ans[i] = odd;
            }
        }
        else {
            ev++;
            for(ll i = 0; i < x.second/2; i++) {
                ans[ptr] = ans[sz-ptr-1] = x.first;
                ptr++;
            }
        }
    }
    if((sz & 1 && od != 1) || (sz % 2 == 0 && od != 0)) cout << "NO SOLUTION";
    else
        for(ll i = 0; i < sz; i++) cout << ans[i];
    return 0;
}