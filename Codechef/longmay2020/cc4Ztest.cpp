#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll a, b, l, r, z; cin >> a >> b >> z;
    ll aand = a&z;
    ll band = b&z;
    cout << aand*band << endl;
}
