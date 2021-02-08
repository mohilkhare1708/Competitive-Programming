#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define here std::cout << "here\n";
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main() {
    fastIO;
    ll t; cin >> t;
    while(t--) {
        stack<char> st;
        string s; cin >> s;
        bool ok = true;
        for(ll i = 0; i < s.length(); i++) {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
                st.push(s[i]);
            else if(st.empty() || ((s[i] == '}' && st.top() != '{') || (s[i] == ')' && st.top() != '(') || (s[i] == ']' && st.top() != '['))) {
                ok = false;
                break;
            }
            else st.pop();
        }
        if(ok && st.empty()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}