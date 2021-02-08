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
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)

using namespace std;

ll find(vll sweetness, vector<bool> odd, ll maxSweet, ll maxOdd, ll n) {
    ll start = 1, end = 1, sum = sweetness[1], currOdd;
    if(odd[1]) currOdd = 1;
    else currOdd = 0;
    ll maxi = LLONG_MIN;
    while(start <= n && end <= n) {
        if(sum <= maxSweet && currOdd <= maxOdd) {
            end++;
            if(end <= n) {
                sum += sweetness[end];
                if(odd[end])
                    currOdd++;
            }
            if(sum <= maxSweet && currOdd <= maxOdd)
                maxi = max(maxi, sum);
        }
        else {
            if(sum - sweetness[end] <= maxSweet && ((currOdd - maxOdd == 1 && odd[end]) || (currOdd <= maxOdd)))
                maxi = max(maxi, sum - sweetness[end]);
            sum -= sweetness[start];
            if(odd[start])
                currOdd--;
            start++;
        }
        if(sum <= maxSweet && currOdd <= maxOdd)
            maxi = max(maxi, sum);
        cout << start << " " << end << " " << sum << " " << currOdd<< endl;
    }
    if(sum <= maxSweet)
        maxi = max(maxi, sum);
    return maxi;
}

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll q = 0; q < t; q++) {
        ll n, o, d, x1, x2, a, b, c, m, l;
        cin >> n >> o >> d >> x1 >> x2 >> a >> b >> c >> m >> l;
        vll sweetness(n+1);
        vll x(n+1); x[1] = x1; x[2] = x2;
        sweetness[1] = (x1 + l) % m;
        sweetness[2] = (x2 + l) % m;
        for(ll i = 3; i <= n; i++) {
            x[i] =  (a*x[i-1] + b*x[i-2] + c) % m;
            sweetness[i] = x[i] + l;
        }
        vector<bool> odd(n+1, false);
        for(ll i = 1; i <= n; i++)
            if(sweetness[i] % 2 != 0)
                odd[i] = true;
        ll ans = find(sweetness, odd, d, o, n);
        if(ans > LLONG_MIN)
            cout << "Case #" << q+1 << ": IMPOSSIBLE" <<  endl;
        else 
            cout << "Case #" << q+1 << ": " << ans << endl;
    }
    return 0;
}