#include <bits/stdc++.h>
using namespace std;

int main() {
    int sz, ans = 0; cin >> sz;
    string s; cin >> s;
    for(int i = 0; i < sz; i++) {
        int x = i+1, ctr = 1;
        while(x < sz && s[i] == s[x]) {
            ans++;
            x++;
        }
        i = x-1;
    }
    cout << ans;
}