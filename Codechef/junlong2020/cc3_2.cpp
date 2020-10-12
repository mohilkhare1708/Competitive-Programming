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

// bool possByOne(vll l1, vll l2) {
//     vll incorrect;
//     ll signMismatch = 0;
//     bool possByAdd = true;
//     bool possByMulti = false;
//     ll checkR, checkD;
//     for(ll i = 0; i < 3; i++) {
//         if(l1[i] != l2[i]) {
//             if(abs(l1[i]) > abs(l2[i]))
//                 possByMulti = false;
//             incorrect.pb(i);
//         }
//         if((l1[i] > 0 && l2[i] < 0) || (l1[i] < 0 && l2[i] > 0))
//             signMismatch++;
//     }
//     //for(auto i : incorrect) cout << i << " "; cout << endl; cout << signMismatch << endl;
//     if(incorrect.size() == signMismatch || signMismatch == 0) {
//         for(auto i : incorrect) {
//             if(l1[i] != 0 && l2[i] % l1[i] == 0) {
//                 checkR = l2[i] / l1[i];
//                 possByMulti = true;
//             }
//             if(l1[i] == 0) {
//                 possByMulti = false;
//                 break;
//             }
//         }
//         if(possByMulti) {
//             for(auto i : incorrect) {
//                 if(l2[i] / l1[i] != checkR) {
//                     possByMulti = false;
//                     break;
//                 }
//             }
//         }
//         for(auto i : incorrect)
//             checkD = l2[i] - l1[i];
//         for(auto i : incorrect) {
//             if(l2[i] - l1[i] != checkD) {
//                 possByAdd = false;
//                 break;
//             }
//         }
//         if(possByAdd || possByMulti)
//             return true;
//     }
//     else {
//         for(auto i : incorrect)
//             checkD = l2[i] - l1[i];
//         for(auto i : incorrect) {
//             if(l2[i] - l1[i] != checkD) {
//                 possByAdd = false;
//                 break;
//             }
//         }
//         if(possByAdd)
//             return true;
//     }
//     return false;
// }

ll solve(vll l1, vll l2) {
    if(l1[0] == l2[0] && l1[1] == l2[1] && l1[2] == l2[2])
        return 0;
    if(possByOne(l1, l2))
        return 1;
    //here;
    if(l1[0] == l2[0] || l1[1] == l2[1] || l1[2] == l2[2])
        return 2;
    ll x = l1[0], y = l1[1], z = l1[2];
    if(l1[2] != 0 && l2[2] % l1[2] == 0 && l2[2] != l1[2]) {
        ll temp = l2[2] / l1[2];
        vll q = {x, y, z*temp};
        if(possByOne(q, l2))
            return 2;
        vll p = {x, y*temp, z*temp};
        if(possByOne(p, l2))
            return 2;
        vll n = {x*temp, y*temp, z*temp};
        if(possByOne(n, l2))
            return 2;
    }
    if(l1[0] != l1[1]) {
        ll temp = (l2[0] - l2[1]) / (l1[0] - l1[1]);
        ll x = l1[0], y = l1[1], z = l1[2];
        vll n = {x*temp, y*temp, z*temp};
        if(possByOne(n, l2))
            return 2;
        vll p = {x*temp, y*temp, z};
        if(possByOne(p, l2))
            return 2;
    }
    ll temp = l2[2] - l1[2];
    vll n = {x+temp, y+temp, z+temp};
    vll p = {x, y+temp, z+temp};
    vll q = {x, y, z+temp};
    if(possByOne(n, l2) || possByOne(p, l2) || possByOne(q, l2))
        return 2;
    return 3;
}

int main() {
    fastIO;
    // fstream in;
    // in.open("in3.txt", ios::in);
    // fstream an;
    // an.open("out3.txt", ios::in);
    // fstream wrongs;
    // wrongs.open("wrongs.txt", ios::out);
    ll t; cin >> t;
    // ll t; in >> t;
    for(ll q = 0; q < t; q++) {
        ll l1[3], l2[3];
        cin >> l1[0] >> l1[1] >> l1[2] >> l2[0] >> l2[1] >> l2[2];
        // in >> l1[0] >> l1[1] >> l1[2] >> l2[0] >> l2[1] >> l2[2];
        vll in(3); in[0] = 0; in[1] = 1; in[2] = 2;
        vvll permul1, permul2;
        do {
            vll x = {l1[in[0]], l1[in[1]], l1[in[2]]};
            permul1.pb(x);
            vll y = {l2[in[0]], l2[in[1]], l2[in[2]]};
            permul2.pb(y);
        } while(next_permutation(in.begin(), in.end()));
        vll ans;
        for(ll i = 0; i < permul1.size(); i++)
            ans.pb(solve(permul1[i], permul2[i]));
        sort(ans.begin(), ans.end());
        // ll verdict;
        // an >> verdict;
        // if(verdict != ans[0]) {
        //     //for(auto x : in) cout << x << " "; cout << endl;
        //     wrongs << l1[0] << " " << l1[1] << " " << l1[2] << endl;
        //     wrongs << l2[0] << " " << l2[1] << " " << l2[2] << endl;
        //     wrongs << "Correct: " << verdict << " " << "YourAns: " << ans[0] << endl << endl;
        // }
        cout << ans[0] << endl;
    }
    return 0;
}