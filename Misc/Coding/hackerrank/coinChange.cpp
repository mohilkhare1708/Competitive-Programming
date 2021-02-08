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
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)

using namespace std;

long getWays(int n, vector<long> c) {
    long dp[c.size()+1][n+1];
    for(int i = 0; i < c.size()+1; i++) dp[i][0] = 1;
    for(int i = 0; i < n+1; i++) dp[0][i] = 0;
    for(int i = 1; i <= c.size(); i++) {
        for(int j = 1; j <= n; j++) {
            if(j - c[i-1] >= 0)
                dp[i][j] = dp[i-1][j] + dp[i][j-c[i-1]];
            else 
                dp[i][j] = dp[i-1][j];
        }
    }
    /*for(int i = 0; i <= c.size(); i++) {
        for(int j = 0; j < n; j++)
            cout << dp[i][j] << " ";
        cout << endl;
    }*/
    return dp[c.size()][n];
}

long change(int amount, vector<long>& coins) {
    if(amount == 0){return 1;}
    if(coins.empty()){return 0;}
    int len = coins.size();
    vector<vector<int>> dp(len+1, vector<int>(amount+1, 0));
    
    for(int i = 0; i < len; i++){
        for(int j = 0; j <= amount; j++){
            if(j==0){
                dp[i][j] = 1;
                continue;
            }
            if(i == 0){
                if(coins[i] > j){
                    dp[i][j] = 0;
                }else{
                    dp[i][j] = dp[i][j-coins[i]];
                }
                continue;
            }
            
            if(coins[i] > j){
                dp[i][j] = dp[i-1][j];
            }else{
                dp[i][j] = dp[i-1][j] + dp[i][j-coins[i]];
            }
        }
        for(int i = 0; i < len; i++) {
            for(int j = 0; j <= amount; j++)
                cout << dp[i][j] << " ";
            cout << endl;
        }
    }
    return dp[len-1][amount];
}

int main() {
    vector<long> c = {1,2,3};
    cout << getWays(4, c) << endl;
    cout << change(4, c) << endl;
}