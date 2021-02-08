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
        ll n; cin >> n; ll a[n], b[n];
        unordered_map<ll, ll> mp0, mp1, mp2;
        ll mi = LLONG_MAX;
        for(ll i = 0; i < n; i++) {
            cin >> a[i];
            mi = min(mi, a[i]);
            mp0[a[i]]++;
        }
        for(ll i = 0; i < n; i++) {
            cin >> b[i];
            mi = min(mi, a[i]);
            mp0[b[i]]++;
        }
        int flag = 0;
        for(auto x : mp0) {
            if(x.second % 2 == 1) {
                flag = 1;
                break;
            }
            else 
                mp1[x.first] = x.second/2;
        }
        //cout << "{"; for(auto x : mp1) cout << x.first << ": " << x.second << ", "; cout << "}\n";
        if(flag) {
            cout << "-1" << endl;
            continue;
        }
        else {
            mp2 = mp1;
            vll v1, v2;
            for(ll i = 0; i < n; i++) {
                if(mp1[a[i]])
                    mp1[a[i]]--;
                else 
                    v1.pb(a[i]);
            }
            for(ll i = 0; i < n; i++) {
                if(mp2[b[i]])
                    mp2[b[i]]--;
                else 
                    v2.pb(b[i]);
            }
            for(auto x : v1) cout << x << " "; cout << endl;
            for(auto x : v2) cout << x << " "; cout << endl;
            sort(v1.begin(), v1.end());
            sort(v2.begin(), v2.end(), greater<ll>());
            if(v1.size() == 0) {
                cout << "0" << endl;
                continue;
            }
            else {
                ll ans = 0;
                for(ll i = 0; i < v1.size(); i++) {
                    ans += min(2*mi, min(v1[i], v2[i]));
                }
                cout << ans << endl;
            }
            
        }
    }
    return 0;
}