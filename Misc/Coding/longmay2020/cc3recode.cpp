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
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)

using namespace std;

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll q = 0; q < t; q++) {
        ll n, k, unSorted = 0, moves = 0, swappablePairs = 0; 
        cin >> n >> k;
        vll og(n+1); 
        map<ll, ll> eleLoc;
        map<ll, ll> swapPairs;
        for(ll i = 1; i <= n; i++) {
            cin >> og[i];
            eleLoc[og[i]] = i;
            if(og[i] != i) unSorted++;
            if(eleLoc[i] == og[i] && og[i] != i) {
                swappablePairs++;
                swapPairs.insert(eleLoc[i], og[i]);
                swapPairs.insert(og[i], eleLoc[i]);
            }
        }
        while(k >= moves || unSorted != 2) {
            vll row(3);
            for(ll i = 1; i <= n; i++) {
                if(og[i] != i) {
                    bool theySwappables = false;
                    if(swappablePairs == 1 && eleLoc[i] == og[i])
                        continue;
                    row[2] = i;
                    if(swapPairs.find(row[2]) != swappablePairs.end())
                        theySwappables = true;
                    if(theySwappables) {
                        row[1] = swappablePairs[eleLoc[row[2]]];
                        swappablePairs.erase(og[row[2]]);
                        swappablePairs.erase(eleLoc[row[2]]);
                        swappablePairs--;
                    }
                    else if(eleLoc[i] == i) {}

                }
            }
        }
    }
    return 0;
}