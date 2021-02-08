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
    ll n, q; cin >> n >> q;
    ll height[n+1], taste[n+1];
    for(ll i = 1; i <= n; i++) cin >> height[i];
    for(ll i = 1; i <= n; i++) cin >> taste[i];
    for(ll qq = 0; qq < q; qq++) {
        ll qt, b, c; cin >> qt >> b >> c;
        if(qt == 1)
            taste[b] = c;
        else {
            ll ans = 0;
            if(b == c) {
                ans = taste[b];
                cout << ans << endl;
            }
            else if(b > c) {
                //here;
                ll start = height[c], end = height[b], curr = height[c];
                ans = taste[c];
                bool poss = true;
                for(ll i = c; i <= b; i++) {
                    //cout << "checking height: " << height[i] << " curr: " << curr << endl;
                    if(i == b) {
                        ans += taste[i];
                        continue;
                    }
                    if((height[i] >= end && i != b) || (height[i] == curr && i != c)) {
                        poss = false;
                        break;
                    }
                    else if(height[i] > curr){
                        ans += taste[i];
                        curr = height[i];
                    }
                }
                if(!poss)
                    cout << -1 << endl;
                else 
                    cout << ans << endl;
            }
            else {
                //here;
                ll start = height[c], end = height[b], curr = height[c];
                ans = taste[c];
                bool poss = true;
                for(ll i = c; i >= b; i--) {
                    //cout << "checking height: " << height[i] << " curr: " << curr << endl;
                    if(i == b) {
                        ans += taste[i];
                        continue;
                    }
                    if((height[i] >= end && i != b)|| (height[i] == curr && i != c)) {
                        poss = false;
                        break;
                    }
                    else if(height[i] > curr){
                        ans += taste[i];
                        curr = height[i];
                    }
                }
                if(!poss)
                    cout << -1 << endl;
                else 
                    cout << ans << endl;
            }
        }
    }
    return 0;
}