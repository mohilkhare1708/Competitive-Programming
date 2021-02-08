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

/*
max(A, B) / min(A, B) <= 2
A - 2x - y = B - x - 2y = 0
A + y = B + x
A = 2x + y
B = x + 2y
A + B = 3(x + y)
(A + B) % 3 == 0
*/

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll q = 0; q < t; q++) {
        ll a, b; cin >> a >> b;
        if(a == 0 && b == 0) //corner case
            cout << "YES" << endl;
        else if(min(a, b) == 0) 
            cout << "NO" << endl;
        else if((a+b) % 3 == 0 && (double)max(a,b) / (double)min(a,b) <= 2) 
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}
