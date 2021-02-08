#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {
    ll t; cin >> t;
    for(ll qq = 0; qq < t; qq++) {
        ll n, m; cin >> n >> m;
        ll prod = n*m;
        cout << ceil(float(prod/2)) << endl;
    }
    return 0;
}