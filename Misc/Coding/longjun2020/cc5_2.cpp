//Codechef: mohilllll Codeforces: mohilkhare Google: mohilkhare17
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
#define here std::cout << "here\n";
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)

using namespace std;
// using namespace std::chrono;
// auto start = high_resolution_clock::now();
// auto stop = high_resolution_clock::now();
// auto duration = duration_cast<microseconds>(stop - start);
// cout << "Time taken by function: " << duration.count() << " microseconds" << endl;

int main() {
    fastIO;
    ll lo = 1, n; cin >> n;
    ll hi = n;
    for(;;) {
        cout << lo << endl;
        char resp; cin >> resp;
        if(resp == 'E')
            break;
        else {
            lo++;
            if(resp == 'L') {
                ll mid = (lo+hi)/2;
                cout << mid << endl;
                cin >> resp;
                if(resp == 'E')
                    break;
                else if(resp == 'L')
                    hi = mid;
                else 
                    lo = mid;
            }
        }
        cout << hi << endl;
        cin >> resp;
        if(resp == 'E')
            break;
        else {
            hi--;
            if(resp == 'G') {
                ll mid = (lo+hi)/2;
                cout << mid << endl;
                cin >> resp;
                if(resp == 'E')
                    break;
                else if(resp == 'L')
                    hi = mid;
                else 
                    lo = mid;
            }
        }
    }
}