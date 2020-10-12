//Codechef: mohilllll Codeforces: mohilllll Google: mohilkhare17
#include <bits/stdc++.h>
//shorts
#define ll long long int 
#define vll vector<long long int>
#define vvll vector<vector<long long int>>
#define vpll vector<pair<long long int, long long int>>
#define mp make_pair
#define pb push_back
#define endl "\n"
#define here std::cout << "here\n";
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

//program specific shorts (if any)
#define mod 1e9+7

using namespace std;


int main() {
    fastIO;
    ll t; cin >> t;
    for(ll q = 0; q < t; q++) {
        ll x, y; cin >> x >> y;
        if(max(x, y) == x) {
            if(x & 1)
                cout << (x-1) * (x-1) + y << endl;
            else 
                cout << x * x - y + 1 << endl;
        }
        else {
            if(y & 1) 
                cout << y * y - x + 1 << endl;
            else 
                cout << (y-1) * (y-1) + x << endl;
        }
    }
    return 0;
}