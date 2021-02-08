/*
Author : Mohil Khare
Created On: 29 September 2020, 18:23
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
const ll mod = 1000000007;

using namespace std;

int main() {
    fastIO;
    ll a, b; cin >> a >> b;
    cout << (1<<(ll)(log2(a | b))); // basically 2^(log2(a | b)) :: | == bitwise OR
}