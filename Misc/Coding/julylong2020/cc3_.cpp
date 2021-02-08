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
        ll n, x; cin >> n >> x;
        ll a[n]; for(ll i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        if(x >= a[n-1]) {
            cout << n << endl;
            continue;
        }
        bool cured[n];
        memset(cured, false, sizeof(cured));
        ll ans = 0;
        ll i;
        for(ll xx = 0; xx < n; xx++) {
            if(2*a[xx] >= x) {
                i = xx;
                break;
            }
        }
        ll keep = i;
        //cout << keep << endl;
        while(!cured[n-1] && i < n) {
            if(x < a[i]) {
                ll ele = a[i];
                ll temp = ele;
                while(ele > 0) {
                    //cout << ele << " " << x << endl;
                    ele -= x;
                    x *= 2;
                    if(ele*2 > temp) ele = temp;
                    else ele *= 2;
                    ans++;
                }
                x = temp*2;
                cured[i] = true;
            }
            else {
                //here;
                ans++;
                cured[i] = true;
                x = a[i]*2;
            }
            i++;
        }
        ans += keep;
        cout << ans << endl;
    }
    return 0;
}