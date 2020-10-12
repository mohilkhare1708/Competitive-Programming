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
NO
2
NO
3
1,2 - 3 YES
4
1,4 - 2,3 YES
5
NO
6
NO
7
1,2,4,7 - 3,5,6 YES
8
1 2 3 4 5 6 7 8
1,3,6,8 - 2,4,5,7 YES

LMAO easy peasy lemon squeezy

11
1 2 3 4 5 6 7 8 9 10 11
2,4,8,11 - 1,3,5,6,10
1,2,4,8,10 - 3,5,6,11
*/

int main() {
    fastIO;
    ll n; cin >> n;
    if(n % 4 != 0 && n % 4 != 3)
        cout << "NO" << endl;
    else {
        bool keep[n+1];
        memset(keep, true, sizeof(keep));
        cout << "YES" << endl;
        vll one, two;
        ll half = n*(n+1)/4, reach = 0, x = n;
        // cout << half << endl;
        while(reach+x <= half) {
            reach += x;
            keep[x] = false;
            one.pb(x);
            x--;
        }
        if(reach < half) {
            one.pb(half-reach);
            keep[half-reach] = false;
            // x = 1;
            // while(reach+x <= half && keep[x]) {
            //     reach += x;
            //     keep[x] = false;
            //     one.pb(x);
            //     x++;
            // }
        }
        for(ll i = 1; i <= n; i++)
            if(keep[i])
                two.pb(i);
        cout << one.size() << endl;
        for(auto m : one) cout << m << " ";
        cout << endl << two.size() << endl;
        for(auto m : two) cout << m << " ";
    }
    return 0;
}