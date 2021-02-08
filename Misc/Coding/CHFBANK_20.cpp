//Codechef: mohilllll Codeforces: mohilllll Google: mohilkhare17
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
#define here std::cout << "here\n";
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

using namespace std;

int main() {
    fastIO;
    // time_t start, end;
    // start = clock();
    ll t; cin >> t;
    for(ll q = 0; q < t; q++) {
        sll keeper;
        vll series;
        series.pb(1);
        ll n, x = 2; cin >> n;
        keeper.insert(x);
        while(series.size() != n) {
            ll i;
            for(i = 0; i < series.size(); i++) {
                ll check = series[i] + x;
                if(keeper.find(check) != keeper.end())
                    break;
            }
            if(i == series.size()) {
                for(i = 0; i < series.size(); i++) {
                    ll check = series[i] + x;
                    keeper.insert(check); 
                }
                keeper.insert(x+x);
                series.pb(x);
            }
            x++;
        }
        ll summ = 0;
        for(ll i = 0; i < series.size(); i++) {
            summ += series[i];
            cout << series[i] << " ";
        }
        cout << endl << summ << endl;
    }
    // end = clock();
    // double timeTaken = (double)(end - start)/(double)(CLOCKS_PER_SEC);
    // cout << "Time taken: " << fixed << timeTaken << setprecision(7) << " seconds." << endl;
    return 0;
}