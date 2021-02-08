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
    ll n, k, maxo; cin >> n >> k;
    if(n & 1) {
        maxo = n*n/2;
        maxo++;
    }
    else 
        maxo = n*n/2;
    if(k > maxo)
        cout << "NO" << endl;
    else {
        ll filled = 0;
        cout << "YES" << endl;
        for(ll i = 0; i < n; i++) {
            for(ll j = 0; j < n; j++) {
                if(filled < k && ((i % 2 == 0 && j % 2 == 0) || (i & 1 && j & 1))) {
                    cout << "L";
                    filled++;
                }
                else
                    cout << "S";
            }
            cout << endl;
        }
    }
    return 0;
}