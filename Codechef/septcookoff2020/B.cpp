#include <bits/stdc++.h>
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>>
#define vpll vector<pair<long long int, long long int>>
#define mp make_pair
#define pb push_back
#define endl "\n"
#define here std::cout << "here\n";
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

// program specific shorts (if any)
const ll mod = 1000000007;

using namespace std;

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll qq = 0; qq < t; qq++) {
        ll nn, k, sum = 0, sumT = 0; cin >> nn >> k;
        string s; cin >> s;
        vll islands, terminalIslands;
        for(ll i = 0; i < nn; i++) {
            if(s[i] == '1') continue;
            else {
                ll x = i+1, len = 1;
                if(x < nn && s[x] == '0') {
                    x++;
                    len++;
                }
                i = x-1;
                islands.pb(len);
                sum += len;
            }
        }
        ll keeper = sum;
        ll n = islands.size(), m = 0;
        if(s[0] == '0') {
            m++;
            n--;
            sum -= islands[0];
            sumT += islands[0];
            terminalIslands.pb(islands[0]);
            islands.erase(islands.begin());
        }
        if(s[nn-1] == '0') {
            m++;
            n--;
            sumT += islands[islands.size()-1];
            sum-= islands[islands.size()-1];
            terminalIslands.pb(islands[islands.size()-1]);
            islands.pop_back();
        }
        sort(islands.rbegin(), islands.rend());
        sort(terminalIslands.rbegin(), terminalIslands.rend());
        //cout << n << " " << m << " " << sum << " " << sumT << endl;
        if(k >= 2*n + m) {
            cout << 0 << endl;
        }
        else if(k == 0)
            cout << keeper << endl;
        else if(sumT >= islands[0]) {
            if(k >= m) {
                k -= m;
                for(ll i = 0; i < islands.size(), k > 0; i++, k-=2)
                    sum -= islands[i];
                cout << sum << endl;
            }
            else {
                cout << sum + terminalIslands[1] << endl;
            }
        }
        else {
            if(k >= 2*n) {
                k -= 2*n;
                for(ll i = 0; i < terminalIslands.size(), k > 0; i++, k--) {
                    sumT -= terminalIslands[i];
                }
                cout << sumT << endl;
            }
            else {
                ll ans = sumT;
                for(ll i = 0; i < islands.size(), k > 0; i++, k-=2) 
                    sum -= islands[i];
                cout << ans + sum << endl;
            }
        }
    }
    return 0;
}