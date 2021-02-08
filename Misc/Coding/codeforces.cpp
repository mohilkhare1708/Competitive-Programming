//Codechef: mohilllll Codeforces: mohilkhare Google: mohilkhare17
//headers
#include <bits/stdc++.h>
#include <assert.h>
//shorts
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>
#define sll stack<long long int>
#define pb push_back
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)
//
//namespaces
using namespace std;

ll findOnes(string s) {
    ll ans = 0;
    for(ll i = 0; i < s.length(); i++)
        if(s[i] == '1')
            ans++;
    return ans;
}

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll q = 0; q < t; q++) {
        string s; cin >> s;
        ll ones = findOnes(s);
        ll zeroes = s.length()-ones;
        if(zeroes == s.length() || ones == s.length())
            cout << s << endl;
        else {
            vll keep;
            bool one;
            ll sumKeep[s.length()];
            ll ctr;
            if(s[0] == '1') {
                ctr = 1;
                sumKeep[0] = 1;
                one = true;
            }
            else {
                one = false;
                sumKeep[0] = -1;
                ctr = -1;
            }
            for(ll i = 1; i < s.length(); i++) {
                if(one && s[i] == '1')
                    ctr++;
                else if(one && s[i] != '1') {
                    one = false;
                    keep.pb(ctr);
                    ctr = -1;
                }
                else if(!one && s[i] == '0')
                    ctr--;
                else if(!one && s[i] == '1') {
                    one = true;
                    keep.pb(ctr);
                    ctr = 1;
                }
            }
        }
        
    }
    return 0;
}       