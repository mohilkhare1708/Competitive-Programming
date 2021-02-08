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
    ll t; cin >> t;
    for(ll qq = 1; qq <= t; qq++) {
        cout << "Case #" << qq << ": ";
        string s; cin >> s;
        ll dots = 0, b = 0;
        for(ll i = 1; i < s.length(); i++) {
            if(s[i] == '.')
                dots++;
            else 
                b++;
        }
        if(dots >= b || dots == 0)
            cout << "N" << endl;
        else cout << "Y" << endl;
    }
    return 0;
}