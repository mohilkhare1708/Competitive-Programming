//Codechef: mohilllll Codeforces: mohilkhare Google: mohilkhare17
//headers
#include <bits/stdc++.h>
#include <assert.h>
//shorts
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>
#define sll stack<long long int>
#define pb push_back
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)

//namespaces
using namespace std;

/*
no(rings) on i-th day = R1*2^i + R2*2^(i/2) + R3*2^(i/3) + R4*2^(i/4) + R5*2^(i/5) + R6*2^(i/6)

all floor vals of exponents

ans received is modulo 2^63 (vvv imp)

for sub-task 1: my initial approach, make 6 equations as I am allowed 6 queries and solve
                for R1, R2, .. R6

for sub-task 2: we get only 2 queries, from 1st query we fetch 3 coeffs and plug it during 2nd
                query.
                
                keep modding at each step with the coeff of adj term to avoid over/underflow
                
                NOTE: 1LL<<x is same as 2^x but vv fast
*/

ll ll52 = 1LL<<52, ll42 = 1LL<<42, ll35 = 1LL<<35; // 210/4 , 210/5 , 210/6
ll ll51 = 1LL<<51, ll25 = 1LL<<25, ll17 = 1LL<<17, ll12 = 1LL<<12, ll10 = 1LL<<10, ll8 = 1LL<<8;
// 51/1 , 51/2 , 51/3 , 51/4 , 51/5 , 51/6
int main() {
    fastIO;
    ll t, w; cin >> t >> w;
    for(ll q = 1; q <= t; q++) {
        ll query1, query2, judge;
        cout << 210 << endl; // asing the judge no(rings) on 210th day. Ask why 210?
        cin >> query1;
        ll ans[6]; //
        ans[5] = (query1 % ll42) / ll35; // ask why 35? 210/6 = 35
        ans[4] = ((query1 - ans[5]*ll35) % ll52) / ll42; //210/5 = 42
        ans[3] = (query1 - ans[5]*ll35 - ans[4]*ll42) / ll52;
        //after this exponent > 63 .... time for new query 210/2 = 105 > 63
        cout << 51 << endl;
        cin >> query2;
        query2 -= ans[5]*ll8 + ans[4]*ll10 + ans[3]*ll12; //llx = 2^x query2 = r1.2^i + r2.2
        ans[2] = (query2 % ll25) / ll17;
        ans[1] = ((query2 - ans[2]*ll17) % ll51) / ll25;
        ans[0] = (query2 - ans[2]*ll17 - ans[1]*ll25) / ll51;
        for(ll i = 0; i < 6; i++) {
            cout << ans[i] << " ";
            cout.flush();
        }
        cout << endl;
        cin >> judge;
    }
    return 0;
}