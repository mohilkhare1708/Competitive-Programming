#include <bits/stdc++.h>
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>>
#define vpll vector<pair<long long int, long long int>>
#define mp make_pair
#define pb push_back
#define here std::cout << "here" << std::endl;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

const ll mod = 1000000007;

using namespace std;

int main() {
    fastIO;
    ll n; cin >> n;
    vll a;
    ll sum = 0, ele;
    ll keeper[100001] = {0};
    while(cin >> ele) {
        a.pb(ele);
        sum += ele;
        keeper[ele]++;
    }
    if(a.size() != n) {
        cout << "Wrong Input";
        exit(0);
    }
    queue<ll> remaining;
    for(ll i = a[0]; i <= 100000; i++)
        if(!keeper[i])
            remaining.push(i);
    for(ll i = a[0]; i <= a[n-1]; i++) {
        if(!keeper[i]) continue;
        ll fron = remaining.front();
        while(fron < i && !remaining.empty()) {
            remaining.pop();
            fron = remaining.front();
        }
        for(ll k = 0; k < keeper[i]-1; k++) {
            sum -= i;
            ll fr = remaining.front();
            sum += fr;
            remaining.pop();
        }
    }
    cout << sum;
    return 0;
}