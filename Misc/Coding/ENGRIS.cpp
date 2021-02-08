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

class trie {
    bool ok;
    char c[];
    trie() {
        ok = false;
        memset(c, '_', sizeof(c));
    }
};

void insT(string s, trie root) {
    trie pk = root;
    for(ll i = 0; i < s.length(); i++) {
        ll in = s[i] - 'a';
        if(pk.c[in] == '_')
            pk.c[in] = trie();
        pk = pk.c[in];
    }
    pk.ok = true;
}

void conT(vector<string> v, trie root) {
    for(auto x : v)
        insT(x, root);
}

ll macT(string ss, trie root) {
    ll level = 0, i = 0;
    trie pk = root;
    vll ans;
    while(i < ss.length()) {
        ll j = ss[i] - 'a';
        if(pk.c[j] != '_') {
            pk = pk.c[j];
            level++;
        }
        else return 0;
        i++;
    } 
}

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll qq = 0; qq < t; qq++) {
        ll n, q; cin >> n >> q;
        vector<string> nkeep, rkeep;
        for(ll i = 0; i < n; i++) {
            string s; cin >> s;
            nkeep.pb(s);
            reverse(s.begin(), s.end());
            rkeep.pb(s);
        }
        trie t1, t2;
        conT(nkeep, t1);
        conT(rkeep, t2);
        for(ll i = 0; i < q; i++) {
            string ss; cin >> ss;
            ll k = ss.length();
            for(ll j = 0; j < k; j++) {
                ll x = j, y = k - j - 1;
                if(x >= y) {
                    ll ans = macT(ss.substr(0, j), t1);
                }
            }
        }
    }
    return 0;
}