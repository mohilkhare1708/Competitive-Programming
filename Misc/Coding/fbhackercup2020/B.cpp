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
    for(ll qq = 1; qq <= t; qq++) {
        ll n; string s;
        cin >> n >> s;
        ll a = 0, b = 0;
        for(ll i = 0; i < s.length(); i++) {
            if(s[i] == 'A') a++;
            else b++;
        }
        if(abs(a-b) == 1)
            cout << "Case #" << qq << ": Y" << endl;
        else cout << "Case #" << qq << ": N" << endl;
    }
    return 0;
}