//Codechef: mohilllll Codeforces: mohilllll Google: mohilkhare17
#include <bits/stdc++.h>
//shorts
#define ll long long int 
#define vll vector<long long int>
#define vvll vector<vector<long long int>>
#define vpll vector<pair<long long int, long long int>>
#define mp make_pair
#define pb push_back
#define endl "\n"
#define here std::cout << "here\n";
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

//program specific shorts (if any)
#define mod 1e9+7
#define MBITS 32

using namespace std;

ll maxSubarrayXOR(ll set[], ll n) { 
    ll index = 0; 
    for (int i = MBITS-1; i >= 0; i--) {
        int maxInd = index; 
        ll maxEle = LLONG_MIN; 
        for (int j = index; j < n; j++) { 
            if ((set[j] & (1 << i)) != 0 && set[j] > maxEle) 
                maxEle = set[j], maxInd = j; 
        } 
        if (maxEle == LLONG_MIN) 
        continue; 
        swap(set[index], set[maxInd]); 
        maxInd = index; 
        for (int j=0; j<n; j++) 
            if (j != maxInd && (set[j] & (1 << i)) != 0) 
                set[j] = set[j] ^ set[maxInd]; 
        index++; 
    }  
    int res = 0; 
    for (int i = 0; i < n; i++) 
        res ^= set[i]; 
    return res; 
} 

int main() {
    fastIO;
    ll n; cin >> n;
    ll a[n]; for(ll i = 0; i < n; i++) cin >> a[i];
    cout << maxSubarrayXOR(a, n) << endl;
    return 0;
}