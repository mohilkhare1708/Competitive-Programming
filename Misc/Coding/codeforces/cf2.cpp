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
        ll n; cin >> n;
        if(n == 1) {
            cout << "0" << endl;
            continue;
        }
        bool ok = false;
        vpll fact;
        int count = 0; 
        while (!(n % 2)) { 
            n >>= 1;
            count++; 
        } 
        if(count) 
            fact.pb(mp(2, count));
        for (long long i = 3; i <= sqrt(n); i += 2) { 
            count = 0; 
            while (n % i == 0) { 
                count++; 
                n = n / i; 
            } 
            if(count) {
                if(i == 3)
                    ok = true;
                if(i != 3)
                    ok = false;
                fact.pb(mp(i, count));
            }
            //cout << i << " " << ok << endl;
        } 
        if (n > 2) {
            if(n == 3)
                ok = true;
            if(n != 3)
                ok = false;
            fact.pb(mp(n, 1));
        }
        //for(auto x : fact) cout << x.first << " " << x.second << endl;
        if(!ok)
            cout << "-1" << endl;
        else {
            sort(fact.begin(), fact.end());
            //for(auto x : fact) cout << x.first << " " << x.second << endl;
            if(fact.size() == 2) {
                if(fact[0].second <= fact[1].second) {
                    cout << fact[1].second + abs(fact[1].second - fact[0].second) << endl;
                }
                else {
                    cout << "-1" << endl;
                    continue;
                }
            }
            else {
                cout << fact[0].second*2 << endl;
                continue;
            }
        }
    }
    return 0;
}