/*
Author : Mohil Khare
Created On: 17 September 2020, 00:05
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
    string s; cin >> s;
    sort(s.begin(), s.end());
    vector<string> ans;
    do {
        ans.pb(s);
    } while(next_permutation(s.begin(), s.end()));
    cout << ans.size() << endl;
    for(auto x : ans)
        cout << x << endl;
    return 0;
}