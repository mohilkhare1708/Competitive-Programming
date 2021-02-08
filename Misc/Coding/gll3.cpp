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



void precompute(string s) {
    map<ll, ll> keeper;
    bool ok = false;
    stack<ll> st;
    keeper[-1] = -1;
    ll ctr = -1;
    for(ll i = s.length()-1; i >= 0; i--) {
        if(s[i] == ')')
            st.push(i);
        if(st.empty() && s[i] == '(')
            ctr--;
        if(!st.empty() && s[i] == '(') {
            ll temp = st.top();
            keeper[i+1] = temp;
            ctr = i+1;
            keeper[i+1]++;
            ok = true;
            st.pop();
        }
        if(ok && s[i] == ')') {
            if(ctr != -1)
                keeper[i+1] = keeper[ctr];
        }
    }
}

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll qq = 0; qq < t; qq++) {
        string s; cin >> s;
        precompute(s);
        ll q; cin >> q;
        while(q--) {
            ll x; cin >> x;
            if(keeper[x])
                cout << keeper[x] << endl;
            else cout << "-1" << endl;
        }
    }
    return 0;
}