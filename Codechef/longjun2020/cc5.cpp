//Codechef: mohilllll Codeforces: mohilkhare Google: mohilkhare17
//headers
#include <bits/stdc++.h>
#include <assert.h>
//shorts
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>
#define vpll vector<pair<long long int, long long int>>
#define sll set<long long int>
#define mp make_pair
#define pb push_back
#define here std::cout << "here\n";
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
using namespace std;

ll ctr = 0;

void liesOnEven(ll n) {
    char resp1, resp2;
    ll lo = 2, hi = n;
    while(resp1 != 'E' || hi >= lo) {
        //cout << lo << " " << hi << endl;
        ll mid = (hi + lo)/2;
        cout << mid << endl;
        cin >> resp1;
        ctr++;
        if(resp1 == 'E') {
            //cout << ctr << endl;
            exit(0);
        }
        cout << mid << endl;
        cin >> resp2;
        ctr++;
        if(resp1 == 'G')
            lo = mid + 1;
        else if(resp1 == 'L')
            hi = mid - 1;
    }
}

void liesOnOdd(ll n) {
    char resp1, resp2;
    ll lo = 2, hi = n;
    while(resp1 != 'E' || hi >= lo) {
        //cout << lo << " " << hi << endl;
        ll mid = (hi + lo)/2;
        cout << mid << endl;
        cin >> resp1;
        ctr++;
        if(resp1 == 'E') {
            //cout << ctr << endl;
            exit(0);
        }
        cout << mid << endl;
        cin >> resp2;
        ctr++;
        if(resp2 == 'G') {
            lo = mid + 1;
        }
        else if(resp2 == 'L') {
            hi = mid - 1;
        }
    }
}

int main() {
    fastIO;
    ll n; cin >> n;
    char resp1 = '0', resp2 = '0', ele;
    bool loo = false, loe = false;
    vector<char> resps;
    for(ll i = 0; i < 10; i++) {
        cout << "1" << endl;
        cin >> ele;
        if(ele == 'E')
            exit(0);
        else if(ele == 'L') {
            if((i+1) % 2 == 0)
                liesOnEven(n);
            else 
                liesOnOdd(n);
            break;
        }
        //resps.pb(ele);
    }
    // for(ll i = 0; i < resps.size(); i++) {
    //     if(resps[i] == 'L') {
    //         if((i+1) % 2 == 0)
    //             liesOnEven(n);
    //         else 
    //             liesOnOdd(n);
    //         break;
    //     }
    // }
    /*while(resp1 == resp2) {
        cout << "1" << endl;
        cin >> resp1;
        ctr++;
        if(resp1 == 'E')
            exit(0);
        else if(resp1 == 'L') {
            loo = true;
            break;
        }
        else {
            cout << "1" << endl;
            cin >> resp2;
            ctr++;
            if(resp2 == 'L') {
                loe = true;
                break;
            }
        }
    }
    if(loe) 
        liesOnEven(n);
    if(loo)
        liesOnOdd(n);*/
    return 0;
}