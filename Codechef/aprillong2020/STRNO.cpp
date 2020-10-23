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
ll factorize(ll n) { 
    ll count = 0; 
    while (!(n % 2)) { 
        n >>= 1;
        count++; 
    }  
    for (long long i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) { 
            count++; 
            n = n / i; 
        } 
    } 
    if (n > 2) 
        count++;
    return count;
} 
//gfg
int main() {
    fastIO;
    ll t; cin >> t;
    for(ll q = 0; q < t; q++) {
        ll x, k; cin >> x >> k;
        if(factorize(x) >= k)
            cout << "1" << endl;
        else 
            cout << "0" << endl;
    }
    return 0;
}