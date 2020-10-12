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
//trio is made in this fashion: LAST MIDDLE FIRST

int main() {
    fastIO;
    ll t;
    fstream op;
    op.open("myop.txt", ios::out);
    fstream in;
    in.open("newtc.txt", ios::in);
    fstream masterOut;
    masterOut.open("out.txt", ios::in);
    fstream wrongs;
    wrongs.open("wrongs.txt", ios::out);
    in >> t;
    ll correctCtr = 0, inCorrectCtr = 0;
    for(ll q = 0; q < t; q++) {
        ll n, k, ele; in >> n >> k;
        vll og(n+1);
        vpll ogEleIndPair;
        vll unTouched(n+1);
        map<ll, ll> keeper;
        // vector<bool> ignoreOnce(n+1);
        ll badPairs = 0;
        og[0] = -1;
        ll unSorted = n;
        for(ll i = 1; i <= n; i++) {
            in >> og[i];
            unTouched[i] = og[i];
            keeper[og[i]] = i;
            if(i == og[i]) unSorted--;
        }
        ll moves = 0;
        vector<vector<ll>> ans;
        bool done = false;
        while(moves != k || unSorted != 2) {
            vll move(3);
            vll row(3);
            for(ll i = 1; i <= n; i++) {
                if(i != og[i]) {
                    move[0] = i; // the one to be corrected (FIXED)
                    move[1] = keeper[move[0]]; // req ele found at (FIXED)
                    move[2] = og[move[0]]; // current ele (MAYBE)
                    // swappable?
                    // give next bubble
                    if(og[move[2]] == move[0]) {
                        for(ll p = 1; p <= n; p++) {
                            if(og[p] != p && move[2] != p && og[move[2]] != p) {
                                if(p != move[0] && p != move[1] && keeper[p] == og[p]) {
                                    // keeper[p] == og[p] means see the next bubble
                                    move[2] = p;
                                    break;
                                }
                            }
                        }
                    }
                    // cout << move[0] << " " << move[1] << " " << move[2] << endl;
                    // even after moving problem then skip!
                    if(og[move[2]] == move[0])
                        continue;
                    row[0] = move[0];
                    row[1] = move[2];
                    row[2] = move[1];
                    ans.pb(row);
                    ll temp0 = og[move[0]], temp1 = og[move[1]],  temp2 = og[move[2]];
                    // making changes in map
                    keeper[temp2] = move[1];
                    keeper[temp0] = move[2];
                    keeper[i] = move[0];
                    // making changes to the og
                    og[move[0]] = i; if(og[move[0]] == move[0]) unSorted--;
                    og[move[1]] = temp2; if(og[move[1]] == move[1]) unSorted--;
                    og[move[2]] = temp0; if(og[move[2]] == move[2]) unSorted--;
                    // cout << keeper[temp0] << " " << keeper[temp1] << " " << keeper[temp2] << endl;
                    moves++;
                }
                if(unSorted == 0 || unSorted == 2 || moves > k) {
                    done = true;
                    break;
                }
            }
            if(done)
                break;
        }
        //cout << "out" << endl;
        ll verdict; masterOut >> verdict;
        if((moves == 0 && unSorted != 0) || unSorted == 2) {
            if(verdict == -1) 
                correctCtr++;
            else {
                inCorrectCtr++;
                wrongs << n << " " << k << endl;
                for(ll i = 1; i < unTouched.size(); i++) wrongs << unTouched[i] << " ";
                wrongs << endl;
                wrongs << "YourAns: -1" << " CorrectAns" << verdict << endl;
            }
            op << "-1" << endl;
        }
        else {
            op << ans.size() << endl;
            if(ans.size() == verdict)
                correctCtr++;
            else {
                inCorrectCtr++;
                wrongs << n << " " << k << endl;
                for(ll i = 1; i < unTouched.size(); i++) wrongs << unTouched[i] << " ";
                wrongs << endl;
                wrongs << "YourAns: " << ans.size() << " CorrectAns" << verdict << endl;
            }
            /*
            for(ll i = 0; i < ans.size(); i++) {
                vll temp = ans[i];
                for(ll j = 0; j < 3; j++)
                    cout << temp[j] << " ";
                cout << endl;
            }*/
        }
    }   
    cout << "correct: " << correctCtr << "\nincorrect: " << inCorrectCtr; 
    return 0;
}