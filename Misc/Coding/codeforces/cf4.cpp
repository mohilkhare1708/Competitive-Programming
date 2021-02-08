//Codechef: mohilllll Codeforces: mohilllll Google: mohilkhare17
//headers
#include <bits/stdc++.h>
#include <assert.h>
//shorts
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>>
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

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll q = 0; q < t; q++) {
        ll n, k; cin >> n >> k;
        bool ok = true;
        ll a[n], req[n];
        map<ll, ll> keeper;
        for(ll i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] % k == 0) {
                req[i] = 0;
                continue;
            }
            else 
                req[i] = k - (a[i] % k);
            if(req[i]) ok = false;
            if(keeper.find(req[i]) == keeper.end())
                keeper[req[i]]++;
            else {
                ll temp = req[i];
                while(keeper.find(temp) != keeper.end())
                    temp += k;
                req[i] = temp;
                keeper[temp]++;
            }
        }
        //for(ll i = 0; i < n; i++) cout << req[i] << " "; cout << endl;
        if(ok)
            cout << 0 << endl;
        else {
            ll maxi = LLONG_MIN;
            for(ll i = 0; i < n; i++) maxi = max(maxi, req[i]);
            ll ans = 1 + maxi;
            cout << ans << endl;
        }
    }
    return 0;
}