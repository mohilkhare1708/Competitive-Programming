#include <bits/stdc++.h>
using namespace std;

int main() {
    int x = 0, ops; cin >> ops;
    while(ops--) {
        string s; cin >> s;
        if(s[0] == '+' || s[2] == '+')
            x++;
        else
            x--;
    }
    cout << x;
}