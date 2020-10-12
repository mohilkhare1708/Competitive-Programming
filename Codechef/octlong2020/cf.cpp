#include <iostream>
#include <algorithm>
#define llong long long

using namespace std;

int n, k;

const int mod = 2;

int main() {
    int t; cin >> t;
    while(t--) {
    llong dp[10006] = {0}, tmp[10006] = {0};
    cin >> n >> k;
    for(int i=1; i<=n; ++i) {
        tmp[0] = 1;
        for(int j=1; j<=k; ++j) {
            llong val = (dp[j] - ((j - i >= 0) ? dp[j-i] : 0) + mod) % mod;
            tmp[j] = (tmp[j-1] + val) % mod;
        }
        for(int j=0; j<=k; ++j) dp[j] = tmp[j];
    }
    cout << (dp[k] - ((k > 0) ? dp[k-1] : 0) + mod) % mod << endl;
    }
    return 0;
}