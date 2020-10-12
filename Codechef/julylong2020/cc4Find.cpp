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
    ll dp[n+1][n+1] {0};
    for(ll b = 1; b <= n; b++) {
        for(ll c = 1; c <= n; c++) {
            if(b == c) {
                dp[b][c] = taste[b];
            }
            else if(b > c) {
                //here;
                ll start = height[c], end = height[b], curr = height[c];
                dp[b][c] = taste[c];
                bool poss = true;
                for(ll i = c; i <= b; i++) {
                    //cout << "checking height: " << height[i] << " curr: " << curr << endl;
                    if(i == b) {
                        dp[b][c] += taste[i];
                        continue;
                    }
                    if((height[i] >= end && i != b) || (height[i] == curr && i != c)) {
                        poss = false;
                        break;
                    }
                    else if(height[i] > curr){
                        dp[b][c] += taste[i];
                        curr = height[i];
                    }
                }
                if(!poss)
                    dp[b][c] = -1;
            }
            else {
                //here;
                ll start = height[c], end = height[b], curr = height[c];
                dp[b][c] = taste[c];
                bool poss = true;
                for(ll i = c; i >= b; i--) {
                    //cout << "checking height: " << height[i] << " curr: " << curr << endl;
                    if(i == b) {
                        dp[b][c] += taste[i];
                        continue;
                    }
                    if((height[i] >= end && i != b)|| (height[i] == curr && i != c)) {
                        poss = false;
                        break;
                    }
                    else if(height[i] > curr){
                        dp[b][c] += taste[i];
                        curr = height[i];
                    }
                }
                if(!poss)
                    dp[b][c] = -1;
            }
        }
    }
    for(ll b = 1; b <= n; b++) {
        for(ll c = 1; c <= n; c++) 
            cout << dp[b][c] << "\t";
        cout << endl;
    }
    return 0;
}