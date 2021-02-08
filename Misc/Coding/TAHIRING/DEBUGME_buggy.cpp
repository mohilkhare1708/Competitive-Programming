#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define here cout << "here" << endl;
#define mod 1000000007

int main() {
    FIO;
    int t, n, k, i, j, x, cnt1, cnt2, tmp;
    string s;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        cin >> s;
        int disparity[n][n];
        int frequency[26] = {0};
        for(i = 0; i < n; i++) {
            for(j = i; j < n; j++) {
                here;
                frequency[s[i] - 'a']++;
                cnt1 = 0;
                cnt2 = 0;
                for (k = 0; k <= 25; k++) {
                    cnt1 = max(cnt1, frequency[x]);
                    if (frequency[k] > 0)
                        cnt2 = min(cnt2, frequency[k]);
                }
                for(k = 0; k <= 25; k++)
                    if(frequency[k] == cnt1)
                        break;
                disparity[i][j] = k;
                for (k = 0; k <= 25; k++)
                    if (frequency[k] == cnt2)
                        break;
                disparity[i][j] -= k;
            }
        }
        here;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++)
                cout << disparity[i][j] << " ";
            cout << endl;
        }
        int dp[k][n];
        for (i = 0; i < n; i++)
            dp[0][i] = disparity[0][i];
        for(i = 1; i < k; i++) {
            for (j = 0; j < n; j++) {
                dp[i][j] = dp[i - 1][j];
                for (x = 0; x < j; x++) {
                    dp[i][j] = min(dp[i][j], dp[i - 1][x] + disparity[x + 1][j]);
                }
            }
        }
        cout << dp[k - 1][n - 1] << "\n";
    }
    return 0;
}
