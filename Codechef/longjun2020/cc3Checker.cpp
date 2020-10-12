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


ll doMod(ll x, ll y) {
    if(x == 0)
        return 0;
    if((abs(x) % abs(y) == 0) || (x > 0 && y > 0) || (x < 0 && y < 0))
        return x % y;
    if(x < 0 && y > 0)
        return ((x % y) + y);
    if(x > 0 && y < 0)
        return ((x % y) - y);
}

bool one(vll l1, vll l2) {
    //here;
    if((l2[0] - l1[0] == l2[1] - l1[1]) && (l2[1] - l1[1] == l2[2] - l1[2]))
        return true;
    //here;
    if(((l1[0] == l2[0]) && (l1[1] == l2[1])) || ((l1[1] == l2[1]) && (l1[2] == l2[2])) || ((l1[0] == l2[0]) && (l1[2] == l2[2])))
        return true;
    //here;
    if(l1[0] != 0 && l2[0] % l1[0] == 0 && (l1[1]*(l2[0] / l1[0]) == l2[1]) && (l1[2]*(l2[0] / l1[0]) == l2[2]))
        return true;
    //here;
    if(l1[0] == l2[0] && ((l2[2] - l1[2]) == (l2[1] - l1[1])))
        return true;
    //here;
    if(l1[1] == l2[1] && ((l2[0] - l1[0]) == (l2[2] - l1[2])))
        return true;
    //here;
    if(l1[2] == l2[2] && ((l2[0] - l1[0]) == (l2[1] - l1[1])))
        return true;
    //here;
    if(l1[0] == l2[0] && l1[1] != 0 && l2[1] % l1[1] == 0 && (l1[2] * (l2[1] / l1[1]) == l2[2]))
        return true;
    //here;
    if(l1[1] == l2[1] && l1[0] != 0 && l2[0] % l1[0] == 0 && (l1[2] * (l2[0] / l1[0]) == l2[2]))
        return true;
    //here;
    if(l1[2] == l2[2] && l1[1] != 0 && l2[1] % l1[1] == 0 && (l1[0] * (l2[1] / l1[1]) == l2[0]))
        return true;
    return false;
}

ll solve(vll l1, vll l2) {
    // for(auto x : l1) cout << x << " ";
    // for(auto x : l2) cout << x << " ";
    if(l1[0] == l2[0] && l1[1] == l2[1] && l1[2] == l2[2])
        return 0;
    if(one(l1, l2))
        return 1;
    //here;
    if(l1[0] == l2[0] || l1[1] == l2[1] || l1[2] == l2[2])
        return 2;
    if(l1[0] != l1[1]) {
        ll temp = (l2[0] - l2[1]) / (l1[0] - l1[1]);
        ll x = l1[0], y = l1[1], z = l1[2];
        vll n = {x*temp, y*temp, z*temp};
        //here;
        //cout << "hoo\n";
        if(one(n, l2))
            return 2;
        //cout << "hoo\n";
        vll p = {x*temp, y*temp, z};
        //here;
        if(one(p, l2))
            return 2;
    }
    ll x = l1[0], y = l1[1], z = l1[2];
    if(l1[2] != 0 && l2[2] % l1[2] == 0 && l2[2] != l1[2]) {
        ll temp = l2[2] / l1[2];
        vll n = {x*temp, y*temp, z*temp};
        //cout << "hoo\n";
        //here;
        if(one(n, l2))
            return 2;
        //cout << "hoo\n";
        vll p = {x, y*temp, z*temp};
        //here;
        if(one(p, l2))
            return 2;
        vll q = {x, y, z*temp};
        //here;
        if(one(q, l2))
            return 2;
    }
    ll temp = l2[2] - l1[2];
    vll n = {x+temp, y+temp, z+temp};
    vll p = {x, y+temp, z+temp};
    vll q = {x, y, z+temp};
    // cout << "hoo\n";
    // here;
    if(one(n, l2) || one(p, l2) || one(q, l2))
        return 2;
    return 3;
}

int main() {
    fastIO;
    fstream in;
    in.open("in3.txt", ios::in);
    fstream an;
    an.open("out3.txt", ios::in);
    fstream wrongs;
    wrongs.open("wrongs.txt", ios::out);
    //ll t; cin >> t;
    ll t; in >> t;
    for(ll q = 0; q < t; q++) {
        ll l1[3], l2[3];
        //cin >> l1[0] >> l1[1] >> l1[2] >> l2[0] >> l2[1] >> l2[2];
        in >> l1[0] >> l1[1] >> l1[2] >> l2[0] >> l2[1] >> l2[2];
        vll in(3); in[0] = 0; in[1] = 1; in[2] = 2;
        vvll permul1, permul2;
        do {
            vll x = {l1[in[0]], l1[in[1]], l1[in[2]]};
            permul1.pb(x);
            vll y = {l2[in[0]], l2[in[1]], l2[in[2]]};
            permul2.pb(y);
        } while(next_permutation(in.begin(), in.end()));

        vll ans;
        for(ll i = 0; i < permul1.size(); i++) {
            //cout << "." << endl;
            ans.pb(solve(permul1[i], permul2[i]));
        }
        sort(ans.begin(), ans.end());
        //for(auto x : ans) cout << x << " "; cout << endl;
        ll verdict;
        an >> verdict;
        if(verdict != ans[0]) {
            //for(auto x : in) cout << x << " "; cout << endl;
            wrongs << l1[0] << " " << l1[1] << " " << l1[2] << endl;
            wrongs << l2[0] << " " << l2[1] << " " << l2[2] << endl;
            wrongs << "Correct: " << verdict << " " << "YourAns: " << ans[0] << endl << endl;
        }

        //cout << ans[0] << endl;
    }
    return 0;
}