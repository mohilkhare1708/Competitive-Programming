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

using namespace std;

/*
1
- 1
2
No
3
No
4
- 3 1 4 2
5
- 4 2 5 1 3
6 
- 5 3 1 6 4 2
7
- 7 5 3 1 6 4 2

increasing even then increasing odd or vice versa
*/


int main() {
    fastIO;
    ll n; cin >> n;
    if(n == 1) cout << n;
    else {
        if(n <= 3)
            cout << "NO SOLUTION" << endl;
        else {
            for(ll i = 2; i <= n; i+=2)
                cout << i << " ";
            for(ll i = 1; i <= n; i+=2)
                cout << i << " ";
        }
    }
    return 0;
}