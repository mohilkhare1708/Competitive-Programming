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

string find(string s, vector<string> dict) {
    string nope = "bleh";
    for(auto x : dict) {
        ll diff = abs(x.length() - s.length());
        if(diff != 0 && diff != 1) continue;
        if(diff == 0) {
            ll ctr = 0;
            bool ok = true;
            for(ll i = 0; i < s.length(); i++) {
                if(s[i] != x[i]) {
                    ctr++;
                    if(ctr > 1) {
                        ok = false;
                        break;
                    }
                }
            }
            if(ctr <= 1) return x;
            if(!ok) continue;
        }
        else if(diff == 1) {
            ll ctr = 0;
            bool ok = true;
            for(ll i = 0; i < x.length(); i++) {
                if(s[i] != x[i]) {
                    ctr++;
                    ll p1 = i, p2 = i+1;
                    while(ctr < 2 && p1 < s.length() && p2 < x.length()) {
                        if(x[p2] != s[p1]) {
                            ok = false;
                            ctr++;
                            break;
                        }
                        p1++;
                        p2++;
                    }
                    if(p1 == s.length() || p2 == x.length()) ok = false;
                    if(!ok) break;
                }
            }
            if(ctr == 1) return x;
            if(!ok) continue;
        }
    }
    return nope;
}

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll qq = 0; qq < t; qq++) {
        ll n, q; cin >> n >> q;
        vector<string> dict;
        string ele;
        for(ll i = 0; i < n; i++) {cin >> ele; dict.pb(ele);}
        for(ll i = 0; i < q; i++) {
            string s; cin >> s;
            string ans = find(s, dict);
            cout << ans << endl;
        }
    }
    return 0;
}