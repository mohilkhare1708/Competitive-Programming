//Codechef: mohilllll Codeforces: mohilkhare Google: mohilkhare17
//headers
#include <bits/stdc++.h>
#include <assert.h>
//shorts
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>
#define vpll vector<pair<long long int, long long int>>
#define sll set<long long int>
#define mp make_pair
#define pb push_back
#define endl "\n"
#define here std::cout << "here\n";
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)

using namespace std;

//this will get AC :)

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll q = 0; q < t; q++) {
        ll ts, ans = 0; cin >> ts;
        if(ts % 2 != 0)
            ans = ts / 2;
        else {
            ll temp = ts;
            while(temp % 2 == 0)
                temp = temp>>1;
            ans = temp/2;
        }
        cout << ans << endl;
    }
    return 0;
}