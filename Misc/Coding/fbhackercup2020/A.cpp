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

logic banao

    N Y
-------
Y|  Y Y
Y|  N Y

    N N
-------
Y|  Y N
Y|  N Y

O/I Y N N Y Y 
-------------
Y|  Y N N N N
Y|  Y Y N N N
Y|  N N Y Y N
N|  N N N Y N 
Y|  N N N Y Y

nai ho rha :P

*/

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll qq = 1; qq <= t; qq++) {
        cout << "Case #" << qq << ":" << endl;
        ll n; string a, b;
        cin >> n >> a >> b;
        char ans[n][n];
        for(ll i = 0; i < n; i++) {
            for(ll j = 0; j < n; j++) {
                if(i == j) ans[i][j] = 'Y';
                else if(b[i] == 'N' || a[j] == 'N')
                    ans[i][j] = 'N';
                else if(i < j) {
                    ll chalo = i+1;
                    bool ok = true;
                    while(ok && chalo <= j) {
                        if(chalo == j) {
                            ans[i][j] = (a[chalo] == 'Y') ? 'Y' : 'N';
                            break;
                        }
                        if(a[chalo] == 'N' || b[chalo] == 'N') {
                            ok = false;
                            break;
                        }
                        chalo++;
                    }
                    ans[i][j] = ok ? 'Y' : 'N';
                }
                else {
                    ll chalo = i-1;
                    bool ok = true;
                    while(ok && chalo >= j) {
                        if(chalo == j) {
                            ans[i][j] = (a[chalo] == 'Y') ? 'Y' : 'N';
                            break;
                        }
                        if(a[chalo] == 'N' || b[chalo] == 'N') {
                            ok = false;
                            break;
                        }
                        chalo--;
                    }
                    ans[i][j] = ok ? 'Y' : 'N';
                }
            } 
        }
        for(ll i = 0; i < n; i++) {
            for(ll j = 0; j < n; j++)
                cout << ans[i][j];
            cout << endl;
        }
    }   
    return 0;
}