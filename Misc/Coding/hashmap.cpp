/*
Author : Mohil Khare
Created On: 29 September 2020, 19:01
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
    map<int, int> hm;
    hm[0] = 15;
    hm[2] = 30;
    cout << hm[0] << endl;
    for(auto x : hm) {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}