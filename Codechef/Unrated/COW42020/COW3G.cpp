//Codechef: mohilllll Codeforces: mohilkhare Google: mohilkhare17
//headers
#include <bits/stdc++.h>
#include <assert.h>
//shorts
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>
#define sll stack<long long int>
#define pb push_back
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)
//
//namespaces
using namespace std;

int main() {
    fastIO;
    ll t; cin >> t;
    ll a[t];
    for(ll q = 0; q < t; q++) cin >> a[q];
    ll maxlcm = -1;
    sort(a, a+t, greater<ll>());
    for(ll i = 0; i < t; i++) {
        for(ll j = 0; j < t; j++) {
            if(i != j && a[i]*a[j] > maxlcm) {
                ll lcm = a[i]*a[j]/__gcd(a[i], a[j]);
                maxlcm = max(maxlcm, lcm);
            }
            else 
                break;
        }
    }
    cout << maxlcm;
    return 0;
}