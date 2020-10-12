//Codechef: mohilllll Codeforces: mohilllll Google: mohilkhare17
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
#define mod 998244353
using namespace std;

// attributed to geeksforgeeks starts

ll modInverse(ll a, ll m) { 
    ll m0 = m; 
    ll y = 0, x = 1; 
    if (m == 1) 
        return 0; 
    while (a > 1) { 
        ll q = a / m; 
        ll t = m; 
        m = a % m, a = t; 
        t = y; 
        y = x - q * y; 
        x = t; 
    } 
    if (x < 0) 
       x += m0; 
    return x; 
} 

string longestRepeatedSubstring(string str) { 
    int n = str.length(); 
    int LCSRe[n+1][n+1]; 
    memset(LCSRe, 0, sizeof(LCSRe)); 
    string res;
    int res_length  = 0;
    int i, index = 0; 
    for (i=1; i<=n; i++) { 
        for (int j=i+1; j<=n; j++) { 
            if (str[i-1] == str[j-1] && LCSRe[i-1][j-1] < (j - i)) { 
                LCSRe[i][j] = LCSRe[i-1][j-1] + 1; 
                if (LCSRe[i][j] > res_length) { 
                    res_length = LCSRe[i][j]; 
                    index = max(i, index); 
                } 
            } 
            else
                LCSRe[i][j] = 0; 
        } 
    } 
    if (res_length > 0) 
        for (i = index - res_length + 1; i <= index; i++) 
            res.push_back(str[i-1]); 
    return res; 
} 

// attributed to geeksforgeeks ends

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll qq = 0; qq < t; qq++) {
        string s; cin >> s;
        ll n = s.length();
        ll q = n * (n+1)/2;
        ll w[26]; for(ll i = 0; i < 26; i++) cin >> w[i];
        map<string, ll> keeper, subswt, subsp;
        for(ll i = 0; i < n; i++) {
            for(ll j = 1; j <= n-i; j++)
                keeper[s.substr(i, j)]++;
        }
        for(auto x : keeper) {
            ll wt = 0;
            for(ll i = 0; i < x.first.length(); i++)
                wt += w[x.first[i] - 'a'];
            subswt[x.first] = wt;
        }
        // cout << "subswt" << endl;
        // for(auto x : subswt) cout << x.first << " " << x.second << endl;
        for(auto x : keeper) {
            // cout << "for " << x.first << endl;
            string store = x.first;
            string temp = x.first;
            vector<string> keep;
            keep.pb(store);
            subsp[store] += subswt[store];
            while(temp != "") {
                temp = longestRepeatedSubstring(temp);
                string tp = temp+temp;
                if(tp != store.substr(0, temp.length()*2))
                    break;
                if(temp != "") {
                    keep.pb(temp);
                    subsp[x.first] += subswt[temp];
                }
            }
            if(keep.size() == 1 && store.length() > 2) {
                // here;
                string tp = store.substr(0, store.length()-1);
                // cout << tp << endl;
                subsp[x.first] += subswt[tp];
            }
            // cout << x.first << " " << subsp[x.first] << endl;
            // for(auto x : keep) cout << x << " "; cout << endl;
            // if(keep.empty())
            //     subsp[store] += subswt[store.substr(0, store.length()-1)];
            else if(keep[1].length()*2 < x.first.length()) {
                // here;
                // cout << store.substr(0, keep[1].length()*2) << endl;
                subsp[x.first] += subswt[store.substr(0, keep[1].length()*2)];
            }
            // cout << x.first << " " << subsp[x.first] << endl;
        }
        ll p = 0;
        for(auto x : keeper)
            p += (x.second*subsp[x.first]);
        // for(auto x : keeper) {
        //     cout << x.first << " " << x.second << " " << subsp[x.first] << " " << subswt[x.first] << endl;
        // }
        cout << p << " " << q << endl;
        cout << (p%mod * modInverse(q, mod))%mod << endl;
    }
    return 0;
}








        // for(auto x : subsp) cout << x.first << " " << x.second << endl;
        // string temp = s;
        // vector<string> keep;
        // while(temp != "") {
        //     temp = longestRepeatedSubstring(temp);
        //     if(temp != "")
        //         keep.pb(temp);
        // }
        // for(auto x : keep) cout << x << " "; cout << endl;
        // string lrepsub = longestRepeatedSubstring(s);
        // cout << lrepsub << endl;
        // cout << "keeper" << endl;
        // for(auto x : keeper) cout << x.first << " " << x.second << endl;
        // cout << "subswt" << endl;
        // for(auto x : subswt) cout << x.first << " " << x.second << endl;
        // keep.pb(keep[0]+keep[0]);
        // if(keep[0].length()*2 != s.length())
        //     keep.pb(s);