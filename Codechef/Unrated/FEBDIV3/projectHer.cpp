#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        set<char> charKeep;
        for(auto x : s) charKeep.insert(x);
        vector<char> uniques(charKeep.begin(), charKeep.end());
        do {
            for(auto x : uniques) cout << x;
            cout << endl;
        } while(next_permutation(uniques.begin(), uniques.end()));
    }
    return 0;
}