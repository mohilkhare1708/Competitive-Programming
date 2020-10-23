//Codechef: mohilllll Codeforces: mohilkhare Google: mohilkhare17
//headers
#include <bits/stdc++.h>
#include <assert.h>
//shorts
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>
#define sll stack<long long int>
#define pb push_back
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)
//
//namespaces
using namespace std;

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll q = 0; q < t; q++) {
        ll n; cin >> n;
        ll a[n], x = 0;
        ll keeper[1001] = {0};
        vector<pair<ll, ll>> keep;
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) {
            keep.pb(make_pair(a[i], 1));
            while(true) {
                if(a[i+1] == a[i] && i < n) {
                    keep[x].second++;
                    i++;
                }
                else {
                    x++;
                    break;
                }
            }
        }
        /*for(auto x : keep) {
            cout << x.first << " " << x.second << endl;
        }*/
        ll maxSum = -1, maxI = -1;
        for(ll i = 0; i < keep.size(); i++) {
            if(keep[i].second % 2 == 1)
                keeper[keep[i].first] += floor(keep[i].second/2)+1; 
            else if(keep[i].second % 2 == 0)
                keeper[keep[i].first] += floor(keep[i].second/2);
            /*if(keeper[keep[i].second] > maxSum) {
                maxI = keep[i].first;
                maxSum = keep[i].second;
            }*/
            //for(ll j = 1; j <= 10; j++) cout << keeper[j] << " ";
            //cout << endl << "maxSum = " << maxSum << " " << "maxI = " << maxI << endl;
        }
        for(ll i = 1; i <= 1000; i++)
            if(keeper[i] > maxSum)
                maxSum = keeper[i], maxI = i;
        cout << maxI << endl;
    }
    return 0;
}