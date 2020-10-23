//by mohilllll
#include <bits/stdc++.h>
#include <assert.h>
#include <iostream>
#define ll long long int
#define vll vector<long long int>
#define mod 1000000007
#define MAXN 1000000000
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
//gfg
ll findSubarraySum(ll arr[], ll n) { 
    unordered_map<ll, ll> prevSum; 
    ll res = 0; 
    ll currsum = 0; 
    for(ll i = 0; i < n; i++) { 
        currsum += arr[i];
        if (currsum == 1)  
            res++;
        if (prevSum.find(currsum - 1) != prevSum.end())  
            res += (prevSum[currsum - 1]); 
        prevSum[currsum]++; 
    } 
    return res; 
}
//gfg
int main() {
    fastIO;
    ll t; cin >> t;
    for(ll q = 0; q < t; q++) {
        ll n; cin >> n;
        ll totalSubarrays = n*(n+1)/2;
        ll a[n], check[n] = {0}, prod = 1, ctr = 0;
        for(ll i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] % 4 == 0)
                check[i] = 2;
            else if(a[i] % 2 == 0)
                check[i] = 1;
        }
        cout << totalSubarrays - findSubarraySum(check, n) << endl;
    }
    return 0;
}
