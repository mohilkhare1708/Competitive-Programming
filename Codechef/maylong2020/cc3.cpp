//Codechef: mohilllll Codeforces: mohilkhare Google: mohilkhare17
//headers
#include <bits/stdc++.h>
#include <assert.h>
#include <fstream>
//shorts
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>>
#define vpll vector<pair<long long int, long long int>>
#define sll set<long long int>
#define mp make_pair
#define pb push_back
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
using namespace std;
//program specific shorts (if any)
//trio is made in this fashion: LocOfEle IndexFoundAt CorrectingIndex

bool isSorted(vll a) {
    for(ll i = 1; i <= a.size()-1; i++)
        if(i != a[i])
            return false;
    return true;
}

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll q = 0; q < t; q++) {
        ll n, k, ele; cin >> n >> k;
        vll og(n+1);
        map<ll, ll> keeper;
        og[0] = -1;
        ll unSorted = n;
        for(ll i = 1; i <= n; i++) {
            cin >> og[i];
            keeper[og[i]] = i;
            if(i == og[i]) unSorted--;
        }
        ll moves = 0;
        vvll ans;
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
        if(!isSorted(og) || (moves == 0 && unSorted != 0) || unSorted == 2 || ans.size() > k) {
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