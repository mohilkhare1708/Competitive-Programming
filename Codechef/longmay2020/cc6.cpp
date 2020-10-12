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
using namespace std;
//program specific shorts (if any)

ll minSwaps(ll arr[], ll n) { 
    pair<ll, ll> arrPos[n]; 
    for (ll i = 0; i < n; i++) { 
        arrPos[i].first = arr[i]; 
        arrPos[i].second = i; 
    } 
    sort(arrPos, arrPos + n); 
    vector<bool> vis(n, false); 
    ll ans = 0; 
    for (ll i = 0; i < n; i++) { 
        if (vis[i] || arrPos[i].second == i) 
            continue; 
        ll cycle_size = 0; 
        ll j = i; 
        while (!vis[j]) { 
            vis[j] = 1; 
            j = arrPos[j].second; 
            cycle_size++; 
        }
        if (cycle_size > 0) 
            ans += (cycle_size - 1);
    } 
    return ans; 
} 

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll q = 0; q < t; q++) {
        ll n, m; cin >> n >> m;
        ll a[n+1]; 
        map<ll, ll> eleLoc;
        for(ll i = 1; i <= n; i++) { 
            cin >> a[i];
            eleLoc[a[i]] = i;
        }
        map<ll, ll> swappables;
        ll ele1, ele2;
        for(ll i = 0; i < m; i++) {
            cin >> ele1 >> ele2;
            swappables[ele1] = ele2;
            swappables[ele2] = ele1;
        }
        if(m == 0)
            cout << minSwaps(a, n) << endl;
        else {
            // initial check of swappable eles
            //cout << eleLoc[1] << " " << eleLoc[2] << endl;
            cout << endl << endl;
            ll moves = 0;
            for(ll i = 1; i <= n; i++) {
                if(a[i] != i) {
                    if(a[i] == eleLoc[i]) {
                        if(swappables[a[i]] == i)
                            moves--;
                        a[eleLoc[i]] = a[i];
                        eleLoc[a[i]] = a[i];
                        a[i] = i;
                        eleLoc[a[a[i]]] = a[i];
                        moves++;
                    }
                }
            } 
            for(ll i = 1; i <= n; i++) cout << a[i] << " "; cout << endl;
            while(true) {
                bool entered = false;
                for(ll i = 1; i <= n; i++) {
                    if(a[i] != i) {
                        if(swappables.find(a[i]) != swappables.end() && i == swappables[a[i]]) {
                            //cout << i << " " << a[swappables[a[i]]] << endl;
                            entered = true;
                            ll temp = a[i];
                            ll temp1 = eleLoc[swappables[a[i]]];
                            a[temp1] = temp;
                            eleLoc[a[i]] = i;
                            eleLoc[a[temp1]] = temp;
                            a[i] = i;
                            swappables.erase(a[i]);
                            swappables.erase(a[temp1]);
                        }
                    }
                }
                if(!entered) break;
            }
            ll beforeFinal[n];
            for(ll i = 1; i <= n; i++) cout << a[i] << " "; cout << endl;
            for(ll i = 1, x = 0; i <= n; i++, x++)
                beforeFinal[x] = a[i];
            //for(ll i = 0; i < n; i++) cout << beforeFinal[i] << " "; cout << endl;
            moves += minSwaps(beforeFinal, n);
            cout << moves << endl;
            //cout << eleLoc[1] << " " << eleLoc[2] << endl;
        }
    }
    return 0;
}