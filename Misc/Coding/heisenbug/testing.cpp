#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long int
using namespace std;


int main() {
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        string ans;
        if(n % 3 == 0 || n % 7 == 0)
            ans = "Elite";
        else if(n >= 7 && (((n-3) % 7 == 0) || ((n-7) % 3 == 0)))
            ans = "Legendary";
        else ans = "Subordinate";
        cout << ans << endl;
    }
    return 0;
}