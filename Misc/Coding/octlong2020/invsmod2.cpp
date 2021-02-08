/*
Author : Mohil Khare
Created On: 09 October 2020, 12:21
*/

#include <bits/stdc++.h>
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>>
#define vpll vector<pair<long long int, long long int>>
#define mp make_pair
#define pb push_back
#define endl "\n"
#define here std::cout << "here\n";
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

// program specific shorts (if any)
const ll mod = 2;

using namespace std;

int main() {
	fastIO;
	ll t; cin >> t;
	for(ll qq = 0; qq < t; qq++) {
		ll dp[2001] = {0}, temp[2001] = {0};
		ll n, k; cin >> n >> k;
		for(ll i = 1; i <= n; i++) {
			temp[0] = 1;
			for(ll j = 1; j <= k; j++) {
				ll keep = 0;
				if(j-i >= 0)
					keep = (dp[j] - dp[j-i] + mod) % mod;
				else keep = (dp[j] + mod) % mod;
				keep = (keep + mod) % mod;
				temp[j] = (temp[j-1] + keep) % mod;
			}
			for(ll j = 0; j <= k; j++)
				dp[j] = temp[j];
		}
		if(k > 0)
			cout << (dp[k] - dp[k-1] + mod) % mod << endl;
		else 
			cout << (dp[k] + mod) % mod << endl;
	}
	return 0;
}