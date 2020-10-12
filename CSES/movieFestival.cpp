/*
Author : Mohil Khare
Created On: 06 October 2020, 10:18
*/

#include <bits/stdc++.h>
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>>
#define vpll vector<pair<long long int, long long int>>
#define mp make_pair
#define pb push_back
#define endl "\n"
#define here std::cout << "here\n";
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

// program specific shorts (if any)
const ll mod = 1000000007;

using namespace std;

int main() {
    fastIO;
    ll t, st, en, x = 0; cin >> t;
    vpll keep(t);
    for(ll qq = 0; qq < t; qq++) {
        cin >> st >> en;
        keep[qq] = mp(en, st);
    }
    stable_sort(keep.begin(), keep.end());
    ll check = 0, ans = 0;
    for(auto a : keep) {
        //cout << a.first << " " << a.second << " " << check << " " << ans << endl;
        if(a.second >= check) {
            ans++;
            check = a.first;
        }
    }
    cout << ans << endl;
    return 0;
}