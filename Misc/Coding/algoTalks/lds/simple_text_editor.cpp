#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define here std::cout << "here\n";
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main() {
    fastIO;
    ll q; cin >> q;
    stack<string> st;
    st.push("");
    while(q--) {
        int op; string arg;
        cin >> op;
        if(op != 4)
            cin >> arg;
        if(op == 1)
            st.push(st.top()+arg);
        else if(op == 2)
            st.push(st.top().substr(0, st.top().length()-stoi(arg)));
        else if(op == 3)
            cout << st.top()[stoi(arg)-1] << endl;
        else 
            st.pop();
    }
    return 0;
}