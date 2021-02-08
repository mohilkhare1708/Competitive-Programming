//Codechef: mohilllll Codeforces: mohilkhare Google: mohilkhare17
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
// using namespace std::chrono;
// auto start = high_resolution_clock::now();
// auto stop = high_resolution_clock::now();
// auto duration = duration_cast<microseconds>(stop - start);
// cout << "Time taken by function: " << duration.count() << " microseconds" << endl;

bool possByOne(vll l1, vll l2) {
    vll incorrect;
    ll signMismatch = 0;
    bool possByAdd = true;
    bool possByMulti = false;
    ll checkR, checkD;
    for(ll i = 0; i < 3; i++) {
        if(l1[i] != l2[i]) {
            if(abs(l1[i]) > abs(l2[i]))
                possByMulti = false;
            incorrect.pb(i);
        }
        if((l1[i] > 0 && l2[i] < 0) || (l1[i] < 0 && l2[i] > 0))
            signMismatch++;
    }
    //for(auto i : incorrect) cout << i << " "; cout << endl; cout << signMismatch << endl;
    if(incorrect.size() == signMismatch || signMismatch == 0) {
        for(auto i : incorrect) {
            if(l1[i] != 0 && l2[i] % l1[i] == 0) {
                //here;
                checkR = l2[i] / l1[i];
                possByMulti = true;
            }
            if(l1[i] == 0) {
                possByMulti = false;
                break;
            }
        }
        //cout << possByAdd << " " << possByMulti << endl;
        if(possByMulti) {
            for(auto i : incorrect) {
                //cout << l1[i] << " " << l2[i] << " " << l2[i] / l1[i] << endl;
                if(l2[i] / l1[i] != checkR || l2[i] % l1[i] != 0) {
                    //here;
                    possByMulti = false;
                    break;
                }
            }
        }
        //cout << checkR << endl;
        //cout << possByAdd << " " << possByMulti << endl;
        for(auto i : incorrect)
            checkD = l2[i] - l1[i];
        for(auto i : incorrect) {
            if(l2[i] - l1[i] != checkD) {
                possByAdd = false;
                break;
            }
        }
        //cout << possByAdd << " " << possByMulti << endl;
        if(possByAdd || possByMulti)
            return true;
    }
    else {
        for(auto i : incorrect)
            checkD = l2[i] - l1[i];
        for(auto i : incorrect) {
            if(l2[i] - l1[i] != checkD) {
                possByAdd = false;
                break;
            }
        }
        if(possByAdd)
            return true;
    }
    return false;
}


int main() {
    fastIO;
    //for(ll i = 0; i < 12750; i++) {
        vll l1(3), l2(3);
        cin >> l1[0] >> l1[1] >> l1[2] >> l2[0] >> l2[1] >> l2[2];
        if(!possByOne(l1, l2)) {
            for(auto x : l1) cout << x << " "; cout << endl;
            for(auto x : l2) cout << x << " "; cout << endl << endl;
        }
        else {
            cout << "one" << endl;
        }
    //}
    return 0;
}