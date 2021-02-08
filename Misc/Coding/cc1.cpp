//Codechef: mohilllll Codeforces: mohilllll Google: mohilkhare17
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
#define here std::cout << "here\n";
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)

using namespace std;

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll q = 0; q < t; q++) {
        string a, b; cin >> a >> b;
        ll keeper[26] = {0};
        vector<char> order;
        for(ll i = 0; i < a.length(); i++) {
            keeper[a[i] - 'A']++;
            order.pb(a[i]);
        }
        for(ll i = 0; i < b.length(); i++)
            keeper[b[i] - 'A'] = 0;
        for(ll i = 0; i < order.size(); i++) {
            if(keeper[order[i] - 'A'] != 0)
                cout << order[i];
        }
        cout << endl;
    }
    return 0;
}