#include <bits/stdc++.h>
#define int long long int
#define MOD 100000007
#define here printf("here\n");
using namespace std;
using namespace std::chrono;
// auto start = high_resolution_clock::now();
// auto stop = high_resolution_clock::now();
// auto duration = duration_cast<microseconds>(stop - start);
// cout << "Time taken by function: " << duration.count() << " microseconds" << endl;

int main() {
    clock_t start, end;
    start = clock();
    //cout << "here" << endl;
    int t; cin >> t;
    for(int qq = 0; qq < t; qq++) {
        int n, k;
        cin >> n >> k;
        int l[k+1], d[k+1];
        for(int i = 1; i <= k; i++)
            cin >> l[i];
        //here;
        for(int i = 1; i <= k; i++)
            cin >> d[i];
        //here;
        int dp[k+1][n+1];
        //here;
        memset(dp, 0, sizeof(dp));
        //cout << "here" << endl;
        dp[0][0] = 1; // if you need to get 0 logs out of 0 types of bundles, only way is to DO NOTHING
        for(int i = 1; i <= k; i++) {
            for(int j = 0; j <= n; j++) {
                int rem = min(d[i], j/l[i]);
                for(int f = 0; f <= rem; f++)
                    dp[i][j] = (dp[i][j] + dp[i-1][j-l[i]*f]) % MOD;
            }
            //cout << "here" << endl;
        }
        cout << dp[k][n] << endl;
    }
    end = clock();
    /*auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by function: " << duration.count() << " microseconds" << endl;*/
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC); 
    cout << "Time taken by program is : " << fixed  
         << time_taken << setprecision(5); 
    cout << " sec " << endl; 
}