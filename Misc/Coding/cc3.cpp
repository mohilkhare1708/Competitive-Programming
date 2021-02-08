//Codechef: mohilllll Codeforces: mohilkhare Google: mohilkhare17
//headers
#include <bits/stdc++.h>
#include <assert.h>
//shorts
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>>
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
// using namespace std::chrono;
// auto start = high_resolution_clock::now();
// auto stop = high_resolution_clock::now();
// auto duration = duration_cast<microseconds>(stop - start);
// cout << "Time taken by function: " << duration.count() << " microseconds" << endl;

string update(vll row, string s1, char c) {
    char a[s1.length()];
    string ans = "";
    for(auto x : row)
        a[x] = c;
    for(ll i = 0; i < s1.length(); i++) {
        if(a[i] != c)
            a[i] = s1[i];
        ans += a[i];
    }
    return ans;
}

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll q = 0; q < t; q++) {
        ll n; cin >> n;
        string s1, s2; cin >> s1 >> s2;
        here;
        set<char> ss1;
        bool ok = true;
        here;
        for(ll i = 0; i < n; i++) ss1.insert(s1[i]);
        here;
        map<char, vll> keeper;
        map<char, vll> charKeep;
        for(ll i = 0; i < n; i++) {
            cout << s1[i] << " " << s2[i] << endl;
            if(ss1.find(s2[i]) == ss1.end() || s1[i] < s2[i]) {
                here;
                ok = false;
                break;
            }
            if(s1[i] != s2[i]) {
                if(keeper.find(s2[i]) == keeper.end()) {
                    vll vec; vec.pb(i);
                    keeper[s2[i]] = vec;
                }
                else 
                    keeper[s2[i]].pb(i);
            }
            else {
                if(charKeep.find(s1[i]) == charKeep.end()) {
                    vll vec; vec.pb(i);
                    charKeep[s1[i]] = vec;
                }
                else 
                    charKeep[s1[i]].pb(i);
            }
        }
        if(!ok) {
            cout << "-1" << endl;
            continue;
        }
        vvll ans;
        for(ll i = 0; i < n; i++) {
            if(s1[i] != s2[i]) {
                vll row = keeper[s2[i]];
                row.pb(charKeep[s1[i]][0]);
                s1 = update(row, s1, s2[i]);
                ans.pb(row);
            }
        }
        cout << ans.size() << endl;
        for(auto x : ans) {
            cout << x.size() << " ";
            for(auto y : x)
                cout << y << " ";
            cout << endl;
        }
    }
    return 0;
}