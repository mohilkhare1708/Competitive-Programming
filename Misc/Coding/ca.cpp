// @mohilkhare17
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

int main() {
    ll t; cin >> t;
    for(ll qq = 0; qq < t; qq++) {
        ll a, b, c; cin >> a >> b >> c;
        ll gap1 = b-a, gap2 = c-b;
        ll minGap = min(gap1, gap2);
        ll maxGap = max(gap1, gap2);
        if(minGap == maxGap)
            cout << minGap - 1 << endl;
        else if(minGap == 1)
            cout << maxGap - 1 << endl;
        else 
            cout << maxGap - minGap + 1 << endl;
    }
    return 0;
}