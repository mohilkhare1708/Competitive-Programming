//Codechef: mohilllll Codeforces: mohilllll Google: mohilkhare17
//headers
#include <bits/stdc++.h>
#include <assert.h>
//shorts
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>>
#define vpll vector<pair<long long int, long long int>>
#define sll set<long long int>
#define mp make_pair
#define pb push_back
#define endl "\n"
#define here std::cout << "here\n";
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)
 
using namespace std;
 
int main() {
    fastIO;
    ll n; cin >> n;
    while(n != 1) {
        cout << n << " ";
        if(n % 2 == 0)
            n /= 2;
        else {
            n *= 3;
            n++;
        }
    }
    cout << n << endl;
    return 0;
}