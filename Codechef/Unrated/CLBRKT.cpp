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

struct safe_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};


/*
void precompute(string s) {
    keeper.clear();
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
*/

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll qq = 0; qq < t; qq++) {
        string s; cin >> s;
        bool ok = false;
        stack<ll> st;
        unordered_map<ll, ll> keeper;
        keeper[-1] = -1;
        ll ctr = -1;
        for(ll i = s.length()-1; i >= 0; i--) {
            if(s[i] == ')')
                st.push(i);
            if(st.empty() && s[i] == '(')
                ctr--;
            if(!st.empty() && s[i] == '(') {
                ll temp = st.top();
                keeper[i+1] = 1 + temp;
                ctr = i+1;
                ok = true;
                st.pop();
            }
            if(ok && s[i] == ')') {
                if(ctr != -1)
                    keeper[i+1] = keeper[ctr];
            }
        }
        ll q; cin >> q;
        ll qx[q]; for(ll i = 0; i < q; i++) cin >> qx[i];
        for(auto x : qx) {
            if(keeper[x])
                cout << keeper[x] << endl;
            else cout << "-1" << endl;
        }
    }
    return 0;
}