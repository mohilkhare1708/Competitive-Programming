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
#define MAX 500
using namespace std;

vll series;
vll sum;

void precompute() {
    sll keeper;
    series.pb(1);
    ll x = 2;
    keeper.insert(x);
    while(series.size() != MAX) {
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
        sum.pb(summ);
    }
    // cout << "{";
    // for(auto x : series) cout << x << ", "; cout << "}" << endl;
    // cout << "{";
    // for(auto x : sum) cout << x << ", "; cout << "}" << endl;
}

int main() {
    fastIO;
    // time_t start, end;
    // start = clock();
    precompute();
    ll t; cin >> t;
    for(ll q = 0; q < t; q++) {
        ll n; cin >> n;
        for(ll i = 0; i < n; i++)
            cout << series[i] << " ";
        cout << endl << sum[n-1] << endl;
    }
    // end = clock();
    // double timeTaken = (double)(end - start)/(double)(CLOCKS_PER_SEC);
    // cout << "Time taken: " << fixed << timeTaken << setprecision(7) << " seconds." << endl;
    return 0;
}