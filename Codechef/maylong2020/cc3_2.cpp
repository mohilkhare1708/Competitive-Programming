//Codechef: mohilllll Codeforces: mohilkhare Google: mohilkhare17
//headers
#include <bits/stdc++.h>
#include <assert.h>
#include <fstream>
//shorts
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>
#define vpll vector<pair<long long int, long long int>>
#define sll set<long long int>
#define mp make_pair
#define pb push_back
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
using namespace std;
//program specific shorts (if any)
//trio is made in this fashion: LocOfEle IndexFoundAt CorrectingIndex

int main() {
    fastIO;
    ll t; cin >> t;
    ll correctCtr = 0, inCorrectCtr = 0;
    for(ll q = 0; q < t; q++) {
        ll n, k, ele; cin >> n >> k;
        vll og(n+1);
        ll badPairs = 0;
        vpll ogEleIndPair;
        vll unTouched(n+1);
        vector<bool> ignoreOnce(n+1);
        map<ll, ll> keeper;
        og[0] = -1;
        ll unSorted = n;
        for(ll i = 1; i <= n; i++) {
            cin >> og[i];
            unTouched[i] = og[i];
            ogEleIndPair.pb(mp(og[i], i));
            ignoreOnce[i] = false;
            keeper[og[i]] = i;
            if(i == og[i]) unSorted--;
        }
        ll moves = 0;
        vector<vector<ll>> ans;
        for(ll i = 1; i <=n; i++) if(og[i] == keeper[i] && i != og[i]) badPairs++;
        cout << badPairs << endl;
        cout << unSorted << endl;
        bool done = false;
        while(moves != k || unSorted != 2) {
            vll move(3);
            for(ll i = 1; i <= n; i++) {
                if(i != og[i]) {
                    // checking for conditions like 8 is in 2's place AND vice versa
                    cout << og[i] << " " << keeper[i] << endl << endl;
                    if(og[i] == keeper[i]) {
                        if(badPairs < unSorted)
                            continue;
                    }
                    // if(og[i] == keeper[i]) {
                    //     if(!ignoreOnce[i]) {
                    //         ignoreOnce[i] = true;
                    //         continue;
                    //     }
                    // }
                    // 3rd ele is the one being corrected
                    move[2] = i; // 1
                    // 2nd ele is location where ith ele (when sorted) is
                    if(keeper[i] == i) {
                        for(ll p = og.size()-1; p >= 1; p--) {
                            if(og[p] != p && p != i && keeper[p] == og[p]) {
                                move[1] = p;
                                break;
                            }
                        }
                    }
                    else
                        move[1] = keeper[i]; // 7
                    // 1st ele is location where move[1]th ele (when sorted is)
                    // cout << keeper[move[1]] << " " << i << " " << move[1] << endl << endl;
                    if(keeper[move[1]] == i || keeper[move[1]] == move[1]) {
                        for(ll p = og.size()-1; p >= 1; p--) {
                            // cout << og[p] << " " << p << endl;
                            if(og[p] != p && p != i && p != move[1]) {
                                move[0] = p;
                                break;
                            }
                        }
                        //cout << endl;
                    }
                    else
                        move[0] = keeper[move[1]];
                    // cout << move[0] << " " << move[1] << " " << move[2] << endl;
                    if(move[0] == move[1] || move[1] == move[2] || move[0] == move[2]) {
                        done = true;
                        unSorted = 2;
                        break;
                    }
                    ans.pb(move);
                    // making changes to the og
                    ll temp0 = og[move[0]], temp1 = og[move[1]],  temp2 = og[move[2]];
                    og[move[0]] = temp2; if(og[move[0]] == move[0]) unSorted--;
                    og[move[1]] = temp0; if(og[move[1]] == move[1]) unSorted--;
                    og[move[2]] = temp1; if(og[move[2]] == move[2]) unSorted--;
                    // making changes in map
                    keeper[temp2] = move[0];
                    keeper[temp0] = move[1];
                    keeper[temp1] = move[2];
                    moves++;
                }
                if(unSorted == 0 || unSorted == 2) {
                    done = true;
                    break;
                }
            }
            if(done)
                break;
        }
        //cout << "out" << endl;
        if((moves == 0 && unSorted != 0) || unSorted == 2) {
            cout << "-1" << endl;
        }
        else {
            cout << ans.size() << endl;
            for(ll i = 0; i < ans.size(); i++) {
                vll temp = ans[i];
                for(ll j = 0; j < 3; j++)
                    cout << temp[j] << " ";
                cout << endl;
            }
        }
    }   
    //cout << "correct: " << correctCtr << "\nincorrect: " << inCorrectCtr; 
    return 0;
}