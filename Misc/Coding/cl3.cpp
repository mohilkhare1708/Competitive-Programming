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
    for(ll qq = 0; qq < t; qq++) {
        string s; cin >> s;
        for(ll i = 0; i <= s.length(); i++) cout << i; cout << endl;
        ll q; cin >> q;
        for(ll i = 0; i < q; i++) {
            ll p, ctr = 0; cin >> p;
            if(s[p-1] == '(') ctr--;
            ll prev = ctr;
            bool ok = false;
            for(ll i = p; i < s.length(); i++) {
                if(s[i] == '(') ctr--;
                else {
                    if(ctr >= 0 && s[i] == ')') continue;
                    ctr++;
                }
                if(prev < 0 && ctr == 0) {
                    ok = true;
                    cout << i+1 << endl;
                    break;
                }
                prev = ctr;
            }
            if(!ok) {
                cout << "-1" << endl;
            }
        }
    }
    return 0;
}